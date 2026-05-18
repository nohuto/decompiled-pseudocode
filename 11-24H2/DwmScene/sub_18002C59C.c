/*
 * XREFs of sub_18002C59C @ 0x18002C59C
 * Callers:
 *     sub_1800300A8 @ 0x1800300A8 (sub_1800300A8.c)
 *     sub_180030FA4 @ 0x180030FA4 (sub_180030FA4.c)
 *     sub_180094F2C @ 0x180094F2C (sub_180094F2C.c)
 *     sub_1800950A4 @ 0x1800950A4 (sub_1800950A4.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

char __fastcall sub_18002C59C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180011B5C(v3 + 8);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
