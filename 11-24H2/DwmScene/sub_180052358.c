/*
 * XREFs of sub_180052358 @ 0x180052358
 * Callers:
 *     sub_18002A748 @ 0x18002A748 (sub_18002A748.c)
 *     sub_18007B4FC @ 0x18007B4FC (sub_18007B4FC.c)
 *     sub_1800B90C0 @ 0x1800B90C0 (sub_1800B90C0.c)
 *     sub_1800B9420 @ 0x1800B9420 (sub_1800B9420.c)
 *     sub_1800C3440 @ 0x1800C3440 (sub_1800C3440.c)
 *     sub_1800C3820 @ 0x1800C3820 (sub_1800C3820.c)
 *     sub_1800C3CF0 @ 0x1800C3CF0 (sub_1800C3CF0.c)
 *     sub_1800C50C0 @ 0x1800C50C0 (sub_1800C50C0.c)
 *     sub_1800C5550 @ 0x1800C5550 (sub_1800C5550.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 *     sub_1800C9208 @ 0x1800C9208 (sub_1800C9208.c)
 *     sub_1800C94E0 @ 0x1800C94E0 (sub_1800C94E0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 */

_QWORD *__fastcall sub_180052358(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 112);
  v7 = a3;
  v5 = sub_180040AFC(a1 + 112, (__int64)&v7);
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
