/*
 * XREFs of sub_14000E900 @ 0x14000E900
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000E850 @ 0x14000E850 (sub_14000E850.c)
 */

__int64 __fastcall sub_14000E900(__int64 *a1, __int64 a2, int a3)
{
  if ( a3 == -1 )
    return 0LL;
  else
    return sub_14000E850(a1, 0xFFFFFFFF, a3);
}
