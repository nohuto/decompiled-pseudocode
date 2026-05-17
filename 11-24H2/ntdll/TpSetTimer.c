/*
 * XREFs of TpSetTimer @ 0x1800F6A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TpSetTimer(_PEB_LDR_DATA *Ldr, unsigned __int64 i, int a3, unsigned __int64 a4)
{
  return TpSetTimerEx(Ldr, i, a3, a4);
}
