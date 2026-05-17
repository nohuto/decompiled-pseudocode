/*
 * XREFs of TpAllocPool @ 0x18006A620
 * Callers:
 *     <none>
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocPool(__int64 a1, __int64 a2)
{
  if ( a1 && !a2 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TpAllocPoolInternal(a1, 0LL);
  TppRaiseInvalidParameter(a1);
  return 3221225485LL;
}
