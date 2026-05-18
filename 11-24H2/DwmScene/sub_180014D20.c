/*
 * XREFs of sub_180014D20 @ 0x180014D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F1E4 @ 0x18000F1E4 (sub_18000F1E4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001268C @ 0x18001268C (sub_18001268C.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18003B5AC @ 0x18003B5AC (sub_18003B5AC.c)
 *     sub_18003F114 @ 0x18003F114 (sub_18003F114.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180014D20(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // edi
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-29h] BYREF
  __int64 v13; // [rsp+28h] [rbp-21h]
  __int64 v14; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+38h] [rbp-11h]
  _BYTE v16[16]; // [rsp+40h] [rbp-9h] BYREF
  _OWORD v17[5]; // [rsp+50h] [rbp+7h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (_QWORD *)sub_18001268C(*(_QWORD *)(a1 + 32), &v12);
  sub_18002867C(*v4 + 16LL, v16);
  v5 = 0;
  if ( v13 )
    sub_18001060C(v13);
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v17[0] = *a2;
  v17[1] = v6;
  v17[2] = v7;
  v17[3] = v8;
  if ( (unsigned __int8)sub_18003B5AC(*(_QWORD *)(a1 + 32), v17) )
  {
    v9 = *(_QWORD *)sub_18001268C(*(_QWORD *)(a1 + 32), &v14);
    v10 = sub_180012444((__int64)v17, (__int64)&unk_1801C4FB8);
    sub_18003F114(v9, v10);
    if ( v15 )
      sub_18001060C(v15);
  }
  else
  {
    v5 = -2147024809;
    sub_18000F1E4(
      retaddr,
      122LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrenode.cpp",
      2147942487LL);
  }
  sub_180011044((__int64)v16);
  return v5;
}
