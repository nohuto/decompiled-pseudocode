/*
 * XREFs of IntersectRangeCompare @ 0x14003E53C
 * Callers:
 *     IntersectFindDataRange @ 0x14003AC1C (IntersectFindDataRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IntersectRangeCompare(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  bool result; // al

  result = 0;
  if ( a1 <= a2 && a3 <= a4 )
  {
    if ( a1 < a3 )
      return a2 >= a3;
    else
      return a1 <= a4;
  }
  return result;
}
