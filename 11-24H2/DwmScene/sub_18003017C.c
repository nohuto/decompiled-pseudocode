/*
 * XREFs of sub_18003017C @ 0x18003017C
 * Callers:
 *     sub_180030C30 @ 0x180030C30 (sub_180030C30.c)
 *     sub_18005EB98 @ 0x18005EB98 (sub_18005EB98.c)
 *     ?dtor$14@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_2 @ 0x1800D98AD (-dtor$14@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_2.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010BA8 @ 0x180010BA8 (sub_180010BA8.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_18001734C @ 0x18001734C (sub_18001734C.c)
 *     sub_1800173FC @ 0x1800173FC (sub_1800173FC.c)
 *     sub_1800247B0 @ 0x1800247B0 (sub_1800247B0.c)
 *     sub_1800265E4 @ 0x1800265E4 (sub_1800265E4.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     sub_18002FC4C @ 0x18002FC4C (sub_18002FC4C.c)
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_180030010 @ 0x180030010 (sub_180030010.c)
 *     sub_180030504 @ 0x180030504 (sub_180030504.c)
 *     sub_1800306BC @ 0x1800306BC (sub_1800306BC.c)
 *     sub_180034D98 @ 0x180034D98 (sub_180034D98.c)
 *     sub_18003682C @ 0x18003682C (sub_18003682C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=31
__int64 __fastcall sub_18003017C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD **v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  sub_18002863C(a1 + 8, (__int64)v17);
  if ( !*(_BYTE *)(a1 + 1160) )
  {
    sub_180034D98(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    *(_BYTE *)(a1 + 1160) = 1;
  }
  sub_180011044((__int64)v17);
  sub_180030504(a1 + 1376);
  sub_180013228(a1 + 1344);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 1280));
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 1208));
  sub_1800306BC(a1 + 1184);
  sub_1800247B0(a1 + 1104);
  sub_1800265E4((void **)(a1 + 1080));
  sub_180030010((void ***)(a1 + 984));
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
    sub_18001060C(v2);
  v3 = *(_QWORD *)(a1 + 888);
  if ( v3 )
  {
    sub_180010BA8(v3, *(_QWORD *)(a1 + 896));
    sub_180010234(*(void **)(a1 + 888), (*(_QWORD *)(a1 + 904) - *(_QWORD *)(a1 + 888)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 888) = 0LL;
    *(_QWORD *)(a1 + 896) = 0LL;
    *(_QWORD *)(a1 + 904) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 864);
  if ( v4 )
  {
    sub_180010BA8(v4, *(_QWORD *)(a1 + 872));
    sub_180010234(*(void **)(a1 + 864), (*(_QWORD *)(a1 + 880) - *(_QWORD *)(a1 + 864)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 864) = 0LL;
    *(_QWORD *)(a1 + 872) = 0LL;
    *(_QWORD *)(a1 + 880) = 0LL;
  }
  sub_1800247B0(a1 + 808);
  sub_18002FC7C((void **)(a1 + 728));
  v5 = *(_QWORD *)(a1 + 704);
  if ( v5 )
  {
    sub_180012140(v5, *(_QWORD *)(a1 + 712));
    sub_180010234(*(void **)(a1 + 704), (*(_QWORD *)(a1 + 720) - *(_QWORD *)(a1 + 704)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 704) = 0LL;
    *(_QWORD *)(a1 + 712) = 0LL;
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  sub_1800173FC(a1 + 568);
  v6 = *(_QWORD *)(a1 + 520);
  if ( v6 )
    sub_18001060C(v6);
  v7 = *(_QWORD *)(a1 + 504);
  if ( v7 )
    sub_18001060C(v7);
  v8 = *(_QWORD *)(a1 + 488);
  if ( v8 )
    sub_18001060C(v8);
  v9 = *(_QWORD *)(a1 + 472);
  if ( v9 )
    sub_18001060C(v9);
  sub_18003682C(a1 + 432);
  sub_1800247B0(a1 + 312);
  v10 = *(_QWORD *)(a1 + 288);
  if ( v10 )
  {
    sub_180010BA8(v10, *(_QWORD *)(a1 + 296));
    sub_180010234(*(void **)(a1 + 288), (*(_QWORD *)(a1 + 304) - *(_QWORD *)(a1 + 288)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 288) = 0LL;
    *(_QWORD *)(a1 + 296) = 0LL;
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  sub_18003682C(a1 + 256);
  sub_18002FC4C((void **)(a1 + 184));
  v11 = *(_QWORD ***)(a1 + 168);
  *v11[1] = 0LL;
  v12 = *v11;
  if ( *v11 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      v14 = v12[3];
      if ( v14 )
        sub_18001060C(v14);
      sub_180010234(v12, 0x20uLL);
      v12 = v13;
    }
    while ( v13 );
  }
  sub_180010234(*(void **)(a1 + 168), 0x20uLL);
  sub_1800247B0(a1 + 112);
  sub_1800131E0(a1 + 88);
  sub_18001734C((__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 80));
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 )
    sub_18001060C(v15);
  return sub_1800247B0(a1 + 8);
}
