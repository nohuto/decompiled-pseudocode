/*
 * XREFs of GreSetHwndPresentFlags @ 0x140321F68
 * Callers:
 *     NtUserHwndSetRedirectionInfo @ 0x140298780 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CEB38 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401767D0 (--0DWMALTSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0?$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140196DC0 (--0-$SEMOBJSHARED@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall GreSetHwndPresentFlags(Gre::Base *a1, int a2)
{
  unsigned int v4; // esi
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  Gre::Base *v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    v6 = Gre::Base::Globals(v5);
    SEMOBJSHARED<7>::SEMOBJSHARED<7>((HSEMAPHORE *)&v11, v6);
    if ( IsDwmActive(v7) )
    {
      DWMALTSPRITEREF::DWMALTSPRITEREF((DWMALTSPRITEREF *)&v10, (HWND)a1, 0LL);
      v8 = v10;
      if ( v10 )
      {
        if ( v10 != -88 )
          GreAcquirePushLockShared((struct W32_PUSH_LOCK *)(v10 + 88));
        v4 = 0;
        *(_DWORD *)(*(_QWORD *)(v8 + 144) + 212LL) = a2;
        if ( v8 != -88 )
          GreReleasePushLockShared((struct W32_PUSH_LOCK *)(v8 + 88));
      }
      else
      {
        v4 = -1073741811;
      }
      if ( v8 )
        DEC_SHARE_REF_CNT(v8);
    }
    GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v11);
  }
  return v4;
}
