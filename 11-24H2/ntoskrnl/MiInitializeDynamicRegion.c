/*
 * XREFs of MiInitializeDynamicRegion @ 0x140C54EFC
 * Callers:
 *     MiInitializeSystemCache @ 0x1407ED560 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x140C53B98 (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140C54094 (MiBuildSystemDataViews.c)
 *     MiInitializeKernelStacks @ 0x140C57458 (MiInitializeKernelStacks.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140C59D18 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140C59F78 (MiInitializeSystemPtes.c)
 *     MiInitializeSystemImageRegion @ 0x140C5B698 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1403A5848 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14067936C (MiBuildDynamicRegion.c)
 */

__int64 __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}
