/*
 * XREFs of sub_1800846D0 @ 0x1800846D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180011E00 @ 0x180011E00 (sub_180011E00.c)
 *     sub_18001A2CC @ 0x18001A2CC (sub_18001A2CC.c)
 *     sub_18004D168 @ 0x18004D168 (sub_18004D168.c)
 *     sub_18004D1A0 @ 0x18004D1A0 (sub_18004D1A0.c)
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 *     sub_180078418 @ 0x180078418 (sub_180078418.c)
 *     sub_180083990 @ 0x180083990 (sub_180083990.c)
 *     sub_180083FB0 @ 0x180083FB0 (sub_180083FB0.c)
 *     sub_180084060 @ 0x180084060 (sub_180084060.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800846D0(__int64 a1, __int64 *a2, _QWORD *a3)
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

  v6 = *(_QWORD *)(sub_180078418(a1) + 512);
  v18 = 0LL;
  sub_18004D168(v6, a1 + 1768, &v18);
  v18 = 0LL;
  sub_18004D168(v6, a1 + 1848, &v18);
  sub_180011B04(a1 + 56, &v16);
  sub_180011E00(v16, &v18);
  if ( v17 )
    sub_18001050C(v17);
  v7 = v18;
  if ( *(_BYTE *)(v18 + 124) && *(float *)(v18 + 104) > 0.0 )
  {
    sub_180083990(a1);
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
        v10 = sub_18001A2CC(a1, v9);
        *(_DWORD *)(a1 + 412) = 6;
        *(_DWORD *)(a1 + 312) = v10;
        goto LABEL_16;
      }
      v8 = 3;
      if ( *(_DWORD *)(v7 + 120) != 2 )
        v8 = 1;
    }
    sub_18001A2CC(a1, v8);
    *(_DWORD *)(a1 + 412) = 3;
    *(_DWORD *)(a1 + 312) = 1065353216;
LABEL_16:
    v12 = *(_DWORD *)(a1 + 1940) - 1;
    *(_DWORD *)(a1 + 372) = v11;
    *(_DWORD *)(a1 + 376) = v11;
    *(_DWORD *)(a1 + 380) = v12;
    *(_DWORD *)(a1 + 384) = v12;
    *(_BYTE *)(a1 + 388) = v11;
    sub_180057AB0(a1, a2, a3);
    v13 = sub_180084060(a1, &v16);
    sub_18004D168(v6, a1 + 1768, v13);
    if ( v17 )
      sub_18001050C(v17);
    v14 = sub_180083FB0(a1, &v16);
    sub_18004D168(v6, a1 + 1848, v14);
    if ( v17 )
      sub_18001050C(v17);
  }
  unknown_libname_81(&v16, (_QWORD *)(a1 + 1816));
  sub_18004D1A0(v6, a1 + 1768, &v16);
  if ( v17 )
    sub_18001050C(v17);
  unknown_libname_81(&v16, (_QWORD *)(a1 + 1896));
  result = sub_18004D1A0(v6, a1 + 1848, &v16);
  if ( v17 )
    result = sub_18001050C(v17);
  if ( *((_QWORD *)&v18 + 1) )
    return sub_18001050C(*((__int64 *)&v18 + 1));
  return result;
}
