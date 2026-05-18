/*
 * XREFs of sub_1800118EC @ 0x1800118EC
 * Callers:
 *     sub_180010A84 @ 0x180010A84 (sub_180010A84.c)
 *     sub_1800132FC @ 0x1800132FC (sub_1800132FC.c)
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001BACC @ 0x18001BACC (sub_18001BACC.c)
 *     sub_18001BBC4 @ 0x18001BBC4 (sub_18001BBC4.c)
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_18001D23C @ 0x18001D23C (sub_18001D23C.c)
 *     sub_18001DCC8 @ 0x18001DCC8 (sub_18001DCC8.c)
 *     sub_18002C110 @ 0x18002C110 (sub_18002C110.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1800118EC(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 result; // rax

  v3 = a1 | 0xF;
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
