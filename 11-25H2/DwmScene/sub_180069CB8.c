/*
 * XREFs of sub_180069CB8 @ 0x180069CB8
 * Callers:
 *     sub_1800697B4 @ 0x1800697B4 (sub_1800697B4.c)
 *     sub_180069AB0 @ 0x180069AB0 (sub_180069AB0.c)
 * Callees:
 *     sub_18006945C @ 0x18006945C (sub_18006945C.c)
 */

__int64 __fastcall sub_180069CB8(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    sub_18006945C(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
