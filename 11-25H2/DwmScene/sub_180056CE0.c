/*
 * XREFs of sub_180056CE0 @ 0x180056CE0
 * Callers:
 *     sub_180083DB0 @ 0x180083DB0 (sub_180083DB0.c)
 *     sub_180087DE0 @ 0x180087DE0 (sub_180087DE0.c)
 * Callees:
 *     sub_18001B3DC @ 0x18001B3DC (sub_18001B3DC.c)
 *     sub_180040FA4 @ 0x180040FA4 (sub_180040FA4.c)
 *     sub_180044F14 @ 0x180044F14 (sub_180044F14.c)
 *     sub_180053F54 @ 0x180053F54 (sub_180053F54.c)
 *     sub_180053FF8 @ 0x180053FF8 (sub_180053FF8.c)
 *     sub_180054070 @ 0x180054070 (sub_180054070.c)
 *     sub_180058EBC @ 0x180058EBC (sub_180058EBC.c)
 *     sub_1800783D0 @ 0x1800783D0 (sub_1800783D0.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

bool __fastcall sub_180056CE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  float v5; // xmm6_4
  char v6; // al
  bool v7; // al

  if ( !(unsigned __int8)sub_1800783D0() )
    return 0;
  v4 = _RTDynamicCast(
         a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::Camera `RTTI Type Descriptor',
         1);
  if ( !sub_180053F54((__int64 *)(v4 + 104), (_QWORD *)(a1 + 104)) )
    return 0;
  if ( *(_DWORD *)(v4 + 128) != *(_DWORD *)(a1 + 128) )
    return 0;
  if ( *(_QWORD *)(v4 + 136) != *(_QWORD *)(a1 + 136) )
    return 0;
  if ( *(_QWORD *)(v4 + 152) != *(_QWORD *)(a1 + 152) )
    return 0;
  if ( *(_DWORD *)(v4 + 172) != *(_DWORD *)(a1 + 172) )
    return 0;
  if ( *(_DWORD *)(v4 + 176) != *(_DWORD *)(a1 + 176) )
    return 0;
  if ( sub_18001B3DC(v4 + 216, a1 + 216) )
    return 0;
  if ( sub_18001B3DC(v4 + 248, a1 + 248) )
    return 0;
  if ( *(_DWORD *)(v4 + 292) != *(_DWORD *)(a1 + 292) )
    return 0;
  if ( _mm_movemask_ps(_mm_cmpneq_ps(*(__m128 *)(v4 + 296), *(__m128 *)(a1 + 296))) )
    return 0;
  if ( *(float *)(v4 + 312) != *(float *)(a1 + 312) )
    return 0;
  if ( *(_DWORD *)(v4 + 316) != *(_DWORD *)(a1 + 316) )
    return 0;
  if ( *(float *)(v4 + 320) != *(float *)(a1 + 320) )
    return 0;
  if ( *(float *)(v4 + 324) != *(float *)(a1 + 324) )
    return 0;
  if ( *(float *)(v4 + 328) != *(float *)(a1 + 328) )
    return 0;
  sub_180058EBC(v4);
  v5 = *(float *)(v4 + 332);
  sub_180058EBC(a1);
  if ( v5 != *(float *)(a1 + 332)
    || *(_BYTE *)(v4 + 336) != *(_BYTE *)(a1 + 336)
    || *(float *)(v4 + 340) != *(float *)(a1 + 340)
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 344), (__m128)*(unsigned __int64 *)(v4 + 344))) & 3) != 3
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 352), (__m128)*(unsigned __int64 *)(v4 + 352))) & 3) != 3
    || *(_DWORD *)(v4 + 360) != *(_DWORD *)(a1 + 360)
    || (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(a1 + 364), (__m128)*(unsigned __int64 *)(v4 + 364))) & 3) != 3 )
  {
    return 0;
  }
  v6 = *(_BYTE *)(a1 + 388);
  if ( *(_BYTE *)(v4 + 388) )
  {
    if ( !v6 )
      return 0;
    v7 = sub_180040FA4((_DWORD *)(v4 + 372), (_DWORD *)(a1 + 372));
  }
  else
  {
    v7 = v6 == 0;
  }
  return v7
      && *(float *)(v4 + 392) == *(float *)(a1 + 392)
      && *(float *)(v4 + 396) == *(float *)(a1 + 396)
      && *(float *)(v4 + 400) == *(float *)(a1 + 400)
      && *(float *)(v4 + 404) == *(float *)(a1 + 404)
      && *(float *)(v4 + 408) == *(float *)(a1 + 408)
      && !sub_180054070((__int64 *)(v4 + 416), (_QWORD *)(a1 + 416))
      && *(_DWORD *)(v4 + 440) == *(_DWORD *)(a1 + 440)
      && *(_BYTE *)(v4 + 464) == *(_BYTE *)(a1 + 464)
      && *(_BYTE *)(v4 + 465) == *(_BYTE *)(a1 + 465)
      && *(_QWORD *)(v4 + 480) == *(_QWORD *)(a1 + 480)
      && *(_QWORD *)(v4 + 472) == *(_QWORD *)(a1 + 472)
      && *(_QWORD *)(v4 + 496) == *(_QWORD *)(a1 + 496)
      && *(_QWORD *)(v4 + 488) == *(_QWORD *)(a1 + 488)
      && *(_QWORD *)(v4 + 512) == *(_QWORD *)(a1 + 512)
      && *(_QWORD *)(v4 + 504) == *(_QWORD *)(a1 + 504)
      && *(_QWORD *)(v4 + 528) == *(_QWORD *)(a1 + 528)
      && *(_QWORD *)(v4 + 520) == *(_QWORD *)(a1 + 520)
      && *(_QWORD *)(v4 + 536) == *(_QWORD *)(a1 + 536)
      && !sub_180053FF8(v4 + 1616, a1 + 1616)
      && sub_180044F14(*(_QWORD *)(v4 + 1696), *(_QWORD *)(a1 + 1696))
      && !*(_QWORD *)(v4 + 1760)
      && !*(_QWORD *)(a1 + 1760);
}
