/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x1405DC0D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x1404BD140 (RtlNumberOfSetBitsInRange.c)
 */

__int64 __fastcall RtlNumberOfClearBitsInRange(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // ebx

  v4 = RtlNumberOfSetBitsInRange(a1, a2, a3);
  v5 = a3 - v4;
  if ( v4 == -1 )
    return (unsigned int)-1;
  return v5;
}
