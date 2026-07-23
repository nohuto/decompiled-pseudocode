/*
 * XREFs of CsanRead16NoCheck @ 0x140421470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall CsanRead16NoCheck(PSLIST_HEADER SListHead)
{
  return SListHead->Alignment;
}
