/*
 * XREFs of MiReleaseSystemCacheView @ 0x140355608
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 *     MmFreeSystemCacheReserveView @ 0x1407EDC18 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x140353754 (MiReturnSystemCacheRegionsToKva.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x140355700 (MiRebalanceSystemCacheFreedViews.c)
 *     MiFreeSystemCacheView @ 0x140355944 (MiFreeSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1403559C0 (MiGetSystemCacheReverseMap.c)
 *     MiGetSystemCacheRegionsToFree @ 0x14047A114 (MiGetSystemCacheRegionsToFree.c)
 */

void __fastcall MiReleaseSystemCacheView(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 SystemCacheReverseMap; // rdi
  KIRQL v4; // bp
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1;
  if ( a2 )
  {
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2, a2);
    v2 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FFLL));
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 18524) )
      return;
    SystemCacheReverseMap = 0LL;
  }
  v9[1] = v9;
  v9[0] = v9;
  v4 = ExAcquireSpinLockExclusive(&dword_140E2F3F8);
  _InterlockedOr(v8, 0);
  v5 = KiTbFlushTimeStamp;
  MiRebalanceSystemCacheFreedViews(v2, (unsigned int)KiTbFlushTimeStamp, 0LL);
  if ( SystemCacheReverseMap )
    MiFreeSystemCacheView(v2, v5, SystemCacheReverseMap);
  else
    MiGetSystemCacheRegionsToFree(v2, v9);
  MiReleaseSpinLockExclusive(&dword_140E2F3F8, v4);
  if ( v9[0] != v9 )
    MiReturnSystemCacheRegionsToKva(v2, v9, v6, v7);
}
