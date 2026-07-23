/*
 * XREFs of MiInitializeDynamicRegion @ 0x140C5708C
 * Callers:
 *     MiInitializeSystemCache @ 0x1407EDB30 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x140C55D28 (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140C55E34 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140C56224 (MiBuildSystemDataViews.c)
 *     MiInitializeKernelStacks @ 0x140C595E8 (MiInitializeKernelStacks.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140C5BEA8 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140C5C108 (MiInitializeSystemPtes.c)
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14026CB38 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14067A54C (MiBuildDynamicRegion.c)
 */

__int64 __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8
  __int64 v4; // r9

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3, v4);
}
