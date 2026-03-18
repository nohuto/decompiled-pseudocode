/*
 * XREFs of ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00AA9F0
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
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C02651C0 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02657B0 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C0266CF8 (GreDeleteSpriteDelayDelete.c)
 *     GreProtectSpriteContent @ 0x1C02675D8 (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0267BC4 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0267E20 (GreWindowResizeStarted.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

DWMSPRITELOCK *__fastcall DWMSPRITELOCK::DWMSPRITELOCK(DWMSPRITELOCK *this, struct PDEVOBJ *a2, int a3, int a4)
{
  __int64 ThreadWin32Thread; // rax
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx

  *(_DWORD *)this = 0;
  if ( !a3 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || a4 == 1 || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      v8 = Gre::Base::Globals(v7);
      GreAcquireSemaphore(*((_QWORD *)v8 + 14));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v8 + 14), 5LL);
      *(_DWORD *)this = 1;
    }
  }
  return this;
}
