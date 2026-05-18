/*
 * XREFs of sub_18004D6E8 @ 0x18004D6E8
 * Callers:
 *     sub_18007E308 @ 0x18007E308 (sub_18007E308.c)
 *     sub_1800CA900 @ 0x1800CA900 (sub_1800CA900.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_18004D6E8(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0LL;
  result = a1[1];
  a1[1] = 0LL;
  if ( result )
    return sub_18001060C(result);
  return result;
}
