/*
 * XREFs of CcRemoveExternalCache @ 0x1405777F4
 * Callers:
 *     CcUnregisterExternalCache @ 0x140577970 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall CcRemoveExternalCache(_QWORD *a1)
{
  KIRQL v2; // di
  __int64 v3; // rcx
  _QWORD *v4; // r8
  int v5; // edx

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = a1[4];
  if ( *(_QWORD **)(v3 + 8) != a1 + 4 || (v4 = (_QWORD *)a1[5], (_QWORD *)*v4 != a1 + 4) )
    __fastfail(3u);
  v5 = CcNumberOfExternalCaches;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x1E69uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcNumberOfExternalCaches = v5 - 1;
  if ( CcEnablePerVolumeLazyWriter )
    CcDereferencePartitionAndPrivateVolumeCacheMap(a1[6], a1[7]);
  KeReleaseSpinLock(&CcExternalCacheListLock, v2);
}
