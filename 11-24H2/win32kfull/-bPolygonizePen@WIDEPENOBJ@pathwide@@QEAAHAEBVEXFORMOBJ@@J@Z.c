/*
 * XREFs of ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x1400E9CE8
 * Callers:
 *     ??0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400E9988 (--0WIDENER@pathwide@@QEAA@AEAVEPATHOBJ@@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z @ 0x1400E9688 (-bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z.c)
 *     ?bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z @ 0x1400E9838 (-bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x1400EB7C0 (-bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x1400EC074 (-bPenFlatten@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z @ 0x1400ED27C (-vHalve@pathwide@@YAXAEAVEVECTORFX@@@Z.c)
 *     ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x1400ED3F0 (-bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall pathwide::WIDEPENOBJ::bPolygonizePen(struct _POINTFIX **this, const struct EXFORMOBJ *a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // r8d
  struct EVECTORFX *v9; // r8
  struct EVECTORFX *v10; // rdx
  struct EVECTORFX *v11; // rdx
  int v12; // ebx
  int v13; // r11d
  int v14; // r10d
  int v15; // r9d
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  struct _POINTFIX v17; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+48h] [rbp-38h]
  int v19; // [rsp+4Ch] [rbp-34h]
  int v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+54h] [rbp-2Ch]
  __int64 v22; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+64h] [rbp-1Ch]
  int v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+6Ch] [rbp-14h]
  int v27; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+74h] [rbp-Ch]

  LODWORD(v16) = a3;
  *(_QWORD *)((char *)&v16 + 4) = 0LL;
  HIDWORD(v16) = -a3;
  EXFORMOBJ::bXform(a2, (const struct _VECTORL *)&v16, (struct _VECTORFX *)&v16, 2uLL, 0);
  v4 = v16;
  v5 = DWORD1(v16);
  if ( (_QWORD)v16 == __PAIR64__(-DWORD2(v16), HIDWORD(v16)) || (_QWORD)v16 == __PAIR64__(DWORD2(v16), -HIDWORD(v16)) )
  {
    v6 = v16;
    if ( (int)v16 < 0 )
      v6 = -(int)v16;
    v7 = DWORD1(v16);
    if ( SDWORD1(v16) < 0 )
      v7 = -DWORD1(v16);
    if ( v6 <= v7 )
    {
      if ( SDWORD1(v16) < 0 )
        v5 = -DWORD1(v16);
      v4 = v5;
    }
    else if ( (int)v16 < 0 )
    {
      v4 = -(int)v16;
    }
    if ( v4 < 104 )
    {
      if ( (unsigned int)pathwide::WIDEPENOBJ::bHobbyize(this, (struct EVECTORFX *const)&v16) )
        return 1LL;
      if ( !(unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)this) )
        return 0LL;
    }
  }
  if ( (unsigned int)pathwide::WIDEPENOBJ::bThicken((pathwide::WIDEPENOBJ *)this, (struct _POINTFIX *)&v16) )
    return 1LL;
  if ( !(unsigned int)pathwide::WIDEPATHOBJ::bValid((pathwide::WIDEPATHOBJ *)this) )
    return 0LL;
  if ( !pathwide::bTurnLeftRandom((pathwide *)&v16, (struct EVECTORFX *)((char *)&v16 + 8), v9) )
  {
    DWORD2(v16) = -DWORD2(v16);
    HIDWORD(v16) = -HIDWORD(v16);
  }
  pathwide::vHalve((pathwide *)&v16, v10);
  pathwide::vHalve((pathwide *)((char *)&v16 + 8), v11);
  v12 = v16 - ((unsigned __int64)(1922922357LL * (int)v16) >> 32);
  v13 = DWORD1(v16) - ((unsigned __int64)(1922922357LL * SDWORD1(v16)) >> 32);
  v28 = -DWORD1(v16);
  v24 = HIDWORD(v16) - v13;
  v21 = v13 + HIDWORD(v16);
  v22 = *((_QWORD *)&v16 + 1);
  v14 = DWORD2(v16) - ((unsigned __int64)(1922922357LL * SDWORD2(v16)) >> 32);
  v17 = (struct _POINTFIX)v16;
  v15 = HIDWORD(v16) - ((unsigned __int64)(1922922357LL * SHIDWORD(v16)) >> 32);
  v19 = v15 + DWORD1(v16);
  v27 = -(int)v16;
  v26 = v15 - DWORD1(v16);
  v25 = v14 - v16;
  v23 = DWORD2(v16) - v12;
  v20 = v12 + DWORD2(v16);
  v18 = v14 + v16;
  return pathwide::WIDEPENOBJ::bPenFlatten((pathwide::WIDEPENOBJ *)this, &v17);
}
