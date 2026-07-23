/*
 * XREFs of LdrpMapDllNtFileName @ 0x18008DF20
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180091C68 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x1800D1240 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     LdrpCheckForRetryLoading @ 0x18008EC2C (LdrpCheckForRetryLoading.c)
 *     LdrpCodeAuthzCheckDllAllowed @ 0x18008F3E8 (LdrpCodeAuthzCheckDllAllowed.c)
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLogError @ 0x1800F633C (LdrpLogError.c)
 *     LdrpValidateIntegrityContinuity @ 0x1801058EC (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x1801059E8 (LdrpSetModuleSigningLevel.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x18010CD44 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1801111B0 (LdrAppxHandleIntegrityFailure.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenFile @ 0x1801606B0 (NtOpenFile.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x180162EE0 (NtRaiseHardError.c)
 *     ZwSystemDebugControl @ 0x180163A40 (ZwSystemDebugControl.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, _UNICODE_STRING *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  ULONG v6; // eax
  __int64 v7; // r12
  __int64 v8; // rcx
  int i; // r13d
  NTSTATUS v10; // eax
  __int64 v11; // r9
  int v12; // edi
  ULONG v13; // r13d
  NTSTATUS v14; // eax
  char *v16; // rcx
  char *v17; // rcx
  __int64 v18; // rdx
  HANDLE FileHandle; // [rsp+40h] [rbp-49h] BYREF
  HANDLE SectionHandle; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING InputBuffer; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 Parameters[2]; // [rsp+60h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  char v25; // [rsp+F0h] [rbp+67h] BYREF
  int v26; // [rsp+100h] [rbp+77h] BYREF
  ULONG Response; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 176);
  Response = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  InputBuffer = 0LL;
  SectionHandle = 0LL;
  if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, 0LL) )
    return 3221226029LL;
  LdrpLogDllState(*(_QWORD *)(v2 + 48), (unsigned __int16 *)(v2 + 72), 5285);
  v6 = 64;
  ObjectAttributes.Length = 48;
  if ( !LdrpUseImpersonatedDeviceMap )
    v6 = 2112;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = v6;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v8 = 2147353476LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v16 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v16 & 0x20) != 0 )
      LdrpLogEtwEvent(5253, -1LL, 255, 255, 0LL, 0LL);
  }
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
  {
    InputBuffer = *a2;
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
  }
  for ( i = 0; ; i = 1 )
  {
    v10 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    v12 = v10;
    if ( v10 >= 0 )
      break;
    if ( v10 == -1073741772 || v10 == -1073741766 )
      return (unsigned int)-1073741515;
    if ( v10 != -1073741790 || i || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
      return (unsigned int)v12;
  }
  if ( LdrpAuditIntegrityContinuity
    && (v12 = LdrpValidateIntegrityContinuity(a1, FileHandle), v12 < 0)
    && LdrpEnforceIntegrityContinuity
    || (v13 = 0x1000000, (*(_DWORD *)(a1 + 32) & 0x1000000) != 0)
    && (v18 = *(_QWORD *)(a1 + 56), v26 = 0, v25 = 0, (NtCurrentPeb()->BitField & 0x10) == 0)
    && (LOBYTE(v11) = 8, v12 = LdrpSetModuleSigningLevel(FileHandle, v18, &v26, v11, &v25), v12 < 0) )
  {
LABEL_34:
    NtClose(FileHandle);
    return (unsigned int)v12;
  }
  if ( UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
    v13 = 17825792;
  v14 = NtCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, v13, FileHandle);
  v12 = v14;
  if ( v14 < 0 )
  {
    if ( (unsigned int)(v14 + 1073740674) > 1 )
    {
      if ( v14 == -1073741801 )
      {
LABEL_24:
        LdrpLogError((unsigned int)v12, 5253LL, 0LL, v2 + 72);
        goto LABEL_34;
      }
      if ( v14 != -1073740702 )
      {
        if ( v14 != -1073741670 && v14 != -1073741523 )
        {
          Parameters[1] = v14;
          Parameters[0] = v2 + 72;
          if ( NtRaiseHardError(-1073741701, 2u, 1u, Parameters, 1u, &Response) >= 0 && LdrInitState != 3 )
            ++LdrpFatalHardErrorCount;
        }
        goto LABEL_24;
      }
    }
    v12 = LdrAppxHandleIntegrityFailure((unsigned int)v14);
    goto LABEL_24;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v17 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v17 & 0x20) != 0 )
      LdrpLogEtwEvent(5254, -1LL, 255, 255, 0LL, 0LL);
  }
  if ( !UseWOW64
    && (*(_DWORD *)(a1 + 32) & 0x100) == 0
    && (v12 = LdrpCodeAuthzCheckDllAllowed(a2, FileHandle), (int)(v12 + 0x80000000) >= 0)
    && v12 != -1073741275
    || (v12 = LdrpMapDllWithSectionHandle(a1, SectionHandle), !v3)
    || v12 < 0 )
  {
    NtClose(SectionHandle);
    goto LABEL_34;
  }
  *(_QWORD *)(a1 + 184) = FileHandle;
  *(_QWORD *)(a1 + 24) = SectionHandle;
  return (unsigned int)v12;
}
