/*
 * XREFs of sub_14000F634 @ 0x14000F634
 * Callers:
 *     sub_14000F2B0 @ 0x14000F2B0 (sub_14000F2B0.c)
 *     sub_14000F370 @ 0x14000F370 (sub_14000F370.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000F634(__int64 a1, int a2)
{
  unsigned int *v2; // r8
  __int64 result; // rax

  v2 = *(unsigned int **)(a1 + 40);
  if ( a2 == v2[6] )
    return v2[1];
  if ( a2 == 100 )
    return v2[2];
  result = *(_QWORD *)(a1 + 64);
  if ( a2 != HIDWORD(result) )
  {
    if ( a2 == v2[7] )
    {
      return v2[3];
    }
    else if ( a2 == v2[8] )
    {
      return v2[4];
    }
    else
    {
      return v2[2] * a2 / 0x64;
    }
  }
  return result;
}
