/*
 * XREFs of sub_180029DA8 @ 0x180029DA8
 * Callers:
 *     sub_18002A050 @ 0x18002A050 (sub_18002A050.c)
 *     sub_1800BCB30 @ 0x1800BCB30 (sub_1800BCB30.c)
 *     sub_1800CB2E8 @ 0x1800CB2E8 (sub_1800CB2E8.c)
 *     ?dtor$14@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_3 @ 0x1800E1F47 (-dtor$14@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_3.c)
 *     unknown_libname_74 @ 0x1800E22C8 (unknown_libname_74.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180023944 @ 0x180023944 (sub_180023944.c)
 *     sub_180029D08 @ 0x180029D08 (sub_180029D08.c)
 *     sub_18002B6D4 @ 0x18002B6D4 (sub_18002B6D4.c)
 */

__int64 __fastcall sub_180029DA8(__int64 a1)
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
  sub_180011110((_QWORD *)(a1 + 208), v12);
  if ( v12[1] )
    sub_18001060C(v12[1]);
  v2 = *(volatile signed __int32 **)(a1 + 448);
  if ( v2 )
    sub_180010644(v2);
  sub_180029D08((_QWORD *)(a1 + 424));
  v3 = *(_QWORD *)(a1 + 416);
  if ( v3 )
    sub_18001060C(v3);
  v4 = *(_QWORD *)(a1 + 400);
  if ( v4 )
    sub_18001060C(v4);
  sub_18002B6D4(a1 + 368);
  v5 = *(_QWORD *)(a1 + 344);
  if ( v5 )
    sub_18001060C(v5);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 304));
  v6 = *(_QWORD *)(a1 + 264);
  if ( v6 )
    sub_18001060C(v6);
  v7 = *(_QWORD *)(a1 + 248);
  if ( v7 )
    sub_18001060C(v7);
  v8 = *(_QWORD *)(a1 + 216);
  if ( v8 )
    sub_18001060C(v8);
  v9 = *(_QWORD *)(a1 + 128);
  if ( v9 )
  {
    sub_180023944(v9, *(_QWORD *)(a1 + 136));
    sub_180010234(*(void **)(a1 + 128), (*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 88);
  if ( v10 )
    sub_180010644(v10);
  return sub_180029D70((_QWORD *)a1);
}
