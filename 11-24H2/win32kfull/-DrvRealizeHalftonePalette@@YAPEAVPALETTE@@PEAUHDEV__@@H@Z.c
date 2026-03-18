/*
 * XREFs of ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1403228B4
 * Callers:
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x140050610 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140051290 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140051F70 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x140052700 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400531D0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140053DDC (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x140054C64 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1401DE1F0 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     DrvRealizeHalftonePaletteWrap @ 0x140322CF0 (DrvRealizeHalftonePaletteWrap.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140180CA0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401BACBC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     GreCreateCompatibleHalftonePalette @ 0x1401E1408 (GreCreateCompatibleHalftonePalette.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140208834 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreRealizePalette @ 0x140266580 (GreRealizePalette.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct PALETTE *__fastcall DrvRealizeHalftonePalette(Gre::Base *a1, int a2)
{
  int v4; // ebp
  struct Gre::Base::SESSION_GLOBALS *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rcx
  HDC DisplayDC; // rdi
  HPALETTE CompatibleHalftonePalette; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdi
  HSEMAPHORE v13; // rbx
  struct _GRETHREAD *v14; // rax
  __int64 v17; // [rsp+20h] [rbp-98h] BYREF
  HSEMAPHORE v18; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v19[96]; // [rsp+30h] [rbp-88h] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals(a1);
  SEMOBJ<10>::SEMOBJ<10>(&v18, v5);
  v6 = *((_QWORD *)a1 + 225);
  if ( !a2 && v6 )
    goto LABEL_13;
  ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v19);
  DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL, 0LL);
  if ( DisplayDC )
  {
    if ( !v6 )
    {
      CompatibleHalftonePalette = (HPALETTE)GreCreateCompatibleHalftonePalette(v7, 10);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v17, CompatibleHalftonePalette);
      if ( v17 )
        *((_QWORD *)a1 + 225) = v17;
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v17);
    }
    v10 = (_QWORD *)*((_QWORD *)a1 + 225);
    if ( v10 )
    {
      v11 = GreSelectPalette(DisplayDC, *v10, 1LL);
      if ( v11 )
      {
        v17 = *((_QWORD *)a1 + 225);
        XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v17);
        GreRealizePalette(DisplayDC);
        GreSelectPalette(DisplayDC, v11, 0LL);
        v4 = 1;
      }
    }
    GrepDeleteDC(DisplayDC, 0x400000LL);
  }
  ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v19);
  if ( v4 )
LABEL_13:
    v12 = *((_QWORD *)a1 + 225);
  else
    v12 = *((_QWORD *)v5 + 471);
  v13 = v18;
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore(L"HT", v18);
    v14 = GreGetCurrentThreadCrossSessionCheck();
    if ( v14 )
    {
      if ( (*((_BYTE *)v14 + 18))-- == 1 )
        *(_QWORD *)v14 &= ~0x400uLL;
      if ( !*(_QWORD *)v14 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v13);
  }
  return (struct PALETTE *)v12;
}
