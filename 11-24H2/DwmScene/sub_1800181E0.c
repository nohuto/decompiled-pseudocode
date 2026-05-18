/*
 * XREFs of sub_1800181E0 @ 0x1800181E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18000F1E4 @ 0x18000F1E4 (sub_18000F1E4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_1800165E8 @ 0x1800165E8 (sub_1800165E8.c)
 *     sub_180016990 @ 0x180016990 (sub_180016990.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_18003189C @ 0x18003189C (sub_18003189C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800181E0(_QWORD *a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  _BYTE *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  _BYTE v11[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF

  sub_18003189C(a1[7], &v9);
  sub_18002867C(v9 + 16, v11);
  v13 = 0LL;
  sub_18000E954(&v13);
  v4 = sub_1800165E8(&v13, (__int64)&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = v13;
    v7 = (_BYTE *)a1[15];
    if ( v7 == (_BYTE *)a1[16] )
    {
      sub_180016990((__int64)(a1 + 14), v7, &v14);
    }
    else
    {
      *(_QWORD *)v7 = v13;
      a1[15] += 8LL;
    }
    v8 = v13;
    v13 = 0LL;
    *a2 = v8;
    sub_18000E954(&v13);
    sub_180011044((__int64)v11);
    if ( v10 )
      sub_18001060C(v10);
    return 0LL;
  }
  else
  {
    sub_18000F1E4(
      retaddr,
      299LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v4);
    sub_18000E954(&v13);
    sub_180011044((__int64)v11);
    if ( v10 )
      sub_18001060C(v10);
    return v5;
  }
}
