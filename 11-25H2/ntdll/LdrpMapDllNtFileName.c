/*
 * XREFs of LdrpMapDllNtFileName @ 0x180072240
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18006FE50 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x1800702A8 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x1800EDE7C (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpCodeAuthzCheckDllAllowed @ 0x180071248 (LdrpCodeAuthzCheckDllAllowed.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     LdrpCheckForRetryLoading @ 0x180072F4C (LdrpCheckForRetryLoading.c)
 *     LdrpLogError @ 0x1800FD63C (LdrpLogError.c)
 *     LdrpValidateIntegrityContinuity @ 0x18010D3EC (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x18010D4E8 (LdrpSetModuleSigningLevel.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x180114A34 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrAppxHandleIntegrityFailure @ 0x180118F10 (LdrAppxHandleIntegrityFailure.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x1801660B0 (NtRaiseHardError.c)
 *     ZwSystemDebugControl @ 0x180166C10 (ZwSystemDebugControl.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  ULONG v6; // eax
  __int64 v7; // r12
  __int64 v8; // rcx
  int i; // r13d
  NTSTATUS v10; // eax
  int v11; // r9d
  int v12; // edi
  int v13; // eax
  char *v15; // rcx
  char *v16; // rcx
  __int64 v17; // rdx
  HANDLE v18; // [rsp+30h] [rbp-59h]
  HANDLE FileHandle; // [rsp+40h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING v21; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  char v25; // [rsp+F0h] [rbp+67h] BYREF
  int v26; // [rsp+100h] [rbp+77h] BYREF
  int v27; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 176);
  v27 = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v21 = 0LL;
  Handle = 0LL;
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
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v8 = 2147353476LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v15 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v15 & 0x20) != 0 )
      LdrpLogEtwEvent(5253, -1LL, 255, 255, 0LL, 0LL);
  }
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
  {
    v21 = *a2;
    ZwSystemDebugControl(38LL, &v21, 16LL);
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
    || (*(_DWORD *)(a1 + 32) & 0x1000000) != 0
    && (v17 = *(_QWORD *)(a1 + 56), v26 = 0, v25 = 0, (NtCurrentPeb()->BitField & 0x10) == 0)
    && (LOBYTE(v11) = 8,
        v12 = LdrpSetModuleSigningLevel((_DWORD)FileHandle, v17, (unsigned int)&v26, v11, (__int64)&v25),
        v12 < 0) )
  {
LABEL_33:
    NtClose(FileHandle);
    return (unsigned int)v12;
  }
  v18 = FileHandle;
  v13 = NtCreateSection(&Handle, 13LL, 0LL);
  v12 = v13;
  if ( v13 < 0 )
  {
    if ( (unsigned int)(v13 + 1073740674) > 1 )
    {
      if ( v13 == -1073741801 )
      {
LABEL_23:
        LdrpLogError((unsigned int)v12, 5253LL, 0LL, v2 + 72);
        goto LABEL_33;
      }
      if ( v13 != -1073740702 )
      {
        if ( v13 != -1073741670 && v13 != -1073741523 )
        {
          v22[1] = v13;
          v22[0] = v2 + 72;
          if ( (int)NtRaiseHardError(3221225595LL, 2LL, 1LL, v22, 1, &v27, v18) >= 0 && LdrInitState != 3 )
            ++LdrpFatalHardErrorCount;
        }
        goto LABEL_23;
      }
    }
    v12 = LdrAppxHandleIntegrityFailure((unsigned int)v13);
    goto LABEL_23;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v16 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v16 & 0x20) != 0 )
      LdrpLogEtwEvent(5254, -1LL, 255, 255, 0LL, 0LL);
  }
  if ( !UseWOW64
    && (*(_DWORD *)(a1 + 32) & 0x100) == 0
    && (v12 = LdrpCodeAuthzCheckDllAllowed((__int64)a2, (__int64)FileHandle), (int)(v12 + 0x80000000) >= 0)
    && v12 != -1073741275
    || (v12 = LdrpMapDllWithSectionHandle(a1, (__int64)Handle), !v3)
    || v12 < 0 )
  {
    NtClose(Handle);
    goto LABEL_33;
  }
  *(_QWORD *)(a1 + 184) = FileHandle;
  *(_QWORD *)(a1 + 24) = Handle;
  return (unsigned int)v12;
}
