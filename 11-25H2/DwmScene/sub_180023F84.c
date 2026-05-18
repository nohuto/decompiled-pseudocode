/*
 * XREFs of sub_180023F84 @ 0x180023F84
 * Callers:
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 *     sub_1800B84DC @ 0x1800B84DC (sub_1800B84DC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_180023F10 @ 0x180023F10 (sub_180023F10.c)
 *     sub_180024334 @ 0x180024334 (sub_180024334.c)
 *     sub_1800283E0 @ 0x1800283E0 (sub_1800283E0.c)
 *     sub_1800697B4 @ 0x1800697B4 (sub_1800697B4.c)
 *     sub_180069D48 @ 0x180069D48 (sub_180069D48.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_180023F84(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v10; // [rsp+A0h] [rbp+18h] BYREF

  v10 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = a1 + 24;
  if ( a2 )
    v7 = *(unsigned int *)(a2 + 32);
  else
    v7 = 1LL;
  sub_1800283E0(v6, v7);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_WORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 7LL;
  *(_WORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 7LL;
  *(_WORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 7LL;
  *(_WORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 7LL;
  *(_WORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 240) = 1;
  *(_DWORD *)(a1 + 244) = _InterlockedExchangeAdd(&dword_1801C2BAC, 1u);
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 1;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 40960;
  *(_QWORD *)(a1 + 320) = 45312LL;
  *(_QWORD *)(a1 + 328) = 1LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 384) = 3;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  sub_180024334(a1 + 496);
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 544) = *a3;
  *(_QWORD *)(a1 + 552) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_1800697B4(a1 + 560);
  sub_1800697B4(a1 + 688);
  sub_1800697B4(a1 + 816);
  sub_180069D48(a1 + 944);
  *(_QWORD *)(a1 + 3504) = 0LL;
  *(_QWORD *)(a1 + 3512) = 0LL;
  *(_QWORD *)(a1 + 3520) = 0LL;
  *(_QWORD *)(a1 + 3528) = 0LL;
  *(_QWORD *)(a1 + 3536) = 0LL;
  *(_QWORD *)(a1 + 3544) = 3LL;
  *(_QWORD *)(a1 + 3552) = 0LL;
  *(_QWORD *)(a1 + 3560) = 0LL;
  *(_QWORD *)(a1 + 3568) = 0LL;
  *(_QWORD *)(a1 + 3576) = 0LL;
  *(_DWORD *)(a1 + 3584) = 0;
  *(_QWORD *)(a1 + 3592) = 0LL;
  *(_QWORD *)(a1 + 3600) = 0LL;
  *(_QWORD *)(a1 + 3608) = 0LL;
  *(_QWORD *)(a1 + 3616) = 0LL;
  *(_QWORD *)(a1 + 3624) = 0LL;
  *(_QWORD *)(a1 + 3632) = 0LL;
  *(_WORD *)(a1 + 3640) = 0;
  *(_QWORD *)(a1 + 3648) = a2;
  *(_QWORD *)(a1 + 3656) = 0LL;
  *(_QWORD *)(a1 + 3664) = 0LL;
  *(_QWORD *)(a1 + 3672) = 0LL;
  *(_QWORD *)(a1 + 3680) = 0LL;
  *(_QWORD *)(a1 + 3688) = 0LL;
  *(_QWORD *)(a1 + 3696) = 0LL;
  *(_QWORD *)(a1 + 3712) = 0LL;
  *(_QWORD *)(a1 + 3720) = 0LL;
  *(_QWORD *)(a1 + 3728) = 0LL;
  *(_QWORD *)(a1 + 3736) = 0LL;
  *(_QWORD *)(a1 + 3744) = 0LL;
  *(_QWORD *)(a1 + 3752) = 0LL;
  *(_DWORD *)(a1 + 3704) = 0;
  *(_DWORD *)(a1 + 3708) = 1065353216;
  sub_180023F10((_QWORD *)(a1 + 3760), a1);
  *(_OWORD *)(a1 + 424) = 0LL;
  *(_OWORD *)(a1 + 440) = 0LL;
  *(_OWORD *)(a1 + 456) = 0LL;
  *(_OWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 424) = *sub_180011B8C((__int64 *)&v10);
  v8 = a3[1];
  if ( v8 )
    sub_18001050C(v8);
  return a1;
}
