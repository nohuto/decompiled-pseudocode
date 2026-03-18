/*
 * XREFs of PopPolicyWorkerThread @ 0x140486360
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  KIRQL v11; // r8
  unsigned int v12; // ecx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  v3 = PopWorkerStatus | a1;
  PopWorkerStatus = v3;
  v4 = 0;
  v5 = v3;
  while ( 1 )
  {
    v11 = v2;
    v12 = PopWorkerPending & v5;
    if ( !v12 )
      break;
    _BitScanForward((unsigned int *)&v6, v12);
    v7 = ~(1 << v6);
    PopWorkerPending &= v7;
    PopWorkerStatus = v3 & v7;
    KeReleaseSpinLock(&PopWorkerSpinLock, v11);
    if ( PopWorkerTypes[v6] )
      v4 |= guard_dispatch_icall_no_overrides(PopWorkerTypes, v8, v9, v10);
    v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    PopWorkerStatus |= 1 << v6;
    v5 = PopWorkerStatus;
    v3 = PopWorkerStatus;
  }
  PopWorkerPending |= v4;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
