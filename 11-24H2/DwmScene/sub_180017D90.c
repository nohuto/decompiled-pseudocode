/*
 * XREFs of sub_180017D90 @ 0x180017D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18000F1E4 @ 0x18000F1E4 (sub_18000F1E4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001623C @ 0x18001623C (sub_18001623C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18004CE40 @ 0x18004CE40 (sub_18004CE40.c)
 *     sub_18005B2DC @ 0x18005B2DC (sub_18005B2DC.c)
 */

__int64 __fastcall sub_180017D90(__int64 a1, __int64 **a2)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 *v7; // rax
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  _BYTE v12[32]; // [rsp+40h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+8h]
  __int64 *v14; // [rsp+70h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 512LL);
  sub_180017054((__int64)v12, v3 + 18496);
  sub_18004CE40(v3, &v10, v12);
  sub_18005B2DC(v10, &v8);
  v14 = 0LL;
  sub_18000E954((__int64 *)&v14);
  v4 = sub_18001623C(&v14, &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v14;
    v14 = 0LL;
    *a2 = v7;
    sub_18000E954((__int64 *)&v14);
    if ( v9 )
      sub_18001060C(v9);
    if ( v11 )
      sub_18001060C(v11);
    return 0LL;
  }
  else
  {
    sub_18000F1E4(
      retaddr,
      335LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v4);
    sub_18000E954((__int64 *)&v14);
    if ( v9 )
      sub_18001060C(v9);
    if ( v11 )
      sub_18001060C(v11);
    return v5;
  }
}
