/*
 * XREFs of ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C
 * Callers:
 *     GreGetSprite @ 0x1C0013DD0 (GreGetSprite.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C001DBF0 (DwmDestroyDeviceSpecificResources.c)
 *     GreDwmHasSoftwareCursor @ 0x1C002012C (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x1C0020218 (GreDwmEnableSoftwareCursorRendering.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0020B48 (GreUpdateSpriteVisRgn.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0023A1C (GreUpdateSpriteClipRgn.c)
 *     GreGetSpriteAttributes @ 0x1C00261DC (GreGetSpriteAttributes.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0026874 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00AB6EC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreHintSpriteShape @ 0x1C00B356C (GreHintSpriteShape.c)
 *     vCleanupUMWindowlessSprite @ 0x1C00B3D90 (vCleanupUMWindowlessSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C00C3F38 (GreDwmGetSurfaceData.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C02651C0 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02657B0 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0266CF8 (GreDeleteSpriteDelayDelete.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0266EE4 (GreDwmGetRedirectionStyle.c)
 *     GreProtectSpriteContent @ 0x1C02675D8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0267BC4 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0267E20 (GreWindowResizeStarted.c)
 *     GreSetLWContentOwner @ 0x1C02D4A44 (GreSetLWContentOwner.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITELOCK::~DWMSPRITELOCK(DWMSPRITELOCK *this)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx

  if ( *(_DWORD *)this )
  {
    v1 = Gre::Base::Globals(this);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 14));
  }
}
