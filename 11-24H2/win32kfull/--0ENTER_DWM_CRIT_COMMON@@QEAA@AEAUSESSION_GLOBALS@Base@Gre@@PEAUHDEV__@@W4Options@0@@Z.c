/*
 * XREFs of ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24
 * Callers:
 *     GreDwmGetSurfaceData @ 0x14002A1E4 (GreDwmGetSurfaceData.c)
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 *     GreGetSpriteAttributes @ 0x140038AC4 (GreGetSpriteAttributes.c)
 *     GreUpdateSpriteClipRgn @ 0x1400914A8 (GreUpdateSpriteClipRgn.c)
 *     GreDwmHasSoftwareCursor @ 0x140132AEC (GreDwmHasSoftwareCursor.c)
 *     GreDwmEnableSoftwareCursorRendering @ 0x140132BD0 (GreDwmEnableSoftwareCursorRendering.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1401348A0 (DwmDestroyDeviceSpecificResources.c)
 *     GreWindowResizeComplete @ 0x1401DA938 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401DAAE0 (GreWindowResizeStarted.c)
 *     GreGetSprite @ 0x1401F89EC (GreGetSprite.c)
 *     GreProtectSpriteContent @ 0x14022472C (GreProtectSpriteContent.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403211FC (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreDeleteSpriteDelayDelete @ 0x140321830 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$05@@YAXXZ @ 0x140023FC8 (--$GrepAcquireLockValidate@$05@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x140060C4C (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  char v4; // bl
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v9; // rcx
  Gre::Base *v10; // rcx
  __int64 v11; // rbx
  HSEMAPHORE v12; // rcx

  *(_QWORD *)a1 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a4 & 4;
  if ( (a4 & 1) == 0 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
    v9 = CurrentThreadNonPaged ? *CurrentThreadNonPaged : 0LL;
    v10 = (Gre::Base *)((v9 + 8) & -(__int64)(v9 != 0));
    if ( !v10 || v4 || !*((_DWORD *)v10 + 87) && !*((_DWORD *)v10 + 88) )
    {
      v11 = *(_QWORD *)Gre::Base::Globals(v10);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"Sprite", v11 + 1040, 0LL);
      GreAcquireSemaphoreInternal((HSEMAPHORE)(v11 + 1040));
      GrepAcquireLockValidate<6>();
      *(_DWORD *)(a1 + 8) = 1;
    }
  }
  v12 = (HSEMAPHORE)(*a2 + 520LL);
  *(_QWORD *)(a1 + 16) = v12;
  *(_BYTE *)(a1 + 24) = (a4 & 2) != 0;
  if ( (a4 & 2) != 0 )
    GreAcquireSemaphoreSharedInternal(v12);
  else
    GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<7>();
  return a1;
}
