/*
 * XREFs of PfpRepurposeNameLoggingTrace @ 0x140A8C29C
 * Callers:
 *     PfTFreeTraceDump @ 0x1404A9C78 (PfTFreeTraceDump.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140477680 (PfFbBufferListInsertInFree.c)
 */

void __fastcall PfpRepurposeNameLoggingTrace(_SLIST_ENTRY *a1, __int64 a2)
{
  PfFbBufferListInsertInFree(a1 + 18, (struct _SLIST_ENTRY *)a2, *(_DWORD *)(a2 + 52), *(_DWORD *)(a2 + 56), 1);
}
