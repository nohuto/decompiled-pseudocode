/*
 * XREFs of sub_180048BD0 @ 0x180048BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015D98 @ 0x180015D98 (sub_180015D98.c)
 *     sub_180045C58 @ 0x180045C58 (sub_180045C58.c)
 *     sub_180048CD8 @ 0x180048CD8 (sub_180048CD8.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     sub_1800D13F4 @ 0x1800D13F4 (sub_1800D13F4.c)
 */

__int64 __fastcall sub_180048BD0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int16 v13; // r9
  int v14; // r10d
  int v15; // r11d
  __int64 v17; // [rsp+68h] [rbp-30h] BYREF
  __int64 v18; // [rsp+70h] [rbp-28h]

  sub_1800D13F4(&v17);
  if ( v18 )
    sub_18001060C(v18);
  v10 = (__int64 *)sub_180078578(a1);
  v11 = sub_180015D98(v10, &v17);
  sub_180011110((_QWORD *)(a1 + 88), v11);
  if ( v18 )
    sub_18001060C(v18);
  sub_180045C58(*(_QWORD *)(a1 + 88), a4);
  v12 = unknown_libname_81(&v17, (_QWORD *)(a1 + 88));
  sub_180048CD8(a1, a2, a3, a6, (__int64)v12, v15, v14, a4 + 116, a4 + 180, a4 + 192, (v13 & 0x200) != 0);
  return a2;
}
