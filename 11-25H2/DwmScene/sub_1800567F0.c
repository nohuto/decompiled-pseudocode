/*
 * XREFs of sub_1800567F0 @ 0x1800567F0
 * Callers:
 *     sub_180083C90 @ 0x180083C90 (sub_180083C90.c)
 *     sub_180087BD0 @ 0x180087BD0 (sub_180087BD0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_1800132F4 @ 0x1800132F4 (sub_1800132F4.c)
 *     sub_180023CA4 @ 0x180023CA4 (sub_180023CA4.c)
 *     sub_180054160 @ 0x180054160 (sub_180054160.c)
 *     sub_18005439C @ 0x18005439C (sub_18005439C.c)
 *     sub_180054650 @ 0x180054650 (sub_180054650.c)
 *     sub_1800548FC @ 0x1800548FC (sub_1800548FC.c)
 *     sub_180055424 @ 0x180055424 (sub_180055424.c)
 *     sub_18005548C @ 0x18005548C (sub_18005548C.c)
 *     sub_180055540 @ 0x180055540 (sub_180055540.c)
 *     sub_1800555B4 @ 0x1800555B4 (sub_1800555B4.c)
 *     sub_18005677C @ 0x18005677C (sub_18005677C.c)
 *     sub_180078350 @ 0x180078350 (sub_180078350.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_1800567F0(__int64 a1, _QWORD *a2)
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
  sub_180078350(a1, v4);
  sub_180023CA4(&v18, a2);
  v5 = v18;
  *(_QWORD *)(v18 + 96) = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  sub_18001244C((__int64 *)(v5 + 136), (_QWORD *)(a1 + 136));
  sub_18001244C((__int64 *)(v5 + 152), (_QWORD *)(a1 + 152));
  *(_DWORD *)(v5 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v5 + 176) = *(_DWORD *)(a1 + 176);
  sub_1800132F4(v5 + 216, a1 + 216);
  sub_1800132F4(v5 + 248, a1 + 248);
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
  sub_180055424((__int128 *)(v5 + 372), &v20);
  *(_DWORD *)(v5 + 392) = *(_DWORD *)(a1 + 392);
  *(_DWORD *)(v5 + 396) = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(v5 + 400) = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(v5 + 404) = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(v5 + 408) = *(_DWORD *)(a1 + 408);
  if ( v5 + 416 != a1 + 416 )
    sub_180054160(
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
  sub_180055540(v5 + 548, a1 + 548);
  *(_DWORD *)(v5 + 1572) = *(_DWORD *)(a1 + 1572);
  *(_DWORD *)(v5 + 1576) = *(_DWORD *)(a1 + 1576);
  *(_DWORD *)(v5 + 1580) = *(_DWORD *)(a1 + 1580);
  *(_DWORD *)(v5 + 1584) = *(_DWORD *)(a1 + 1584);
  *(_DWORD *)(v5 + 1588) = *(_DWORD *)(a1 + 1588);
  *(_DWORD *)(v5 + 1592) = *(_DWORD *)(a1 + 1592);
  *(_DWORD *)(v5 + 1596) = *(_DWORD *)(a1 + 1596);
  *(_DWORD *)(v5 + 1600) = *(_DWORD *)(a1 + 1600);
  *(_BYTE *)(v5 + 1612) = *(_BYTE *)(a1 + 1612);
  sub_18005548C((__int64 *)(v5 + 1616), (__int64 *)(a1 + 1616));
  *(_QWORD *)(v5 + 1696) = *(_QWORD *)(a1 + 1696);
  sub_1800555B4(v5 + 1704, a1 + 1704);
  v7 = (__int64 *)(v5 + 104);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4);
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v5 + 112) - *(_QWORD *)(v5 + 104)) >> 4);
  if ( v8 >= v9 )
  {
    if ( v8 > v9 )
    {
      if ( v8 <= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(v5 + 120) - *(_QWORD *)(v5 + 104)) >> 4) )
        *(_QWORD *)(v5 + 112) = sub_1800548FC(*(_QWORD *)(v5 + 112), v8 - v9);
      else
        sub_180054650((_QWORD *)(v5 + 104), v8, v6);
    }
  }
  else
  {
    v10 = *v7 + 16 * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 4);
    sub_18005439C(v10, v7[1]);
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
      v15 = sub_18005677C(v14 + v12, (__int64)v22);
      v16 = *v7;
      *(_BYTE *)(v14 + v16) = *(_BYTE *)v15;
      *(_QWORD *)(v14 + v16 + 8) = *(_QWORD *)(v15 + 8);
      *(_QWORD *)(v14 + v16 + 16) = *(_QWORD *)(v15 + 16);
      *(_QWORD *)(v14 + v16 + 24) = *(_QWORD *)(v15 + 24);
      sub_180011010((_QWORD *)(v14 + v16 + 32), (__int64 *)(v15 + 32));
      if ( v23 )
        sub_18001050C(v23);
      ++v11;
      v14 += 48LL;
      v12 = *(_QWORD *)(a1 + 104);
      result = 0xAAAAAAAAAAAAAAABuLL * ((*(_QWORD *)(a1 + 112) - v12) >> 4);
    }
    while ( v11 < result );
  }
  if ( v19 )
    result = sub_18001050C(v19);
  v17 = a2[1];
  if ( v17 )
    return sub_18001050C(v17);
  return result;
}
