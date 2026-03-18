/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x140A97414
 * Callers:
 *     CcInitializePrivateVolumeCacheMap @ 0x1403A84A0 (CcInitializePrivateVolumeCacheMap.c)
 *     CcRegisterExternalCacheEx @ 0x140577690 (CcRegisterExternalCacheEx.c)
 *     CcInitializePartition @ 0x140579A18 (CcInitializePartition.c)
 *     CcInitializeCacheManager @ 0x140C049F8 (CcInitializeCacheManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + **a1) + 18512LL);
}
