/*
 * XREFs of RtlRemoveVectoredExceptionHandler @ 0x18010ECB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRemoveVectoredExceptionHandler(__int64 a1)
{
  return RtlpRemoveVectoredHandler(a1, 0);
}
