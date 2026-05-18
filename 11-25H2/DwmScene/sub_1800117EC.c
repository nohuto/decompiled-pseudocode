/*
 * XREFs of sub_1800117EC @ 0x1800117EC
 * Callers:
 *     sub_180010984 @ 0x180010984 (sub_180010984.c)
 *     sub_1800131FC @ 0x1800131FC (sub_1800131FC.c)
 *     sub_180013818 @ 0x180013818 (sub_180013818.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B96C @ 0x18001B96C (sub_18001B96C.c)
 *     sub_18001BA64 @ 0x18001BA64 (sub_18001BA64.c)
 *     sub_18001BE10 @ 0x18001BE10 (sub_18001BE10.c)
 *     sub_18001D0DC @ 0x18001D0DC (sub_18001D0DC.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18002BFB0 @ 0x18002BFB0 (sub_18002BFB0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1800117EC(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
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
