/*
 * XREFs of sub_180051AD0 @ 0x180051AD0
 * Callers:
 *     sub_180018010 @ 0x180018010 (sub_180018010.c)
 *     sub_1800C849C @ 0x1800C849C (sub_1800C849C.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_1800517B8 @ 0x1800517B8 (sub_1800517B8.c)
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 *     sub_180052338 @ 0x180052338 (sub_180052338.c)
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 *     sub_1800524B0 @ 0x1800524B0 (sub_1800524B0.c)
 *     sub_180052560 @ 0x180052560 (sub_180052560.c)
 *     sub_180052580 @ 0x180052580 (sub_180052580.c)
 */

__int64 __fastcall sub_180051AD0(__int64 a1, _QWORD *a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // dl
  int v16; // r8d
  int v17; // r9d
  char v18; // r10
  char v19; // r11
  __int64 *v20; // rax
  _QWORD v22[3]; // [rsp+50h] [rbp-18h] BYREF

  sub_180027DD0(a1, 1, 0);
  sub_180027DD0(v5, v4 + 2, v4);
  sub_180027DD0(v7, v6 + 4, v6);
  sub_180052560(*a2);
  v8 = sub_1800523AC(*a2);
  v9 = sub_180052338(*a2, v8);
  v12 = sub_1800524B0(*a2, v10, v11, v9);
  v14 = sub_180052580(*a2, v13, v12);
  sub_180051B88(a1, v14, v16, v17, v15, v18, v19, 0LL, 0, 0LL);
  v20 = unknown_libname_81(v22, a2);
  return sub_1800517B8(a1, v20);
}
