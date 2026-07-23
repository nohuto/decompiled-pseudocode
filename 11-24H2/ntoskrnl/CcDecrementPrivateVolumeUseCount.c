/*
 * XREFs of CcDecrementPrivateVolumeUseCount @ 0x1402639F8
 * Callers:
 *     CcForEachPrivateVolumeCacheMap @ 0x140263914 (CcForEachPrivateVolumeCacheMap.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x14042FE00 (CcCreatePrivateVolumeCacheMap.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
