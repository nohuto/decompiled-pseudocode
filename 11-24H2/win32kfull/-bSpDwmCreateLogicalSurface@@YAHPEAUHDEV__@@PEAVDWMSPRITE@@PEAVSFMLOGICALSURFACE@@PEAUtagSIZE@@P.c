/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1400CAC90
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1400CB024 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBC4C (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1401D99F0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140320C58 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x14002C858 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1400C916C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1400CAFFC (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1400CCA5C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     UserGetHwndProcess @ 0x1400CE104 (UserGetHwndProcess.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x14016B1E8 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401B8A30 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1401C256C (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bSpDwmCreateLogicalSurface(
        HDEV a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct tagSIZE *a4,
        struct SFMLOGICALSURFACE **a5)
{
  unsigned int v5; // r14d
  int v6; // edi
  int v10; // r12d
  struct SFMLOGICALSURFACE *v11; // rsi
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  HLSURF v15; // rax
  __int64 v16; // rdx
  HDEV v17; // rdx
  HDEV v18; // rdx
  __int64 v20; // rcx
  SURFACE *v21; // rbx
  __int64 v22; // rcx
  struct _W32PROCESS *HwndProcess; // rax
  HLSURF HLSURFClone; // rax
  __int64 v25; // rdx
  HDEV v26; // rdx
  HDEV v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // [rsp+38h] [rbp-C8h]
  _BYTE v33[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct SFMLOGICALSURFACE *v34; // [rsp+60h] [rbp-A0h]
  _BYTE v35[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h]
  _BYTE v37[96]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = 0;
  v6 = 0;
  v10 = 1;
  v11 = a3;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v33);
  if ( !a4 )
  {
    v11 = *a5;
    if ( *a5 == a3 )
    {
      ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v37);
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
      if ( HLSURFClone )
      {
        LOBYTE(v25) = 18;
        v34 = (struct SFMLOGICALSURFACE *)HmgLock(HLSURFClone, v25);
      }
      ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v37);
      v11 = v34;
      if ( !v34 )
        goto LABEL_17;
      DWMSPRITE::SetLogicalSurface(a2, v26, 0LL);
      DWMSPRITE::SetLogicalSurface(a2, v27, v11);
      v28 = (*((_QWORD *)a3 + 23) - 24LL) & -(__int64)(*((_QWORD *)a3 + 23) != 0LL);
      v32 = v28;
      if ( v28 )
      {
        INC_SHARE_REF_CNT(v28);
        SFMLOGICALSURFACE::SetShape(a3, a1, 0LL);
        SFMLOGICALSURFACE::SetShape(v11, a1, (struct _SURFOBJ *)(v32 + 24));
        *((_DWORD *)v11 + 63) |= 8u;
        DEC_SHARE_REF_CNT(v32);
      }
      *a5 = v11;
    }
    v6 = 0;
    goto LABEL_15;
  }
  v12 = *((_QWORD *)a3 + 23);
  if ( !v12 && (*((_DWORD *)a3 + 61) & 1) == 0 )
  {
    if ( *a5 != a3 )
      v11 = *a5;
    goto LABEL_12;
  }
  v13 = 0;
  v14 = 0;
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 36);
    v14 = *(_DWORD *)(v12 + 32);
  }
  if ( a4->cx == v14 && a4->cy == v13 )
    goto LABEL_15;
  *((_DWORD *)a2 + 16) = *((_DWORD *)a2 + 14);
  *((_DWORD *)a2 + 17) = *((_DWORD *)a2 + 15);
  v11 = *a5;
  if ( *a5 != a3 )
    goto LABEL_12;
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v37);
  v15 = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
  if ( v15 )
  {
    LOBYTE(v16) = 18;
    v34 = (struct SFMLOGICALSURFACE *)HmgLock(v15, v16);
  }
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v37);
  v11 = v34;
  if ( v34 )
  {
    DWMSPRITE::SetLogicalSurface(a2, v17, 0LL);
    DWMSPRITE::SetLogicalSurface(a2, v18, v11);
    *a5 = v11;
LABEL_12:
    v6 = 1;
LABEL_15:
    if ( v6 )
    {
      if ( a4 )
      {
        DWMSPRITE::vUpdateDpiScaling(a2, 0LL);
        if ( (*((_DWORD *)a2 + 35) & 0x20) != 0 )
        {
          bFToL(v20, a4, 6LL);
          bFToL(v29, &a4->cy, v30);
        }
      }
      SpCreateSurface(v35, a1, a4);
      v21 = (SURFACE *)v36;
      if ( v36 )
      {
        SFMLOGICALSURFACE::SetShape(v11, a1, (struct _SURFOBJ *)(v36 + 24));
        *((_DWORD *)v11 + 63) |= 8u;
        v22 = *((_QWORD *)a2 + 5);
        *((_DWORD *)a2 + 16) = a4->cx + *((_DWORD *)a2 + 14);
        *((_DWORD *)a2 + 17) = a4->cy + *((_DWORD *)a2 + 15);
        HwndProcess = (struct _W32PROCESS *)UserGetHwndProcess(v22);
        SURFACE::vAppContainerOwner(v21, HwndProcess);
      }
      else
      {
        v10 = 0;
      }
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v35);
    }
    v5 = v10;
  }
LABEL_17:
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v33);
  return v5;
}
