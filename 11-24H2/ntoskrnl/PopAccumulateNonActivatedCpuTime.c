/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x140495D14
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1403CA934 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140760150 (PopDripsWatchdogUpdateMetrics.c)
 *     PopPdcIdleResiliencyCallback @ 0x140A27118 (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmParkGetParkNode @ 0x140495DBC (PpmParkGetParkNode.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140495E5C (PpmIdleSnapConcurrencyIdleTime.c)
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
