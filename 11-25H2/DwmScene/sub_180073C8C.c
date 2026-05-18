/*
 * XREFs of sub_180073C8C @ 0x180073C8C
 * Callers:
 *     sub_180075918 @ 0x180075918 (sub_180075918.c)
 *     sub_18007CF18 @ 0x18007CF18 (sub_18007CF18.c)
 *     sub_18007D580 @ 0x18007D580 (sub_18007D580.c)
 *     sub_180081B4C @ 0x180081B4C (sub_180081B4C.c)
 *     sub_180081C48 @ 0x180081C48 (sub_180081C48.c)
 *     sub_1800824B8 @ 0x1800824B8 (sub_1800824B8.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

char __fastcall sub_180073C8C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180011A5C(v3);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
