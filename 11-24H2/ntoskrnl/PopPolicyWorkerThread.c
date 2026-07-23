/*
 * XREFs of PopPolicyWorkerThread @ 0x140481950
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopPolicyWorkerThread(int a1)
{
  KIRQL v2; // al
  int v3; // esi
  int v4; // ebp
  int v5; // ecx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  KIRQL v9; // r8
  unsigned int v10; // ecx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  v3 = PopWorkerStatus | a1;
  PopWorkerStatus = v3;
  v4 = 0;
  v5 = v3;
  while ( 1 )
  {
    v9 = v2;
    v10 = PopWorkerPending & v5;
    if ( !v10 )
      break;
    _BitScanForward((unsigned int *)&v6, v10);
    v7 = ~(1 << v6);
    PopWorkerPending &= v7;
    PopWorkerStatus = v3 & v7;
    KeReleaseSpinLock(&PopWorkerSpinLock, v9);
    if ( PopWorkerTypes[v6] )
      v4 |= guard_dispatch_icall_no_overrides(PopWorkerTypes, v8);
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    PopWorkerStatus |= 1 << v6;
    v5 = PopWorkerStatus;
    v3 = PopWorkerStatus;
  }
  PopWorkerPending |= v4;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
