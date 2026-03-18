/*
 * XREFs of MiReleaseSystemCacheView @ 0x1402D4388
 * Callers:
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x1407ED648 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402D24DC (MiReturnSystemCacheRegionsToKva.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x1402D4480 (MiRebalanceSystemCacheFreedViews.c)
 *     MiFreeSystemCacheView @ 0x1402D46C4 (MiFreeSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1402D4740 (MiGetSystemCacheReverseMap.c)
 *     MiGetSystemCacheRegionsToFree @ 0x14047F2F4 (MiGetSystemCacheRegionsToFree.c)
 */

void __fastcall MiReleaseSystemCacheView(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 SystemCacheReverseMap; // rdi
  KIRQL v4; // bp
  unsigned int v5; // esi
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  if ( a2 )
  {
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2);
    v2 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FFLL));
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 18524) )
      return;
    SystemCacheReverseMap = 0LL;
  }
  v7[1] = v7;
  v7[0] = v7;
  v4 = ExAcquireSpinLockExclusive(&dword_140E2F2B8);
  _InterlockedOr(v6, 0);
  v5 = KiTbFlushTimeStamp;
  MiRebalanceSystemCacheFreedViews(v2, (unsigned int)KiTbFlushTimeStamp, 0LL);
  if ( SystemCacheReverseMap )
    MiFreeSystemCacheView(v2, v5, SystemCacheReverseMap);
  else
    MiGetSystemCacheRegionsToFree(v2, v7);
  MiReleaseSpinLockExclusive(&dword_140E2F2B8, v4);
  if ( v7[0] != v7 )
    MiReturnSystemCacheRegionsToKva(v2, v7);
}
