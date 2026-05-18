/*
 * XREFs of sub_180073DEC @ 0x180073DEC
 * Callers:
 *     sub_180075A78 @ 0x180075A78 (sub_180075A78.c)
 *     sub_18007D078 @ 0x18007D078 (sub_18007D078.c)
 *     sub_18007D6E0 @ 0x18007D6E0 (sub_18007D6E0.c)
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 *     sub_180081DA8 @ 0x180081DA8 (sub_180081DA8.c)
 *     sub_180082618 @ 0x180082618 (sub_180082618.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 */

char __fastcall sub_180073DEC(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180011B5C(v3);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
