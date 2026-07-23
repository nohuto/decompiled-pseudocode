/*
 * XREFs of MiDeleteCachedKernelShadowStack @ 0x14021E9E8
 * Callers:
 *     MiAdjustCachedStacks @ 0x1402AF604 (MiAdjustCachedStacks.c)
 *     MiPruneCachedStackList @ 0x1404878E8 (MiPruneCachedStackList.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406812B0 (MiRemoveNonIdealCachedStacks.c)
 * Callees:
 *     MiDeleteKernelStackPages @ 0x14021F734 (MiDeleteKernelStackPages.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 */

__int64 __fastcall MiDeleteCachedKernelShadowStack(int a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiDeleteKernelStackPages(a1, ((a2 >> 9) & 0xFFFFFFF8) - 8, 1, 0, a2);
  return MiReleasePtes(&unk_140E35F80, v2 - 8, 3LL);
}
