/*
 * XREFs of ??1?$SEMOBJEXORSHARED@$06@@QEAA@XZ @ 0x140062D4C
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
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall SEMOBJEXORSHARED<7>::~SEMOBJEXORSHARED<7>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  HSEMAPHORE v2; // rdx
  struct _GRETHREAD *v3; // rax
  bool v4; // zf
  struct _GRETHREAD *v5; // rax

  v1 = *(HSEMAPHORE *)a1;
  v2 = *(HSEMAPHORE *)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    EtwTraceGreLockReleaseSemaphore(L"DwmState", v2);
    v3 = GreGetCurrentThreadCrossSessionCheck();
    if ( v3 )
    {
      v4 = (*((_BYTE *)v3 + 15))-- == 1;
      if ( v4 )
        *(_QWORD *)v3 &= ~0x80uLL;
      if ( !*(_QWORD *)v3 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreSharedInternal(v1);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"DwmState", v2);
    v5 = GreGetCurrentThreadCrossSessionCheck();
    if ( v5 )
    {
      v4 = (*((_BYTE *)v5 + 15))-- == 1;
      if ( v4 )
        *(_QWORD *)v5 &= ~0x80uLL;
      if ( !*(_QWORD *)v5 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v1);
  }
}
