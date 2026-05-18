/*
 * XREFs of sub_180056950 @ 0x180056950
 * Callers:
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_180087D30 @ 0x180087D30 (sub_180087D30.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_1800133F4 @ 0x1800133F4 (sub_1800133F4.c)
 *     sub_180023E04 @ 0x180023E04 (sub_180023E04.c)
 *     sub_1800542C0 @ 0x1800542C0 (sub_1800542C0.c)
 *     sub_1800544FC @ 0x1800544FC (sub_1800544FC.c)
 *     sub_1800547B0 @ 0x1800547B0 (sub_1800547B0.c)
 *     sub_180054A5C @ 0x180054A5C (sub_180054A5C.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_1800555EC @ 0x1800555EC (sub_1800555EC.c)
 *     sub_1800556A0 @ 0x1800556A0 (sub_1800556A0.c)
 *     sub_180055714 @ 0x180055714 (sub_180055714.c)
 *     sub_1800568DC @ 0x1800568DC (sub_1800568DC.c)
 *     sub_1800784B0 @ 0x1800784B0 (sub_1800784B0.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_180056950(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 *v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  unsigned __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h]
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  char v21; // [rsp+40h] [rbp-40h]
  _BYTE v22[40]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]

  v4 = unknown_libname_81(&v18, a2);
  sub_1800784B0(a1, v4);
  sub_180023E04(&v18, a2);
  v5 = v18;
  *(_QWORD *)(v18 + 96) = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  sub_18001254C((__int64 *)(v5 + 136), (_QWORD *)(a1 + 136));
  sub_18001254C((__int64 *)(v5 + 152), (_QWORD *)(a1 + 152));
  *(_DWORD *)(v5 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v5 + 176) = *(_DWORD *)(a1 + 176);
  sub_1800133F4(v5 + 216, a1 + 216);
  sub_1800133F4(v5 + 248, a1 + 248);
  *(_DWORD *)(v5 + 292) = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(v5 + 296) = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(v5 + 300) = *(_DWORD *)(a1 + 300);
  *(_DWORD *)(v5 + 304) = *(_DWORD *)(a1 + 304);
  *(_DWORD *)(v5 + 308) = *(_DWORD *)(a1 + 308);
  *(_DWORD *)(v5 + 312) = *(_DWORD *)(a1 + 312);
  *(_DWORD *)(v5 + 316) = *(_DWORD *)(a1 + 316);
  *(_DWORD *)(v5 + 320) = *(_DWORD *)(a1 + 320);
  *(_DWORD *)(v5 + 324) = *(_DWORD *)(a1 + 324);
  *(_DWORD *)(v5 + 328) = *(_DWORD *)(a1 + 328);
  *(_DWORD *)(v5 + 332) = *(_DWORD *)(a1 + 332);
  *(_BYTE *)(v5 + 336) = *(_BYTE *)(a1 + 336);
  *(_DWORD *)(v5 + 340) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(v5 + 344) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(v5 + 348) = *(_DWORD *)(a1 + 348);
  *(_DWORD *)(v5 + 352) = *(_DWORD *)(a1 + 352);
  *(_DWORD *)(v5 + 356) = *(_DWORD *)(a1 + 356);
  *(_DWORD *)(v5 + 360) = *(_DWORD *)(a1 + 360);
  *(_DWORD *)(v5 + 364) = *(_DWORD *)(a1 + 364);
  *(_DWORD *)(v5 + 368) = *(_DWORD *)(a1 + 368);
  v21 = 0;
  if ( *(_BYTE *)(a1 + 388) )
  {
    v20 = *(_OWORD *)(a1 + 372);
    v21 = 1;
  }
  sub_180055584((__int128 *)(v5 + 372), &v20);
  *(_DWORD *)(v5 + 392) = *(_DWORD *)(a1 + 392);
  *(_DWORD *)(v5 + 396) = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(v5 + 400) = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(v5 + 404) = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(v5 + 408) = *(_DWORD *)(a1 + 408);
  if ( v5 + 416 != a1 + 416 )
    sub_1800542C0(
      (__int64 *)(v5 + 416),
      *(_QWORD *)(a1 + 416),
      (__int64)(*(_QWORD *)(a1 + 424) - *(_QWORD *)(a1 + 416)) >> 5);
  *(_DWORD *)(v5 + 440) = *(_DWORD *)(a1 + 440);
  *(_BYTE *)(v5 + 464) = *(_BYTE *)(a1 + 464);
  *(_BYTE *)(v5 + 465) = *(_BYTE *)(a1 + 465);
  *(_OWORD *)(v5 + 472) = *(_OWORD *)(a1 + 472);
  *(_OWORD *)(v5 + 488) = *(_OWORD *)(a1 + 488);
  *(_OWORD *)(v5 + 504) = *(_OWORD *)(a1 + 504);
  *(_OWORD *)(v5 + 520) = *(_OWORD *)(a1 + 520);
  *(_QWORD *)(v5 + 536) = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v5 + 544) = *(_DWORD *)(a1 + 544);
  sub_1800556A0(v5 + 548, a1 + 548);
  *(_DWORD *)(v5 + 1572) = *(_DWORD *)(a1 + 1572);
  *(_DWORD *)(v5 + 1576) = *(_DWORD *)(a1 + 1576);
  *(_DWORD *)(v5 + 1580) = *(_DWORD *)(a1 + 1580);
  *(_DWORD *)(v5 + 1584) = *(_DWORD *)(a1 + 1584);
  *(_DWORD *)(v5 + 1588) = *(_DWORD *)(a1 + 1588);
  *(_DWORD *)(v5 + 1592) = *(_DWORD *)(a1 + 1592);
  *(_DWORD *)(v5 + 1596) = *(_DWORD *)(a1 + 1596);
  *(_DWORD *)(v5 + 1600) = *(_DWORD *)(a1 + 1600);
  *(_BYTE *)(v5 + 1612) = *(_BYTE *)(a1 + 1612);
  sub_1800555EC((__int64 *)(v5 + 1616), (__int64 *)(a1 + 1616));
  *(_QWORD *)(v5 + 1696) = *(_QWORD *)(a1 + 1696);
  sub_180055714(v5 + 1704, a1 + 1704);
  v7 = (__int64 *)(v5 + 104);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v5 + 112) - *(_QWORD *)(v5 + 104)) >> 4);
  if ( v8 >= v9 )
  {
    if ( v8 > v9 )
    {
      if ( v8 <= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v5 + 120) - *(_QWORD *)(v5 + 104)) >> 4) )
        *(_QWORD *)(v5 + 112) = sub_180054A5C(*(_QWORD *)(v5 + 112), v8 - v9);
      else
        sub_1800547B0((_QWORD *)(v5 + 104), v8, v6);
    }
  }
  else
  {
    v10 = *v7 + 16 * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4);
    sub_1800544FC(v10, v7[1]);
    v7[1] = v10;
  }
  v11 = 0LL;
  v12 = *(_QWORD *)(a1 + 104);
  result = 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v12) >> 4);
  if ( result )
  {
    v14 = 0LL;
    do
    {
      v15 = sub_1800568DC(v14 + v12, (__int64)v22);
      v16 = *v7;
      *(_BYTE *)(v14 + v16) = *(_BYTE *)v15;
      *(_QWORD *)(v14 + v16 + 8) = *(_QWORD *)(v15 + 8);
      *(_QWORD *)(v14 + v16 + 16) = *(_QWORD *)(v15 + 16);
      *(_QWORD *)(v14 + v16 + 24) = *(_QWORD *)(v15 + 24);
      sub_180011110((_QWORD *)(v14 + v16 + 32), (__int64 *)(v15 + 32));
      if ( v23 )
        sub_18001060C(v23);
      ++v11;
      v14 += 48LL;
      v12 = *(_QWORD *)(a1 + 104);
      result = 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v12) >> 4);
    }
    while ( v11 < result );
  }
  if ( v19 )
    result = sub_18001060C(v19);
  v17 = a2[1];
  if ( v17 )
    return sub_18001060C(v17);
  return result;
}
