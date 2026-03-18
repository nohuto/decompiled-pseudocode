/*
 * XREFs of CsanRead16NoCheck @ 0x14042F2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall CsanRead16NoCheck(PSLIST_HEADER SListHead)
{
  return SListHead->Alignment;
}
