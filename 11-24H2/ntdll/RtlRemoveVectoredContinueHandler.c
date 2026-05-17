/*
 * XREFs of RtlRemoveVectoredContinueHandler @ 0x1801342A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRemoveVectoredContinueHandler(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  return RtlpRemoveVectoredHandler(a1, (volatile signed __int32 **)1, a3);
}
