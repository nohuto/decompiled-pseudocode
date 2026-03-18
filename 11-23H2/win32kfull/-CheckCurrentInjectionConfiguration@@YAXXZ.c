/*
 * XREFs of ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x1C01AE534
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01AFFF4 (xxxInjectTouchInput.c)
 *     NtUserInitializeTouchInjection @ 0x1C01D48C0 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01AEBD0 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 */

void CheckCurrentInjectionConfiguration(void)
{
  int v0; // edx
  __int64 v1; // rcx
  __int64 v2; // rax

  v0 = 0;
  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( WPP_MAIN_CB.DeviceLock.Header.SignalState == 1 || (v2 = *(_QWORD *)(v1 + 912)) != 0 && *(_DWORD *)(v2 + 52) )
  {
    if ( WPP_MAIN_CB.DeviceLock.Header.SignalState )
    {
      WPP_MAIN_CB.DeviceLock.Header.SignalState = 0;
      v0 = 1;
    }
    RealizePendingRecreateTouchInjectionDevices((struct tagPROCESSINFO *)v1, v0);
  }
}
