/*
 * XREFs of KeInvalidateRangeAllCachesNoIpi @ 0x14039D220
 * Callers:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x14039AEE8 (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCaches @ 0x140475CD0 (KeInvalidateRangeAllCaches.c)
 *     MiFlushGraphicsPtes @ 0x1404CFF34 (MiFlushGraphicsPtes.c)
 *     IvtInitializeIdentityMappings @ 0x14056C3B8 (IvtInitializeIdentityMappings.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14039D290 (KeInvalidateAllCaches.c)
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
