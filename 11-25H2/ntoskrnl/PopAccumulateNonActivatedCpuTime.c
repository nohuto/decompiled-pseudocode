/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x140493488
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14026A140 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1407535B8 (PopDripsWatchdogUpdateMetrics.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A1E178 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PpmParkGetParkNode @ 0x140493530 (PpmParkGetParkNode.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140493574 (PpmIdleSnapConcurrencyIdleTime.c)
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
    v8 = *(KSPIN_LOCK **)(ParkNode + 48);
    if ( v8 )
      PpmIdleSnapConcurrencyIdleTime(v8);
  }
  KeReleaseSpinLock(&PpmParkStateLock, v6);
  if ( !a1 )
    *a3 -= *a2;
  *a2 = 0LL;
}
