/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x140062CF0
 * Callers:
 *     GrePtInSprite @ 0x1400226B0 (GrePtInSprite.c)
 *     GreZorderSprite @ 0x140025478 (GreZorderSprite.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400258BC (GreDwmNotifySpriteMonitorChange.c)
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     GreDwmGetSurfaceData @ 0x14002A1E4 (GreDwmGetSurfaceData.c)
 *     vCleanupUMWindowlessSprite @ 0x14002A590 (vCleanupUMWindowlessSprite.c)
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14003040C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreGetSpriteAttributes @ 0x140038AC4 (GreGetSpriteAttributes.c)
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GreUpdateSpriteClipRgn @ 0x1400914A8 (GreUpdateSpriteClipRgn.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBC4C (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     GreDwmHasSoftwareCursor @ 0x140132AEC (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x140132BD0 (GreDwmEnableSoftwareCursorRendering.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1401348A0 (DwmDestroyDeviceSpecificResources.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401987B0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     GreWindowResizeComplete @ 0x1401DA938 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401DAAE0 (GreWindowResizeStarted.c)
 *     GreGetSprite @ 0x1401F89EC (GreGetSprite.c)
 * Callees:
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x140020C00 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 */

void __fastcall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  __int64 v1; // rbx

  if ( *(_DWORD *)this )
  {
    v1 = *(_QWORD *)Gre::Base::Globals(this);
    EtwTraceGreLockReleaseSemaphore(L"Sprite", v1 + 1040);
    GrepReleaseLockValidate<6>();
    GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)(v1 + 1040));
  }
}
