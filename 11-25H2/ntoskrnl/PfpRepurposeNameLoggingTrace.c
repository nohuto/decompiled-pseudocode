/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x140A8729C
 * Callers:
 *     PfTFreeTraceDump @ 0x1404A8A9C (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140477A20 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(_SLIST_ENTRY *a1, __int64 a2)
{
  PfFbBufferListInsertInFree(a1 + 18, (_SLIST_ENTRY *)a2, *(_DWORD *)(a2 + 52), *(_DWORD *)(a2 + 56), 1);
}
