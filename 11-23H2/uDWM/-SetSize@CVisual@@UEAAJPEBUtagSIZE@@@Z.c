/*
 * XREFs of ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800354E0
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x1800349B4 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800547C4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180054970 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18006C4B0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800B2710 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800BFB90 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800C4A0C (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C50A0 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800CCC60 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CCFF4 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800CD3C0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800CD598 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800CDA00 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z @ 0x180104550 (-SetBitmap@UserResizeVisual@implementation@Transitions@Udwm@winrt@@UEAAXPEAVCBitmapSource@@@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180106A30 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetSize(CVisual *this, const struct tagSIZE *a2)
{
  bool v3; // zf

  if ( *((_DWORD *)this + 32) != a2->cx || *((_DWORD *)this + 33) != a2->cy )
  {
    v3 = (*((_BYTE *)this + 92) & 1) == 0;
    *((struct tagSIZE *)this + 16) = *a2;
    if ( !v3 )
      (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
  }
  return 0LL;
}
