/*
 * XREFs of RaidCreateDeferredQueue @ 0x14006AFD4
 * Callers:
 *     RaidCreateAdapter @ 0x140043580 (RaidCreateAdapter.c)
 *     CreateNvmeAdapter @ 0x1400CB1EC (CreateNvmeAdapter.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall RaidCreateDeferredQueue(union _SLIST_HEADER *a1)
{
  memset_0(a1, 0, 0x80uLL);
  InitializeSListHead(a1 + 5);
  InitializeSListHead(a1 + 6);
}
