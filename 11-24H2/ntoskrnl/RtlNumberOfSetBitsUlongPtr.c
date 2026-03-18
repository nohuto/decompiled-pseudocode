/*
 * XREFs of RtlNumberOfSetBitsUlongPtr @ 0x14042FD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBitsUlongPtr(ULONG_PTR Target)
{
  return __popcnt(Target);
}
