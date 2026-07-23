/*
 * XREFs of LdrResRelease @ 0x180106520
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1800773E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrResRelease(PVOID InitModule, PCWSTR SourceString, ULONG Flags)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int32 v10; // edi
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+80h] [rbp+8h] BYREF
  PVOID DllHandle; // [rsp+98h] [rbp+20h] BYREF

  Lcid = 0;
  DestinationString = 0LL;
  v14[0] = 2621478LL;
  v14[1] = L"LdrResRelease Enter";
  v15[0] = 2490404LL;
  v15[1] = L"LdrResRelease Exit";
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v14, *(unsigned __int8 *)v12);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( !InitModule )
    return 3221225485LL;
  DllHandle = 0LL;
  if ( (Flags & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return 3221225485LL;
    }
    else
    {
      Lcid = 0;
    }
    LOWORD(SourceString) = Lcid;
  }
  if ( (Flags & 0xC00) != 0 )
  {
    v13 = LdrRemoveLoadAsDataTable(InitModule, &DllHandle, 0LL, Flags);
    v10 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -1073740024 && v13 != -1073741511 )
        goto LABEL_12;
      goto LABEL_11;
    }
  }
  else
  {
    DllHandle = InitModule;
  }
  v9 = (unsigned __int64)DllHandle;
  LdrUnloadAlternateResourceModuleEx(DllHandle, (unsigned __int16)SourceString);
  if ( (Flags & 0xC00) != 0 && v9 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(v9 & 0xFFFFFFFFFFFFFFFCuLL));
LABEL_11:
  v10 = 0;
LABEL_12:
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v15, *(unsigned __int8 *)v8);
  }
  return v10;
}
