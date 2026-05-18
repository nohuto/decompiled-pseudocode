/*
 * XREFs of sub_1800CFFF0 @ 0x1800CFFF0
 * Callers:
 *     sub_1800D006C @ 0x1800D006C (sub_1800D006C.c)
 *     sub_1800D0EC4 @ 0x1800D0EC4 (sub_1800D0EC4.c)
 * Callees:
 *     sub_18003D460 @ 0x18003D460 (sub_18003D460.c)
 *     sub_1800CF3A4 @ 0x1800CF3A4 (sub_1800CF3A4.c)
 */

unsigned __int64 __fastcall sub_1800CFFF0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*a1;
  if ( *a1 && v1[2] )
  {
    v2 = (_QWORD *)v1[1];
    if ( v1[7] >> 3 <= v1[2] )
    {
      sub_1800CF3A4((__int64)a1, (__int64)v2);
      *(_QWORD *)v1[1] = v1[1];
      *(_QWORD *)(v1[1] + 8LL) = v1[1];
      v1[2] = 0LL;
      v4 = (unsigned __int64 *)v1[4];
      v5 = (unsigned __int64 *)v1[3];
      v6 = v1[1];
      return sub_18003D460(v5, v4, &v6);
    }
    else
    {
      return sub_1800D10CC(*a1, *v2, v1[1]);
    }
  }
  return result;
}
