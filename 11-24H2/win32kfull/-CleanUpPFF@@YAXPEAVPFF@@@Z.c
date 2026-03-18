/*
 * XREFs of ?CleanUpPFF@@YAXPEAVPFF@@@Z @ 0x14030E960
 * Callers:
 *     <none>
 * Callees:
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x14030EC7C (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 */

void __fastcall CleanUpPFF(struct PFF *a1)
{
  struct PFF *v1; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  PFFOBJ::vPFFC_DeleteAndCleanup((PFFOBJ *)&v1);
}
