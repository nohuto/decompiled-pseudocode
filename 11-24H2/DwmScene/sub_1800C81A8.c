/*
 * XREFs of sub_1800C81A8 @ 0x1800C81A8
 * Callers:
 *     sub_1800C8460 @ 0x1800C8460 (sub_1800C8460.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

__int64 __fastcall sub_1800C81A8(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::DepthBufferD3D11::`vftable';
  sub_18000E954(a1 + 14);
  sub_18000E954(a1 + 15);
  *(_OWORD *)v11 = 0LL;
  sub_180011110(a1 + 12, v11);
  if ( v11[1] )
    sub_18001060C(v11[1]);
  v2 = a1[31];
  if ( v2 )
    sub_18001060C(v2);
  v3 = a1[29];
  if ( v3 )
    sub_18001060C(v3);
  v4 = a1[27];
  if ( v4 )
    sub_18001060C(v4);
  v5 = a1[25];
  if ( v5 )
    sub_18001060C(v5);
  v6 = a1[23];
  if ( v6 )
    sub_18001060C(v6);
  v7 = a1[21];
  if ( v7 )
    sub_18001060C(v7);
  v8 = a1[19];
  if ( v8 )
    sub_18001060C(v8);
  v9 = a1[17];
  if ( v9 )
    sub_18001060C(v9);
  sub_18000E954(a1 + 15);
  sub_18000E954(a1 + 14);
  return sub_180068AC8(a1);
}
