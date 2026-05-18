/*
 * XREFs of sub_180050A58 @ 0x180050A58
 * Callers:
 *     sub_18007B4FC @ 0x18007B4FC (sub_18007B4FC.c)
 *     sub_1800C3FF0 @ 0x1800C3FF0 (sub_1800C3FF0.c)
 *     sub_1800C4F80 @ 0x1800C4F80 (sub_1800C4F80.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 */

_QWORD *__fastcall sub_180050A58(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 128);
  v7 = a3;
  v5 = sub_180040AFC(a1 + 128, (__int64)&v7);
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
