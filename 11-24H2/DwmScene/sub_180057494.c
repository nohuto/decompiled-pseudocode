/*
 * XREFs of sub_180057494 @ 0x180057494
 * Callers:
 *     sub_180055E40 @ 0x180055E40 (sub_180055E40.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_18006B58C @ 0x18006B58C (sub_18006B58C.c)
 *     sub_18006C8F0 @ 0x18006C8F0 (sub_18006C8F0.c)
 *     sub_18008CEA0 @ 0x18008CEA0 (sub_18008CEA0.c)
 *     sub_18008D058 @ 0x18008D058 (sub_18008D058.c)
 *     sub_180091420 @ 0x180091420 (sub_180091420.c)
 *     sub_1800916C0 @ 0x1800916C0 (sub_1800916C0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 */

_QWORD *__fastcall sub_180057494(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 448);
  v7 = *(_DWORD *)(*(_QWORD *)a3 + 244LL);
  v5 = sub_180040AFC(a1 + 448, (__int64)&v7);
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
