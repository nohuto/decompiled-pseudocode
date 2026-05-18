/*
 * XREFs of sub_180028FCC @ 0x180028FCC
 * Callers:
 *     sub_18002A470 @ 0x18002A470 (sub_18002A470.c)
 * Callees:
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_180028C30 @ 0x180028C30 (sub_180028C30.c)
 *     sub_18002938C @ 0x18002938C (sub_18002938C.c)
 *     sub_180029400 @ 0x180029400 (sub_180029400.c)
 *     sub_1800294F0 @ 0x1800294F0 (sub_1800294F0.c)
 *     sub_18002B5C8 @ 0x18002B5C8 (sub_18002B5C8.c)
 *     sub_18002B610 @ 0x18002B610 (sub_18002B610.c)
 */

__int64 __fastcall sub_180028FCC(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0x86BCA1AF286BCA1BuLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x1AF286BCA1AF286LL )
    sub_180013278();
  v8 = v7 + 1;
  v16 = sub_18002B5C8(a1, v7 + 1);
  v10 = sub_180028C30(v9, &v16);
  v11 = (unsigned __int64)((unsigned __int128)((a2 - v3) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 63;
  v12 = v10 + 152 * ((a2 - v3) / 152);
  sub_1800294F0(v11, v12, a3);
  v13 = a1[1];
  v14 = *a1;
  if ( a2 == v13 )
  {
    sub_18002938C(v14, v13, v10, a1);
  }
  else
  {
    sub_180029400(v14, a2, v10, a1);
    sub_180029400(a2, a1[1], v12 + 152, a1);
  }
  sub_18002B610(a1, v10, v8, v16);
  return v12;
}
