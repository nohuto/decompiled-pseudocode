/*
 * XREFs of HalpDmaFreeTranslationBuffer @ 0x140C1062C
 * Callers:
 *     HalpDmaInitializeMasterAdapter @ 0x140C10B98 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpDmaFreeTranslationBuffer(__int64 a1)
{
  __int64 v2; // rcx

  HalpMmAllocCtxFree(a1, *(_QWORD *)(a1 + 16));
  HalpMmAllocCtxFree(v2, a1);
}
