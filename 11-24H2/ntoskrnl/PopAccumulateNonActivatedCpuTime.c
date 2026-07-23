/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x1404905D4
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1403A5504 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14075F150 (PopDripsWatchdogUpdateMetrics.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A1BB98 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmParkGetParkNode @ 0x14049067C (PpmParkGetParkNode.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x14049071C (PpmIdleSnapConcurrencyIdleTime.c)
 */

void __fastcall PopAccumulateNonActivatedCpuTime(char a1, _QWORD *a2, _QWORD *a3)
{
  KIRQL v6; // r15
  __int64 ParkNode; // rax
  KSPIN_LOCK *v8; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc(&PpmParkStateLock);
  ParkNode = PpmParkGetParkNode(0LL, 0LL);
  if ( ParkNode )
  {
    v8 = *(KSPIN_LOCK **)(ParkNode + 1104);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8);
  }
  KeReleaseSpinLock(&PpmParkStateLock, v6);
  if ( !a1 )
    *a3 -= *a2;
  *a2 = 0LL;
}
