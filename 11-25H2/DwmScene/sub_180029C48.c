/*
 * XREFs of sub_180029C48 @ 0x180029C48
 * Callers:
 *     sub_180029EF0 @ 0x180029EF0 (sub_180029EF0.c)
 *     sub_1800BC9D0 @ 0x1800BC9D0 (sub_1800BC9D0.c)
 *     sub_1800CB188 @ 0x1800CB188 (sub_1800CB188.c)
 *     ?dtor$14@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_3 @ 0x1800E1DE7 (-dtor$14@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_3.c)
 *     unknown_libname_74 @ 0x1800E2168 (unknown_libname_74.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_1800237E4 @ 0x1800237E4 (sub_1800237E4.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 *     sub_18002B574 @ 0x18002B574 (sub_18002B574.c)
 */

__int64 __fastcall sub_180029C48(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  *(_OWORD *)v12 = 0LL;
  sub_180011010((_QWORD *)(a1 + 208), v12);
  if ( v12[1] )
    sub_18001050C(v12[1]);
  v2 = *(volatile signed __int32 **)(a1 + 448);
  if ( v2 )
    sub_180010544(v2);
  sub_180029BA8((_QWORD *)(a1 + 424));
  v3 = *(_QWORD *)(a1 + 416);
  if ( v3 )
    sub_18001050C(v3);
  v4 = *(_QWORD *)(a1 + 400);
  if ( v4 )
    sub_18001050C(v4);
  sub_18002B574(a1 + 368);
  v5 = *(_QWORD *)(a1 + 344);
  if ( v5 )
    sub_18001050C(v5);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 304));
  v6 = *(_QWORD *)(a1 + 264);
  if ( v6 )
    sub_18001050C(v6);
  v7 = *(_QWORD *)(a1 + 248);
  if ( v7 )
    sub_18001050C(v7);
  v8 = *(_QWORD *)(a1 + 216);
  if ( v8 )
    sub_18001050C(v8);
  v9 = *(_QWORD *)(a1 + 128);
  if ( v9 )
  {
    sub_1800237E4(v9, *(_QWORD *)(a1 + 136));
    sub_180010134(*(void **)(a1 + 128), (*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 88);
  if ( v10 )
    sub_180010544(v10);
  return sub_180029C10((_QWORD *)a1);
}
