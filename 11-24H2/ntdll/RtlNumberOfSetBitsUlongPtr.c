/*
 * XREFs of RtlNumberOfSetBitsUlongPtr @ 0x1800DC9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBitsUlongPtr(ULONG_PTR Target)
{
  return __popcnt(Target);
}
