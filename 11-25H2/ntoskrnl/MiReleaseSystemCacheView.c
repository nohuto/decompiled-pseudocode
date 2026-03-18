/*
 * XREFs of MiReleaseSystemCacheView @ 0x1403B5010
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1402C0010 (MiObtainSystemCacheView.c)
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 *     MmFreeSystemCacheReserveView @ 0x1407DD7A8 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x1403B5110 (MiRebalanceSystemCacheFreedViews.c)
 *     MiFreeSystemCacheView @ 0x1403B5354 (MiFreeSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1403B53D0 (MiGetSystemCacheReverseMap.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403B6388 (MiReturnSystemCacheRegionsToKva.c)
 *     MiGetSystemCacheRegionsToFree @ 0x14047FF14 (MiGetSystemCacheRegionsToFree.c)
 */

void __fastcall MiReleaseSystemCacheView(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 SystemCacheReverseMap; // rdi
  KIRQL v4; // bp
  unsigned int v5; // esi
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  if ( a2 )
  {
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2);
    v2 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FFLL));
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 18524) )
      return;
    SystemCacheReverseMap = 0LL;
  }
  v7[1] = v7;
  v7[0] = v7;
  v4 = ExAcquireSpinLockExclusive(&dword_140E2F078);
  _InterlockedOr(v6, 0);
  v5 = KiTbFlushTimeStamp;
  MiRebalanceSystemCacheFreedViews(v2, (unsigned int)KiTbFlushTimeStamp, 0LL);
  if ( SystemCacheReverseMap )
    MiFreeSystemCacheView(v2, v5, SystemCacheReverseMap);
  else
    MiGetSystemCacheRegionsToFree(v2, v7);
  MiReleaseSpinLockExclusive(&dword_140E2F078, v4);
  if ( (_QWORD *)v7[0] != v7 )
    MiReturnSystemCacheRegionsToKva(v2, v7);
}
