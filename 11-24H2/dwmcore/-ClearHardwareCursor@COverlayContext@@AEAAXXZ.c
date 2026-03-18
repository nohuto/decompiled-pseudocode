/*
 * XREFs of ?ClearHardwareCursor@COverlayContext@@AEAAXXZ @ 0x180269FC4
 * Callers:
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x180188FFC (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18018A29C (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@@Z @ 0x18026CF64 (-SetHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?RemoveMonitorData@CCursorVisual@@QEAAXU_LUID@@I@Z @ 0x18026C7A4 (-RemoveMonitorData@CCursorVisual@@QEAAXU_LUID@@I@Z.c)
 */

void __fastcall COverlayContext::ClearHardwareCursor(COverlayContext *this)
{
  CCursorVisual *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  CCachedVisualImage *v5; // rcx

  v2 = (CCursorVisual *)*((_QWORD *)this + 2403);
  if ( v2 )
  {
    CCursorVisual::RemoveMonitorData(v2, *(struct _LUID *)((char *)this + 19232), *((_DWORD *)this + 4810));
    v5 = (CCachedVisualImage *)*((_QWORD *)this + 2403);
    *((_QWORD *)this + 2403) = 0LL;
    if ( v5 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v5, v3, v4);
  }
  *((_DWORD *)this + 4810) = -1;
  *((_QWORD *)this + 2404) = 0LL;
}
