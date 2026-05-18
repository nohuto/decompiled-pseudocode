/*
 * XREFs of sub_18003001C @ 0x18003001C
 * Callers:
 *     sub_180030AD0 @ 0x180030AD0 (sub_180030AD0.c)
 *     sub_18005EA38 @ 0x18005EA38 (sub_18005EA38.c)
 *     ?dtor$14@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_2 @ 0x1800D974D (-dtor$14@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA_2.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_18001724C @ 0x18001724C (sub_18001724C.c)
 *     sub_1800172FC @ 0x1800172FC (sub_1800172FC.c)
 *     sub_180024650 @ 0x180024650 (sub_180024650.c)
 *     sub_180026484 @ 0x180026484 (sub_180026484.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     sub_18002FAEC @ 0x18002FAEC (sub_18002FAEC.c)
 *     sub_18002FB1C @ 0x18002FB1C (sub_18002FB1C.c)
 *     sub_18002FEB0 @ 0x18002FEB0 (sub_18002FEB0.c)
 *     sub_1800303A4 @ 0x1800303A4 (sub_1800303A4.c)
 *     sub_18003055C @ 0x18003055C (sub_18003055C.c)
 *     sub_180034C38 @ 0x180034C38 (sub_180034C38.c)
 *     sub_1800366CC @ 0x1800366CC (sub_1800366CC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=31
__int64 __fastcall sub_18003001C(__int64 a1)
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
  sub_1800284DC(a1 + 8, (__int64)v17);
  if ( !*(_BYTE *)(a1 + 1160) )
  {
    sub_180034C38(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    *(_BYTE *)(a1 + 1160) = 1;
  }
  sub_180010F44((__int64)v17);
  sub_1800303A4(a1 + 1376);
  sub_180013128(a1 + 1344);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 1280));
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 1208));
  sub_18003055C(a1 + 1184);
  sub_180024650(a1 + 1104);
  sub_180026484((void **)(a1 + 1080));
  sub_18002FEB0((void ***)(a1 + 984));
  v2 = *(_QWORD *)(a1 + 976);
  if ( v2 )
    sub_18001050C(v2);
  v3 = *(_QWORD *)(a1 + 888);
  if ( v3 )
  {
    sub_180010AA8(v3, *(_QWORD *)(a1 + 896));
    sub_180010134(*(void **)(a1 + 888), (*(_QWORD *)(a1 + 904) - *(_QWORD *)(a1 + 888)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 888) = 0LL;
    *(_QWORD *)(a1 + 896) = 0LL;
    *(_QWORD *)(a1 + 904) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 864);
  if ( v4 )
  {
    sub_180010AA8(v4, *(_QWORD *)(a1 + 872));
    sub_180010134(*(void **)(a1 + 864), (*(_QWORD *)(a1 + 880) - *(_QWORD *)(a1 + 864)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 864) = 0LL;
    *(_QWORD *)(a1 + 872) = 0LL;
    *(_QWORD *)(a1 + 880) = 0LL;
  }
  sub_180024650(a1 + 808);
  sub_18002FB1C((void **)(a1 + 728));
  v5 = *(_QWORD *)(a1 + 704);
  if ( v5 )
  {
    sub_180012040(v5, *(_QWORD *)(a1 + 712));
    sub_180010134(*(void **)(a1 + 704), (*(_QWORD *)(a1 + 720) - *(_QWORD *)(a1 + 704)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 704) = 0LL;
    *(_QWORD *)(a1 + 712) = 0LL;
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  sub_1800172FC(a1 + 568);
  v6 = *(_QWORD *)(a1 + 520);
  if ( v6 )
    sub_18001050C(v6);
  v7 = *(_QWORD *)(a1 + 504);
  if ( v7 )
    sub_18001050C(v7);
  v8 = *(_QWORD *)(a1 + 488);
  if ( v8 )
    sub_18001050C(v8);
  v9 = *(_QWORD *)(a1 + 472);
  if ( v9 )
    sub_18001050C(v9);
  sub_1800366CC(a1 + 432);
  sub_180024650(a1 + 312);
  v10 = *(_QWORD *)(a1 + 288);
  if ( v10 )
  {
    sub_180010AA8(v10, *(_QWORD *)(a1 + 296));
    sub_180010134(*(void **)(a1 + 288), (*(_QWORD *)(a1 + 304) - *(_QWORD *)(a1 + 288)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 288) = 0LL;
    *(_QWORD *)(a1 + 296) = 0LL;
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  sub_1800366CC(a1 + 256);
  sub_18002FAEC((void **)(a1 + 184));
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
        sub_18001050C(v14);
      sub_180010134(v12, 0x20uLL);
      v12 = v13;
    }
    while ( v13 );
  }
  sub_180010134(*(void **)(a1 + 168), 0x20uLL);
  sub_180024650(a1 + 112);
  sub_1800130E0(a1 + 88);
  sub_18001724C((__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 80));
  v15 = *(_QWORD *)(a1 + 72);
  if ( v15 )
    sub_18001050C(v15);
  return sub_180024650(a1 + 8);
}
