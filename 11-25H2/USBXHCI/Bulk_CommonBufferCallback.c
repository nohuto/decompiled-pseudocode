/*
 * XREFs of Bulk_CommonBufferCallback @ 0x14004D800
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_MapTransfers @ 0x14001AB60 (Bulk_MapTransfers.c)
 */

void __fastcall Bulk_CommonBufferCallback(__int64 a1, __int64 a2)
{
  ++*(_DWORD *)(a1 + 340);
  Bulk_MapTransfers(a1, a2);
}
