/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x140077114
 * Callers:
 *     DxgkFlipOverlay @ 0x1401E9130 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1401E9630 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1401E9BD0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this, unsigned __int64 a2)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8), a2);
}
