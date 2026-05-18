/*
 * XREFs of sub_1800C2F54 @ 0x1800C2F54
 * Callers:
 *     sub_1800C4410 @ 0x1800C4410 (sub_1800C4410.c)
 *     sub_1800C52F0 @ 0x1800C52F0 (sub_1800C52F0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18007CC38 @ 0x18007CC38 (sub_18007CC38.c)
 */

_QWORD *__fastcall sub_1800C2F54(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 112);
  v7 = a3;
  sub_18007CC38((__int64 *)(a1 + 112), (__int64)&v6, &v7);
  if ( v6 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    unknown_libname_81(a2, (_QWORD *)(v6 + 40));
  }
  return a2;
}
