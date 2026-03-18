/*
 * XREFs of DwmAsyncNotifyDisplayModeChange @ 0x1C0013DB4
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C0013D20 (UserNotifyDisplayChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 DwmAsyncNotifyDisplayModeChange()
{
  if ( qword_1C0296178 )
    return qword_1C0296178();
  else
    return 3221225659LL;
}
