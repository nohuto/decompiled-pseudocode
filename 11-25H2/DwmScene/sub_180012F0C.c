/*
 * XREFs of sub_180012F0C @ 0x180012F0C
 * Callers:
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18001CE14 @ 0x18001CE14 (sub_18001CE14.c)
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     sub_18001D8A8 @ 0x18001D8A8 (sub_18001D8A8.c)
 *     sub_18001D9AC @ 0x18001D9AC (sub_18001D9AC.c)
 *     sub_18001DAA0 @ 0x18001DAA0 (sub_18001DAA0.c)
 *     sub_18002EE78 @ 0x18002EE78 (sub_18002EE78.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180012F0C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax

  v3 = a1 | 7;
  if ( v3 > a3 )
    return a3;
  v4 = a2 >> 1;
  if ( a2 > a3 - (a2 >> 1) )
    return a3;
  result = v4 + a2;
  if ( v3 >= v4 + a2 )
    return v3;
  return result;
}
