/*
 * XREFs of sub_18001300C @ 0x18001300C
 * Callers:
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001CF74 @ 0x18001CF74 (sub_18001CF74.c)
 *     sub_18001D960 @ 0x18001D960 (sub_18001D960.c)
 *     sub_18001DA08 @ 0x18001DA08 (sub_18001DA08.c)
 *     sub_18001DB0C @ 0x18001DB0C (sub_18001DB0C.c)
 *     sub_18001DC00 @ 0x18001DC00 (sub_18001DC00.c)
 *     sub_18002EFD8 @ 0x18002EFD8 (sub_18002EFD8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18001300C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
