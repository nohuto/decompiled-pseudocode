/*
 * XREFs of sub_18002C43C @ 0x18002C43C
 * Callers:
 *     sub_18002FF48 @ 0x18002FF48 (sub_18002FF48.c)
 *     sub_180030E44 @ 0x180030E44 (sub_180030E44.c)
 *     sub_180094DCC @ 0x180094DCC (sub_180094DCC.c)
 *     sub_180094F44 @ 0x180094F44 (sub_180094F44.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

char __fastcall sub_18002C43C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180011A5C(v3 + 8);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
