/*
 * XREFs of GreNotifyDirtySprite @ 0x140039920
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002569C (--$GreAcquireSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x140039A0C (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400CFA78 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400CFA94 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 */

__int64 __fastcall GreNotifyDirtySprite(Gre::Base *a1)
{
  __int64 result; // rax
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  Gre::Base *v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  struct SFMLOGICALSURFACE *v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  result = IsDwmActive(a1);
  if ( (_DWORD)result )
  {
    v4 = Gre::Base::Globals(v3);
    GreAcquireSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedInternal,
      *(_QWORD *)v4 + 520LL);
    if ( IsDwmActive(v5) )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v9, (HWND)a1);
      v6 = v9;
      if ( v9 )
      {
        if ( v9 != -88 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v9 + 88));
        v7 = SFMLOGICALSURFACE::uiCookie(*(SFMLOGICALSURFACE **)(v6 + 144));
        bSpDwmNotifyDirty(*(HSPRITE *)v6, v8, 1u, v7);
        if ( v6 != -88 )
          GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v6 + 88));
        if ( v6 )
          DEC_SHARE_REF_CNT(v6);
      }
    }
    return GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal);
  }
  return result;
}
