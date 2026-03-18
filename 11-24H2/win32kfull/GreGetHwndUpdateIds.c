/*
 * XREFs of GreGetHwndUpdateIds @ 0x140321B48
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x14015E100 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1400CF068 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x14015EBF0 (-uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401767D0 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140196DC0 (--0-$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreGetHwndUpdateIds(Gre::Base *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  Gre::Base *v7; // rcx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  Gre::Base *v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  SFMLOGICALSURFACE *v13; // rsi
  char v14; // al
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    v8 = Gre::Base::Globals(v7);
    SEMOBJSHARED<7>::SEMOBJSHARED<7>((HSEMAPHORE *)&v17, v8);
    if ( IsDwmActive(v9) )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v18, (HWND)a1, 0LL);
      v12 = v18;
      if ( v18 )
      {
        v13 = *(SFMLOGICALSURFACE **)(v18 + 144);
        if ( v18 != -88 )
          GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v18 + 88));
        if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v11, v10) + 96) + 92LL)
          && *((_QWORD *)v13 + 23)
          && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v13) )
        {
          v14 = SFMLOGICALSURFACE::uiDxPresentFlags(v13);
          v15 = *(unsigned int *)(*((_QWORD *)v13 + 23) + 68LL);
          if ( (v14 & 2) != 0 )
            v15 |= 0x8000000000000000uLL;
          *a2 = v15;
          v6 = 0;
          *a3 = *((_QWORD *)v13 + 35);
        }
        if ( v12 != -88 )
          GreReleasePushLockShared((struct W32_PUSH_LOCK *)(v12 + 88));
      }
      else
      {
        v6 = -1073741811;
      }
      if ( v12 )
        DEC_SHARE_REF_CNT(v12);
    }
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v17);
  }
  return v6;
}
