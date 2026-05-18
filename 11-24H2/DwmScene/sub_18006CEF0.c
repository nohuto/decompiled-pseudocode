/*
 * XREFs of sub_18006CEF0 @ 0x18006CEF0
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18003DEB4 @ 0x18003DEB4 (sub_18003DEB4.c)
 */

_QWORD *__fastcall sub_18006CEF0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v9[40]; // [rsp+48h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL);
  v5 = sub_180012444((__int64)v9, (__int64)&unk_1801C5018);
  sub_18003DEB4(v4, (__int64)v7, -1LL, v5);
  unknown_libname_81(v8, (_QWORD *)(*(_QWORD *)(a1 + 8) + 320LL));
  *a2 = v7[0];
  a2[1] = v7[1];
  a2[2] = v8[0];
  a2[3] = v8[1];
  return a2;
}
