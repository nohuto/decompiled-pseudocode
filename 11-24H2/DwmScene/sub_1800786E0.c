/*
 * XREFs of sub_1800786E0 @ 0x1800786E0
 * Callers:
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 *     sub_180078BE4 @ 0x180078BE4 (sub_180078BE4.c)
 *     sub_18007905C @ 0x18007905C (sub_18007905C.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

char __fastcall sub_1800786E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180011B5C(v3);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
