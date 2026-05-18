/*
 * XREFs of sub_18004D588 @ 0x18004D588
 * Callers:
 *     sub_18007E1A8 @ 0x18007E1A8 (sub_18007E1A8.c)
 *     sub_1800CA7A0 @ 0x1800CA7A0 (sub_1800CA7A0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_18004D588(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = 0LL;
  result = a1[1];
  a1[1] = 0LL;
  if ( result )
    return sub_18001050C(result);
  return result;
}
