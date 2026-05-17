/*
 * XREFs of TpSetWait @ 0x1800F2DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TpSetWait(_PEB_LDR_DATA *a1, _LIST_ENTRY *a2, _LIST_ENTRY **a3)
{
  return TpSetWaitEx(a1, a2, a3, 0LL);
}
