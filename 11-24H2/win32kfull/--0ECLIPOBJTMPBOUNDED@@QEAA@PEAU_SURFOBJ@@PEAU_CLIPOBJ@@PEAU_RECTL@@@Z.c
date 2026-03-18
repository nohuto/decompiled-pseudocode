/*
 * XREFs of ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1402FA688
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140261C70 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x140262120 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140262710 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140262A80 (NtGdiEngTextOut.c)
 *     NtGdiEngGradientFill @ 0x140339420 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x140339840 (NtGdiEngLineTo.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033A020 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DFA4C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x140181358 (-bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1402FA8B0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

ECLIPOBJTMPBOUNDED *__fastcall ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED(
        ECLIPOBJTMPBOUNDED *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4)
{
  struct REGION **v4; // rdi
  LONG cx; // edx
  LONG v10; // ecx
  LONG cy; // r8d
  LONG v12; // eax
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  struct _RECTL v15; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v16; // [rsp+40h] [rbp-20h] BYREF

  *((_DWORD *)this + 32) = 1;
  v4 = (struct REGION **)((char *)this + 152);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 18) = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = 0;
  if ( !SURFACE::bClipEngRenderingsToSurfaceBounds((SURFACE *)&a2[-1].pvScan0) )
    goto LABEL_21;
  cx = a2->sizlBitmap.cx;
  v10 = 0x7FFFFFF;
  cy = a2->sizlBitmap.cy;
  v12 = 0x7FFFFFF;
  *(_QWORD *)&v16.left = 0LL;
  if ( cy < 0x7FFFFFF )
    v12 = cy;
  v16.bottom = v12;
  if ( cx < 0x7FFFFFF )
    v10 = cx;
  v16.right = v10;
  if ( (((cx & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 || (((cy & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v13 = Gre::Base::Globals((Gre::Base *)0x8000000);
    TraceLoggingWriteUnsupportedGdiUsage((char *)v13 + 5748, 27LL, 0LL);
  }
  if ( a3 && a3->iDComplexity )
  {
    v15 = *(struct _RECTL *)(*(_QWORD *)&a3[2].rclBounds.top + 52LL);
    if ( !ERECTL::bContain((ERECTL *)&v16, &v15) )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
      if ( *v4 )
      {
        if ( *(_QWORD *)&v15.left )
        {
          RGNOBJ::vSet((RGNOBJ *)&v15, &v16);
          if ( RGNOBJ::bMerge((RGNOBJ *)v4, (struct RGNOBJ *)&a3[2].rclBounds.top, (struct RGNOBJ *)&v15, 8u) )
          {
            XCLIPOBJ::vSetup(this, *v4, (const struct ERECTL *)&v16, 1);
            *((_QWORD *)this + 20) = this;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
      return this;
    }
LABEL_21:
    *((_QWORD *)this + 20) = a3;
    *((_BYTE *)this + 168) = 1;
    return this;
  }
  if ( *v4 )
  {
    if ( a4 )
      ERECTL::operator*=(&v16.left, &a4->left);
    RGNOBJ::vSet((RGNOBJ *)v4, &v16);
    XCLIPOBJ::vSetup(this, *v4, (const struct ERECTL *)&v16, 1);
    *((_QWORD *)this + 20) = this;
  }
  return this;
}
