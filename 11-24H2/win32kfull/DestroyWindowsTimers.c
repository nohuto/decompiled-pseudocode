/*
 * XREFs of DestroyWindowsTimers @ 0x14023E90C
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401D6118 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x14023EC30 (FreeTimer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1402899F0 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DestroyWindowsTimers(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  struct tagTIMER *v6; // rsi

  result = W32GetUserSessionState(a1, a2);
  v4 = (_QWORD *)(result + 57584);
  v5 = *(_QWORD **)(result + 57584);
  while ( v5 != v4 )
  {
    v6 = (struct tagTIMER *)(v5 - 9);
    v5 = (_QWORD *)*v5;
    if ( (*((_DWORD *)v6 + 12) & 0x1000) != 0 )
    {
      result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1277LL);
    }
    else if ( *((_QWORD *)v6 + 13) == a1 )
    {
      if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
      {
        result = FreeTimer(v6);
        v5 = (_QWORD *)result;
      }
      else
      {
        result = FreeTimer(v6);
      }
    }
  }
  return result;
}
