/*
 * XREFs of RtlRemoveVectoredExceptionHandler @ 0x18010CC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRemoveVectoredExceptionHandler(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  return RtlpRemoveVectoredHandler(a1, 0LL, a3);
}
