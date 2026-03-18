/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1400766D4
 * Callers:
 *     DxgkFlipOverlay @ 0x1401E3F00 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1401E4400 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1401E49A0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this, unsigned __int64 a2)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8), a2);
}
