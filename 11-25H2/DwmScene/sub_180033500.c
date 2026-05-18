/*
 * XREFs of sub_180033500 @ 0x180033500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_1800296E0 @ 0x1800296E0 (sub_1800296E0.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_1800324D4 @ 0x1800324D4 (sub_1800324D4.c)
 *     sub_180032570 @ 0x180032570 (sub_180032570.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_1800367CC @ 0x1800367CC (sub_1800367CC.c)
 *     sub_180036908 @ 0x180036908 (sub_180036908.c)
 *     sub_18004CF28 @ 0x18004CF28 (sub_18004CF28.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180033500(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800287EC(a1 + 8, a2);
  while ( (unsigned int)sub_180032570(a1) )
  {
    v3 = sub_180032570(a1);
    sub_1800324D4(a1, v9, v3 - 1);
    sub_18003178C((_QWORD *)a1, v9);
    if ( v9[1] )
      sub_18001050C(v9[1]);
  }
  sub_18004CF28(*(_QWORD *)(a1 + 512));
  *(_OWORD *)v9 = 0LL;
  sub_180011010((_QWORD *)(a1 + 512), v9);
  if ( v9[1] )
    sub_18001050C(v9[1]);
  sub_18002851C(a1 + 312, (__int64)v9);
  sub_180033D14(a1);
  if ( *(_QWORD *)(a1 + 288) != *(_QWORD *)(a1 + 296) )
    sub_18001C99C(&stru_1801B8288, 5);
  sub_180010F44((__int64)v9);
  result = sub_1800367CC(a1 + 728);
  *(_QWORD *)(a1 + 480) = 0LL;
  v5 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 488) = 0LL;
  if ( v5 )
    result = sub_18001050C(v5);
  *(_QWORD *)(a1 + 496) = 0LL;
  v6 = *(_QWORD *)(a1 + 504);
  *(_QWORD *)(a1 + 504) = 0LL;
  if ( v6 )
    result = sub_18001050C(v6);
  v7 = *(_QWORD *)(a1 + 704);
  v8 = *(_QWORD *)(a1 + 712);
  if ( v7 != v8 )
  {
    sub_180012040(v7, v8);
    result = *(_QWORD *)(a1 + 704);
    *(_QWORD *)(a1 + 712) = result;
  }
  if ( *(_DWORD *)(a1 + 1192) )
  {
    sub_1800296E0((__int64)v9, a1 + 1280);
    *(_BYTE *)(a1 + 1312) = 1;
    Cnd_signal((_Cnd_t)(a1 + 1208));
    sub_180029B80((__int64)v9);
    return sub_180036908(a1 + 1184);
  }
  return result;
}
