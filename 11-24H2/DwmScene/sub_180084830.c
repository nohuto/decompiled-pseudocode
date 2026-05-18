/*
 * XREFs of sub_180084830 @ 0x180084830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180011F00 @ 0x180011F00 (sub_180011F00.c)
 *     sub_18001A38C @ 0x18001A38C (sub_18001A38C.c)
 *     sub_18004D2C8 @ 0x18004D2C8 (sub_18004D2C8.c)
 *     sub_18004D300 @ 0x18004D300 (sub_18004D300.c)
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 *     sub_180078578 @ 0x180078578 (sub_180078578.c)
 *     sub_180083AF0 @ 0x180083AF0 (sub_180083AF0.c)
 *     sub_180084110 @ 0x180084110 (sub_180084110.c)
 *     sub_1800841C0 @ 0x1800841C0 (sub_1800841C0.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180084830(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v6 = *(_QWORD *)(sub_180078578(a1) + 512);
  v18 = 0LL;
  sub_18004D2C8(v6, a1 + 1768, &v18);
  v18 = 0LL;
  sub_18004D2C8(v6, a1 + 1848, &v18);
  sub_180011C04(a1 + 56, &v16);
  sub_180011F00(v16, &v18);
  if ( v17 )
    sub_18001060C(v17);
  v7 = v18;
  if ( *(_BYTE *)(v18 + 124) && *(float *)(v18 + 104) > 0.0 )
  {
    sub_180083AF0(a1);
    if ( *(_DWORD *)(a1 + 1960) )
    {
      v8 = 3;
      if ( *(_DWORD *)(v7 + 120) != 2 )
        v8 = 1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 1944) )
      {
        v9 = 4;
        if ( *(_DWORD *)(v7 + 120) != 2 )
          v9 = 2;
        v10 = sub_18001A38C(a1, v9);
        *(_DWORD *)(a1 + 412) = 6;
        *(_DWORD *)(a1 + 312) = v10;
        goto LABEL_16;
      }
      v8 = 3;
      if ( *(_DWORD *)(v7 + 120) != 2 )
        v8 = 1;
    }
    sub_18001A38C(a1, v8);
    *(_DWORD *)(a1 + 412) = 3;
    *(_DWORD *)(a1 + 312) = 1065353216;
LABEL_16:
    v12 = *(_DWORD *)(a1 + 1940) - 1;
    *(_DWORD *)(a1 + 372) = v11;
    *(_DWORD *)(a1 + 376) = v11;
    *(_DWORD *)(a1 + 380) = v12;
    *(_DWORD *)(a1 + 384) = v12;
    *(_BYTE *)(a1 + 388) = v11;
    sub_180057C10(a1, a2, a3);
    v13 = sub_1800841C0(a1, &v16);
    sub_18004D2C8(v6, a1 + 1768, v13);
    if ( v17 )
      sub_18001060C(v17);
    v14 = sub_180084110(a1, &v16);
    sub_18004D2C8(v6, a1 + 1848, v14);
    if ( v17 )
      sub_18001060C(v17);
  }
  unknown_libname_81(&v16, (_QWORD *)(a1 + 1816));
  sub_18004D300(v6, a1 + 1768, &v16);
  if ( v17 )
    sub_18001060C(v17);
  unknown_libname_81(&v16, (_QWORD *)(a1 + 1896));
  result = sub_18004D300(v6, a1 + 1848, &v16);
  if ( v17 )
    result = sub_18001060C(v17);
  if ( *((_QWORD *)&v18 + 1) )
    return sub_18001060C(*((__int64 *)&v18 + 1));
  return result;
}
