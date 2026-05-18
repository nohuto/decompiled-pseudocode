/*
 * XREFs of sub_1800C2FB4 @ 0x1800C2FB4
 * Callers:
 *     sub_1800C27A0 @ 0x1800C27A0 (sub_1800C27A0.c)
 *     sub_1800C3FF0 @ 0x1800C3FF0 (sub_1800C3FF0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 */

_QWORD *__fastcall sub_1800C2FB4(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 256);
  v7 = a3;
  v5 = sub_18004099C(a1 + 256, (__int64)&v7);
  if ( v5 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    unknown_libname_81(a2, (_QWORD *)(v5 + 40));
  }
  return a2;
}
