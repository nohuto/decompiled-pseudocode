/*
 * XREFs of HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x140010870
 * Callers:
 *     HUBPSM20_IssuingHubResetFromDisconnected @ 0x140012CF0 (HUBPSM20_IssuingHubResetFromDisconnected.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended @ 0x140012D20 (HUBPSM20_IssuingHubResetOnControlTransferFailureInSuspended.c)
 *     HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart @ 0x140012D50 (HUBPSM20_IssuingHubResetOnControlTransferFailureOnStart.c)
 *     HUBPSM20_IssuingHubResetWithTimer @ 0x140012D80 (HUBPSM20_IssuingHubResetWithTimer.c)
 *     HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect @ 0x1400132B0 (HUBPSM20_ResettingHubOnFailureWhileWaitingForReconnect.c)
 *     HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected @ 0x140013580 (HUBPSM20_StoppingTimerAndQueueingHubResetInDisconnected.c)
 *     HUBPSM30_IssuingHubResetOnTimedOut @ 0x140014080 (HUBPSM30_IssuingHubResetOnTimedOut.c)
 *     HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent @ 0x140014450 (HUBPSM30_ResettingHubAndFlushingUserInitiatedResetOnOverCurrent.c)
 *     HUBFDO_IoctlResetHub @ 0x14007E690 (HUBFDO_IoctlResetHub.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 */

char __fastcall HUBMUX_CheckAndQueueIfResetHubIsEnabled(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  char v3; // di
  KIRQL v4; // dl

  v1 = (KSPIN_LOCK *)(a1 + 2336);
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2336));
  if ( (*(_DWORD *)(a1 + 2368) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2368), 0xFFFFFFFB);
    v3 = 1;
  }
  KeReleaseSpinLock(v1, v4);
  if ( v3 )
    HUBSM_AddEvent(a1 + 1280, 2047);
  return v3;
}
