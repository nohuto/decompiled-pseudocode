/*
 * XREFs of sub_1800521F8 @ 0x1800521F8
 * Callers:
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 *     sub_1800B8F60 @ 0x1800B8F60 (sub_1800B8F60.c)
 *     sub_1800B92C0 @ 0x1800B92C0 (sub_1800B92C0.c)
 *     sub_1800C32E0 @ 0x1800C32E0 (sub_1800C32E0.c)
 *     sub_1800C36C0 @ 0x1800C36C0 (sub_1800C36C0.c)
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 *     sub_1800C4F60 @ 0x1800C4F60 (sub_1800C4F60.c)
 *     sub_1800C53F0 @ 0x1800C53F0 (sub_1800C53F0.c)
 *     sub_1800C5900 @ 0x1800C5900 (sub_1800C5900.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 *     sub_1800C90A8 @ 0x1800C90A8 (sub_1800C90A8.c)
 *     sub_1800C9380 @ 0x1800C9380 (sub_1800C9380.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 */

_QWORD *__fastcall sub_1800521F8(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 112);
  v7 = a3;
  v5 = sub_18004099C(a1 + 112, (__int64)&v7);
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
