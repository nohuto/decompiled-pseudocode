/*
 * XREFs of TpAllocPool @ 0x1800FB950
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocPool(__int64 *a1, __int64 a2)
{
  if ( a1 && !a2 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TpAllocPoolInternal(a1, 0);
  TppRaiseInvalidParameter();
  return 3221225485LL;
}
