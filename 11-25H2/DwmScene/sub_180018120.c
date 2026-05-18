/*
 * XREFs of sub_180018120 @ 0x180018120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_1800164E8 @ 0x1800164E8 (sub_1800164E8.c)
 *     sub_180016890 @ 0x180016890 (sub_180016890.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18003173C @ 0x18003173C (sub_18003173C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180018120(_QWORD *a1, __int64 *a2)
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

  sub_18003173C(a1[7], &v9);
  sub_18002851C(v9 + 16, v11);
  v13 = 0LL;
  sub_18000E854(&v13);
  v4 = sub_1800164E8(&v13, (__int64)&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = v13;
    v7 = (_BYTE *)a1[15];
    if ( v7 == (_BYTE *)a1[16] )
    {
      sub_180016890((__int64)(a1 + 14), v7, &v14);
    }
    else
    {
      *(_QWORD *)v7 = v13;
      a1[15] += 8LL;
    }
    v8 = v13;
    v13 = 0LL;
    *a2 = v8;
    sub_18000E854(&v13);
    sub_180010F44((__int64)v11);
    if ( v10 )
      sub_18001050C(v10);
    return 0LL;
  }
  else
  {
    sub_18000F0E4(
      retaddr,
      299LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v4);
    sub_18000E854(&v13);
    sub_180010F44((__int64)v11);
    if ( v10 )
      sub_18001050C(v10);
    return v5;
  }
}
