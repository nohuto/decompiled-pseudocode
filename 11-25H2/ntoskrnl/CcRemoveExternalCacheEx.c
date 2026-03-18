/*
 * XREFs of CcRemoveExternalCacheEx @ 0x1405778A0
 * Callers:
 *     CcUnregisterExternalCacheEx @ 0x1405779B0 (CcUnregisterExternalCacheEx.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1403A549C (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall CcRemoveExternalCacheEx(_QWORD *a1)
{
  KIRQL v2; // di
  __int64 v3; // r8
  _QWORD *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( CcEnablePerVolumeLazyWriter )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
    v3 = a1[4];
    if ( *(_QWORD **)(v3 + 8) != a1 + 4 || (v4 = (_QWORD *)a1[5], (_QWORD *)*v4 != a1 + 4) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( CcNumberOfExternalCaches - 1 >= (unsigned int)CcNumberOfExternalCaches )
      KeBugCheckEx(0x34u, 0x244CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v5 = a1[9];
    v6 = a1[8];
    --CcNumberOfExternalCaches;
    CcDereferencePartitionAndPrivateVolumeCacheMap(v6, v5);
    KeReleaseSpinLock(&CcExternalCacheListLock, v2);
  }
}
