/*
 * XREFs of TpSetTimer @ 0x1800F8690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TpSetTimer(_PEB_LDR_DATA *Ldr, __int64 i, __int64 a3, int a4)
{
  return TpSetTimerEx(Ldr, i, a3, a4);
}
