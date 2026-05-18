/*
 * XREFs of sub_180057334 @ 0x180057334
 * Callers:
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_18006B42C @ 0x18006B42C (sub_18006B42C.c)
 *     sub_18006C790 @ 0x18006C790 (sub_18006C790.c)
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 *     sub_18008CEF8 @ 0x18008CEF8 (sub_18008CEF8.c)
 *     sub_1800912C0 @ 0x1800912C0 (sub_1800912C0.c)
 *     sub_180091560 @ 0x180091560 (sub_180091560.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 */

_QWORD *__fastcall sub_180057334(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 448);
  v7 = *(_DWORD *)(*(_QWORD *)a3 + 244LL);
  v5 = sub_18004099C(a1 + 448, (__int64)&v7);
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
