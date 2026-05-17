/*
 * XREFs of RtlNumberOfClearBits @ 0x1800F4A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x1800F4AC0 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(_DWORD *a1)
{
  return *a1 - (unsigned int)RtlNumberOfSetBits(a1);
}
