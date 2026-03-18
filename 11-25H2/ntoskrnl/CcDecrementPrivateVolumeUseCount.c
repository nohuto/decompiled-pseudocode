/*
 * XREFs of CcDecrementPrivateVolumeUseCount @ 0x1403A6674
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403A6590 (CcForEachPrivateVolumeCacheMap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403A81B8 (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDecrementPrivateVolumeUseCount(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( !v1 )
    KeBugCheckEx(0x34u, 0x1D0FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  result = (unsigned int)(v1 - 1);
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
