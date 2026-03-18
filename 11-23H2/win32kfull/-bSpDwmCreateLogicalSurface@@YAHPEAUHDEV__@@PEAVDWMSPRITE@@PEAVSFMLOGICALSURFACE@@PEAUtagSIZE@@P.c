/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01340F4
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00B9650 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0133DCC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C02651C0 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C0265D20 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     bFToL @ 0x1C0078740 (bFToL.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00853DC (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C00AA4A0 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00B4A08 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C4690 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00C5C10 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C5CF0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     UserGetHwndProcess @ 0x1C0134978 (UserGetHwndProcess.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01349A0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0134C60 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0264E00 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 */

__int64 __fastcall bSpDwmCreateLogicalSurface(
        HDEV a1,
        struct DWMSPRITE *this,
        struct SFMLOGICALSURFACE *a3,
        struct tagSIZE *a4,
        struct SFMLOGICALSURFACE **a5)
{
  int v9; // r12d
  unsigned int v10; // ebp
  HLSURF v11; // rax
  HDEV v12; // rdx
  struct SFMLOGICALSURFACE *v13; // rbx
  HDEV v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rcx
  int v20; // edx
  int v21; // eax
  HLSURF HLSURFClone; // rax
  HDEV v23; // rdx
  HDEV v24; // rdx
  float v25; // xmm2_4
  LONG cy; // ebx
  unsigned int v27; // r8d
  SURFACE *v28; // rbx
  __int64 v29; // rcx
  struct _EPROCESS *HwndProcess; // rax
  _BYTE v32[32]; // [rsp+30h] [rbp-88h] BYREF
  SURFACE *v33; // [rsp+50h] [rbp-68h]
  _BYTE v34[32]; // [rsp+58h] [rbp-60h] BYREF
  struct SFMLOGICALSURFACE *v35; // [rsp+78h] [rbp-40h]

  v9 = 1;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v34);
  v10 = 0;
  if ( a4 )
  {
    v19 = *((_QWORD *)a3 + 23);
    if ( v19 || (*((_DWORD *)a3 + 61) & 1) != 0 )
    {
      v20 = 0;
      v21 = 0;
      if ( v19 )
      {
        v20 = *(_DWORD *)(v19 + 36);
        v21 = *(_DWORD *)(v19 + 32);
      }
      if ( a4->cx == v21 && a4->cy == v20 )
        goto LABEL_27;
      *((_DWORD *)this + 16) = *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = *((_DWORD *)this + 15);
      if ( *a5 == a3 )
      {
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v34, HLSURFClone);
        a3 = v35;
        if ( !v35 )
          goto LABEL_28;
        DWMSPRITE::SetLogicalSurface(this, v23, 0LL);
        DWMSPRITE::SetLogicalSurface(this, v24, a3);
        *a5 = a3;
      }
      else
      {
        a3 = *a5;
      }
    }
    else if ( *a5 != a3 )
    {
      a3 = *a5;
    }
    DWMSPRITE::vUpdateDpiScaling(this, 0LL);
    if ( (*((_DWORD *)this + 35) & 0x20) != 0 )
    {
      v25 = *((float *)this + 34);
      cy = a4->cy;
      bFToL((float)a4->cx * *((float *)this + 33), (int *)a4, 6u);
      bFToL((float)cy * v25, &a4->cy, v27);
    }
    SpCreateSurface(v32, a1, a4);
    v28 = v33;
    if ( v33 )
    {
      SFMLOGICALSURFACE::SetShape(a3, a1, (struct _SURFOBJ *)((char *)v33 + 24));
      *((_DWORD *)a3 + 63) |= 8u;
      v29 = *((_QWORD *)this + 5);
      *((_DWORD *)this + 16) = a4->cx + *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = a4->cy + *((_DWORD *)this + 15);
      HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(v29);
      SURFACE::vAppContainerOwner(v28, HwndProcess);
      v28 = v33;
    }
    else
    {
      v9 = 0;
    }
    if ( v28 )
      DEC_SHARE_REF_CNT(v28);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
    goto LABEL_27;
  }
  if ( *a5 != a3 )
  {
LABEL_27:
    v10 = v9;
    goto LABEL_28;
  }
  v11 = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v34, v11);
  v13 = v35;
  if ( v35 )
  {
    DWMSPRITE::SetLogicalSurface(this, v12, 0LL);
    DWMSPRITE::SetLogicalSurface(this, v14, v13);
    v15 = *((_QWORD *)a3 + 23);
    v16 = v15 - 24;
    v17 = -v15;
    v18 = v16 & -(__int64)(v17 != 0);
    if ( v18 )
    {
      INC_SHARE_REF_CNT(v16 & -(__int64)(v17 != 0));
      SFMLOGICALSURFACE::SetShape(a3, a1, 0LL);
      SFMLOGICALSURFACE::SetShape(v13, a1, (struct _SURFOBJ *)(v18 + 24));
      *((_DWORD *)v13 + 63) |= 8u;
      DEC_SHARE_REF_CNT(v18);
    }
    *a5 = v13;
    goto LABEL_27;
  }
LABEL_28:
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v34);
  return v10;
}
