/*
 * XREFs of sub_18006CE7C @ 0x18006CE7C
 * Callers:
 *     sub_18006CE40 @ 0x18006CE40 (sub_18006CE40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006CE7C(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax

  result = *a2;
  a1[1] = 0LL;
  *a1 = result;
  return result;
}
