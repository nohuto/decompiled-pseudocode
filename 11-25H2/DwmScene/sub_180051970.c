/*
 * XREFs of sub_180051970 @ 0x180051970
 * Callers:
 *     sub_180017F50 @ 0x180017F50 (sub_180017F50.c)
 *     sub_1800C833C @ 0x1800C833C (sub_1800C833C.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_180051658 @ 0x180051658 (sub_180051658.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_1800521D8 @ 0x1800521D8 (sub_1800521D8.c)
 *     sub_18005224C @ 0x18005224C (sub_18005224C.c)
 *     sub_180052350 @ 0x180052350 (sub_180052350.c)
 *     sub_180052400 @ 0x180052400 (sub_180052400.c)
 *     sub_180052420 @ 0x180052420 (sub_180052420.c)
 */

__int64 __fastcall sub_180051970(__int64 a1, _QWORD *a2)
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

  sub_180027C70(a1, 1, 0);
  sub_180027C70(v5, v4 + 2, v4);
  sub_180027C70(v7, v6 + 4, v6);
  sub_180052400(*a2);
  v8 = sub_18005224C(*a2);
  v9 = sub_1800521D8(*a2, v8);
  v12 = sub_180052350(*a2, v10, v11, v9);
  v14 = sub_180052420(*a2, v13, v12);
  sub_180051A28(a1, v14, v16, v17, v15, v18, v19, 0LL, 0, 0LL);
  v20 = unknown_libname_81(v22, a2);
  return sub_180051658(a1, v20);
}
