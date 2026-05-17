/*
 * XREFs of SbObtainTraceHandle @ 0x1800BE760
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800719D0 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     SbpTraceContextUpdate @ 0x1800BE8A4 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbObtainTraceHandle(signed __int64 *a1)
{
  char *pShimData; // rbx
  char *v3; // rbx
  signed __int64 v5; // rax
  unsigned int v6; // eax
  signed __int64 v7; // rsi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r9
  signed __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
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
  v6 = EtwNotificationRegister(MS_Windows_AeSwitchBack_Provider, 3, 0LL, 0LL, (unsigned __int64 *)&v9);
  if ( v6 )
  {
    RtlSetLastWin32Error(v6);
    return 0LL;
  }
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 2, v9, 0LL);
  if ( v7 )
  {
    EtwNotificationUnregister(v9, 0LL);
    if ( a1 )
      *a1 = v7;
    return 1LL;
  }
  if ( a1 )
    *a1 = v9;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  SbpTraceContextUpdate(
    v9,
    (_DWORD)v3 + 48,
    0,
    ProcessParameters->ImagePathName.Length,
    (__int64)ProcessParameters->ImagePathName.Buffer);
  return 1LL;
}
