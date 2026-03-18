/*
 * XREFs of MiInitializeDynamicRegion @ 0x140C43C7C
 * Callers:
 *     MiInitializeSystemCache @ 0x1407DD6C0 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x140C42968 (MiBuildPagedPool.c)
 *     MiInitializeNonPagedPool @ 0x140C42A74 (MiInitializeNonPagedPool.c)
 *     MiBuildSystemDataViews @ 0x140C42E1C (MiBuildSystemDataViews.c)
 *     MiInitializeKernelStacks @ 0x140C46178 (MiInitializeKernelStacks.c)
 *     MiInitializeNonCachedMappingRegion @ 0x140C489E8 (MiInitializeNonCachedMappingRegion.c)
 *     MiInitializeSystemPtes @ 0x140C48C48 (MiInitializeSystemPtes.c)
 *     MiInitializeSystemImageRegion @ 0x140C4A30C (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14038EAE8 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14066DAC0 (MiBuildDynamicRegion.c)
 */

__int64 __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  v1 = MiSystemVaToDynamicBitmap(a1);
  return MiBuildDynamicRegion(v1, v2, v3);
}
