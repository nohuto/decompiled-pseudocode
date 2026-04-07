/*
 * XREFs of ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0
 * Callers:
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180008370 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x18000C390 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18000E020 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18000F708 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x180012E64 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x180086150 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800945D0 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x180094F50 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x180095DC0 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C6F40 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CA06C (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800CA440 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800CA5F4 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800CAA40 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?SetSize@CSpriteVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x1800D1090 (-SetSize@CSpriteVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x1800EB800 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetSize(CVisual *this, const struct tagSIZE *a2)
{
  bool v3; // zf

  if ( *((_DWORD *)this + 18) != a2->cx || *((_DWORD *)this + 19) != a2->cy )
  {
    v3 = (*((_BYTE *)this + 36) & 1) == 0;
    *((struct tagSIZE *)this + 9) = *a2;
    if ( !v3 )
      (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
  }
}
