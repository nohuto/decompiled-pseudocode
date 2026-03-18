/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x1403AEA10
 * Callers:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x1403AC6DC (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     KeInvalidateRangeAllCaches @ 0x14047A650 (KeInvalidateRangeAllCaches.c)
 *     MiFlushGraphicsPtes @ 0x1404D6AE4 (MiFlushGraphicsPtes.c)
 *     IvtInitializeIdentityMappings @ 0x14056EF28 (IvtInitializeIdentityMappings.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 */

char __fastcall KeInvalidateRangeAllCachesNoIpi(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rdx
  __int64 CFlushSize; // r8
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 < KiLargestCacheSize )
  {
    v3 = a1 + a2;
    CFlushSize = KeGetCurrentPrcb()->CFlushSize;
    _RAX = (char *)(a1 & ~(CFlushSize - 1));
    if ( _bittest64(&KeFeatureBits, 0x23u) )
    {
      do
      {
        __asm { clflushopt byte ptr [rax] }
        _RAX += CFlushSize;
      }
      while ( (unsigned __int64)_RAX < v3 );
      _InterlockedOr(&v6, 0);
    }
    else
    {
      do
      {
        _mm_clflush(_RAX);
        _RAX += CFlushSize;
      }
      while ( (unsigned __int64)_RAX < v3 );
    }
  }
  else
  {
    LOBYTE(_RAX) = KeInvalidateAllCaches();
  }
  return (char)_RAX;
}
