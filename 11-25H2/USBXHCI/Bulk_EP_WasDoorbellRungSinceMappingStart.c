/*
 * XREFs of Bulk_EP_WasDoorbellRungSinceMappingStart @ 0x140034430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Bulk_EP_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return *(_BYTE *)(a1 + 332) & 1;
}
