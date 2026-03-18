/*
 * XREFs of RtlNumberOfSetBitsUlongPtr @ 0x140434140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBitsUlongPtr(ULONG_PTR Target)
{
  return __popcnt(Target);
}
