/*
 * XREFs of sub_180078580 @ 0x180078580
 * Callers:
 *     sub_180078610 @ 0x180078610 (sub_180078610.c)
 *     sub_180078A84 @ 0x180078A84 (sub_180078A84.c)
 *     sub_180078EFC @ 0x180078EFC (sub_180078EFC.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

char __fastcall sub_180078580(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180011A5C(v3);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
