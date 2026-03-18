/*
 * XREFs of Bulk_CommonBufferCallback @ 0x14004CEF0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_MapTransfers @ 0x14000D910 (Bulk_MapTransfers.c)
 */

__int64 __fastcall Bulk_CommonBufferCallback(__int64 a1)
{
  ++*(_DWORD *)(a1 + 340);
  return Bulk_MapTransfers(a1);
}
