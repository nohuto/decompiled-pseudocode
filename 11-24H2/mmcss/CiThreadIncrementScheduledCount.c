/*
 * XREFs of CiThreadIncrementScheduledCount @ 0x14000F8C0
 * Callers:
 *     CiProcessSuspend @ 0x1400011E0 (CiProcessSuspend.c)
 *     CiThreadCreate @ 0x14000ECB0 (CiThreadCreate.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x14000F6C0 (CiSystemAcquirePushLock.c)
 *     CiNdisUpdateThrottleState @ 0x14000FA20 (CiNdisUpdateThrottleState.c)
 */

__int64 __fastcall CiThreadIncrementScheduledCount(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    CiSystemAcquirePushLock((__int64)&WPP_MAIN_CB.Queue);
    if ( ++LODWORD(WPP_MAIN_CB.DeviceExtension) == 1 )
      CiNdisUpdateThrottleState();
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  }
  return result;
}
