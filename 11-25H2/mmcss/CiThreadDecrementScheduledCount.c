/*
 * XREFs of CiThreadDecrementScheduledCount @ 0x1C000E2D0
 * Callers:
 *     CiProcessSuspend @ 0x1C00011E0 (CiProcessSuspend.c)
 *     CiThreadCleanup @ 0x1C000DF90 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x1C000E130 (CiSystemAcquirePushLock.c)
 *     CiNdisUpdateThrottleState @ 0x1C000E490 (CiNdisUpdateThrottleState.c)
 */

__int64 __fastcall CiThreadDecrementScheduledCount(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    CiSystemAcquirePushLock((__int64)&WPP_MAIN_CB.Queue);
    if ( !--LODWORD(WPP_MAIN_CB.DeviceExtension) )
      CiNdisUpdateThrottleState();
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
