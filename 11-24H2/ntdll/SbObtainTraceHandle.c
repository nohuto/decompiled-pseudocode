/*
 * XREFs of SbObtainTraceHandle @ 0x1800A2E50
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18008D6B0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     EtwNotificationUnregister @ 0x180049B40 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
 *     SbpTraceContextUpdate @ 0x1800A2F94 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbObtainTraceHandle(_QWORD *a1)
{
  char *pShimData; // rbx
  char *v3; // rbx
  __int64 v5; // rax
  LONG v6; // eax
  signed __int64 v7; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r9
  ULONGLONG RegHandle; // [rsp+48h] [rbp+10h] BYREF

  RegHandle = 0LL;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData )
    return 0LL;
  v3 = pShimData + 2016;
  if ( !v3 || !*((_DWORD *)v3 + 12) )
    return 0LL;
  if ( a1 )
    *a1 = 0LL;
  if ( !*((_DWORD *)v3 + 3) )
    return 0LL;
  v5 = *((_QWORD *)v3 + 2);
  if ( v5 )
  {
    if ( a1 )
      *a1 = v5;
    return 1LL;
  }
  v6 = EtwNotificationRegister(&MS_Windows_AeSwitchBack_Provider, 3u, 0LL, 0LL, &RegHandle);
  if ( v6 )
  {
    RtlSetLastWin32Error(v6);
    return 0LL;
  }
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 2, RegHandle, 0LL);
  if ( v7 )
  {
    EtwNotificationUnregister(RegHandle, 0LL);
    if ( a1 )
      *a1 = v7;
    return 1LL;
  }
  if ( a1 )
    *a1 = RegHandle;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  SbpTraceContextUpdate(
    RegHandle,
    (_DWORD)v3 + 48,
    0,
    ProcessParameters->ImagePathName.Length,
    (__int64)ProcessParameters->ImagePathName.Buffer);
  return 1LL;
}
