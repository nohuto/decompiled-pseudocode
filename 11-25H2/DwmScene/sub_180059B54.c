/*
 * XREFs of sub_180059B54 @ 0x180059B54
 * Callers:
 *     sub_1800543DC @ 0x1800543DC (sub_1800543DC.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18005439C @ 0x18005439C (sub_18005439C.c)
 */

__int64 __fastcall sub_180059B54(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
  {
    sub_18005439C((__int64)v6, *(_QWORD *)(a1 + 8));
    sub_180010134(*(void **)a1, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 48 * a3;
  result = a2 + 48 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
