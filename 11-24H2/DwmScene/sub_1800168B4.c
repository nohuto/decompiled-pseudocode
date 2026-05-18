/*
 * XREFs of sub_1800168B4 @ 0x1800168B4
 * Callers:
 *     sub_180016D78 @ 0x180016D78 (sub_180016D78.c)
 * Callees:
 *     sub_180010F24 @ 0x180010F24 (sub_180010F24.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 */

__int64 __fastcall sub_1800168B4(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int128 v13; // xmm1
  int v14; // r10d
  int v15; // r11d
  _QWORD v17[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h] BYREF
  _OWORD v19[2]; // [rsp+60h] [rbp-28h] BYREF

  v9 = *a7;
  v10 = *a4;
  *a4 = 0LL;
  v17[0] = v10;
  v11 = a4[1];
  a4[1] = 0LL;
  v17[1] = v11;
  v12 = unknown_libname_81(&v18, a3);
  v13 = a2[1];
  v19[0] = *a2;
  v19[1] = v13;
  return sub_180010F24(a1, v19, v12, v17, v14, v15, v9);
}
