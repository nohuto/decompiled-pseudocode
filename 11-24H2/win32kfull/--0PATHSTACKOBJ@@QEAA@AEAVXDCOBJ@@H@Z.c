/*
 * XREFs of ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58
 * Callers:
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400D2E9C (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     GrePolyBezierTo @ 0x1400D3770 (GrePolyBezierTo.c)
 *     NtGdiArcInternal @ 0x1400E5070 (NtGdiArcInternal.c)
 *     NtGdiRoundRect @ 0x1400E62B0 (NtGdiRoundRect.c)
 *     GreEllipse @ 0x1400E65B0 (GreEllipse.c)
 *     ?GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400E69C0 (-GrepRectangle@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z @ 0x1400EC404 (-GrepAngleArc@@YAHAEAVXDCOBJ@@HHKMM@Z.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x140176F30 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     ?GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z @ 0x1401A1B44 (-GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z.c)
 *     ?GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z @ 0x1401BAE44 (-GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z.c)
 *     GrePolylineTo @ 0x1401D62E0 (GrePolylineTo.c)
 *     ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140330C60 (-GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400DB55C (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400E590C (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1400E61E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 */

PATHSTACKOBJ *__fastcall PATHSTACKOBJ::PATHSTACKOBJ(PATHSTACKOBJ *this, DC **a2, int a3)
{
  _QWORD *v3; // rbx
  char *v4; // r15
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  const struct _POINTL *v11; // r10
  _QWORD *v12; // rax
  const struct _POINTL *v13; // r8
  LONG x; // ebx
  DC *v16; // rax
  __int64 v17; // rbx
  int v18; // ebx
  DC *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  struct HPATH__ *v22; // rdx
  __int64 v23; // [rsp+28h] [rbp-E0h] BYREF
  bool v24; // [rsp+30h] [rbp-D8h]
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  struct HPATH__ **v26; // [rsp+40h] [rbp-C8h]
  char v27[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+168h] [rbp+60h] BYREF

  v3 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 9) = 0LL;
  v4 = (char *)this + 120;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 28) = 0;
  PATH_CORE::PATH_CORE((PATHSTACKOBJ *)((char *)this + 144));
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v9 = *((_DWORD *)*a2 + 62);
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      *((_DWORD *)*a2 + 62) = v9 & 0xFFFFFFFD;
      XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v27, *((struct HPATH__ **)*a2 + 25));
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v25);
      if ( v26 && v28 && EPATHOBJ::bClone((EPATHOBJ *)&v25, (const struct EPATHOBJ *)v27) )
        v22 = *v26;
      else
        v22 = 0LL;
      DC::hpath(*a2, v22);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v25);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v27);
    }
    *((_QWORD *)this + 1) = 0LL;
    if ( !*((_DWORD *)this + 28) )
    {
      PushThreadGuardedObject((char *)this + 80, this, XEPATHOBJ_vDestructWrap);
      *((_DWORD *)this + 28) = 1;
    }
    LOBYTE(v8) = 7;
    v10 = HmgShareLock(*((_QWORD *)*a2 + 25), v8);
    *((_QWORD *)this + 1) = v10;
    if ( v10 )
    {
      *((_DWORD *)this + 1) = *(_DWORD *)(v10 + 96);
      *(_DWORD *)this = *(_DWORD *)(v10 + 92);
      if ( a3 )
      {
        v11 = (const struct _POINTL *)*((_QWORD *)*a2 + 122);
        if ( (v11[19].x & 0x200) != 0 )
        {
          x = v11[26].x;
          DC::QuickInitXform(*a2, &v29, 516LL);
          v23 = v29;
          v16 = *a2;
          v24 = x != 2;
          EXFORMOBJR::bXformRound(
            (EXFORMOBJR *)&v23,
            (const struct _POINTL *)(*((_QWORD *)v16 + 122) + 216LL),
            (struct _POINTFIX *)(*((_QWORD *)v16 + 122) + 8LL),
            1uLL);
          *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
          v13 = (const struct _POINTL *)(*((_QWORD *)*a2 + 122) + 8LL);
        }
        else
        {
          if ( (*(_DWORD *)(v10 + 72) & 1) != 0 )
            v12 = (_QWORD *)(v10 + 64);
          else
            v12 = (_QWORD *)(*(_QWORD *)(v10 + 40)
                           + 8 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v10 + 40) + 20LL) - 1) + 3LL));
          v13 = v11 + 1;
          if ( *(_QWORD *)&v11[1] == *v12 )
            return this;
        }
        EPATHOBJ::bMoveTo(this, 0LL, v13);
      }
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *v3 = (char *)this + 440;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = (char *)this + 464;
    *((_QWORD *)this + 1) = v4;
    *((_DWORD *)this + 48) = 1;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 52) = 1;
    *((_DWORD *)this + 114) = 256;
    if ( a3 )
    {
      v17 = *((_QWORD *)*a2 + 122);
      if ( (*(_DWORD *)(v17 + 152) & 0x200) != 0 )
      {
        v18 = *(_DWORD *)(v17 + 208);
        DC::QuickInitXform(*a2, &v29, 516LL);
        v23 = v29;
        v19 = *a2;
        v24 = v18 != 2;
        EXFORMOBJR::bXformRound(
          (EXFORMOBJR *)&v23,
          (const struct _POINTL *)(*((_QWORD *)v19 + 122) + 216LL),
          (struct _POINTFIX *)(*((_QWORD *)v19 + 122) + 8LL),
          1uLL);
        *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x200u;
      }
      *((_QWORD *)this + 23) = *(_QWORD *)(*((_QWORD *)*a2 + 122) + 8LL);
      v20 = *((_QWORD *)*a2 + 122);
      v21 = *(_DWORD *)(v20 + 152);
      if ( (v21 & 0x400) != 0 )
      {
        *(_DWORD *)(v20 + 152) = v21 & 0xFFFFFBFF;
        *((_DWORD *)*a2 + 60) = 0;
      }
    }
  }
  return this;
}
