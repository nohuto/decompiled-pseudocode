/*
 * XREFs of MiDeleteCachedKernelShadowStack @ 0x14048AFC4
 * Callers:
 *     MiAdjustCachedStacks @ 0x1403B1C48 (MiAdjustCachedStacks.c)
 *     MiPruneCachedStackList @ 0x14048AF30 (MiPruneCachedStackList.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140674890 (MiRemoveNonIdealCachedStacks.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiDeleteKernelStackPages @ 0x1403B3258 (MiDeleteKernelStackPages.c)
 */

char __fastcall MiDeleteCachedKernelShadowStack(ULONG *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiDeleteKernelStackPages(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL, 1LL, 0, a2);
  return MiReleasePtes((__int64)&unk_140E35C00, (unsigned __int64 *)(v2 - 8), 3u);
}
