/*
 * XREFs of GreDwmNotifySpriteMonitorChange @ 0x1C00B3334
 * Callers:
 *     UpdateWindowMonitor @ 0x1C00B0F70 (UpdateWindowMonitor.c)
 *     UpdateWindowSpriteMonitor @ 0x1C00B32C0 (UpdateWindowSpriteMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BB7B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00B4110 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     DwmAsyncNotifySpriteMonitorChange @ 0x1C00B41C8 (DwmAsyncNotifySpriteMonitorChange.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmNotifySpriteMonitorChange(Gre::Base *a1, HWND a2, HSPRITE a3)
{
  unsigned int v5; // r15d
  struct Gre::Base::SESSION_GLOBALS *v6; // rbp
  __int64 v7; // rbx
  int v8; // edi
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v10; // rcx
  __int64 v11; // rax
  struct Gre::Base::SESSION_GLOBALS *v12; // rdi
  __int64 v13; // rdx
  Gre::Base *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // rax
  Gre::Base *v19; // rcx
  struct Gre::Base::SESSION_GLOBALS *v20; // rdi
  _BYTE v22[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h]

  v5 = 0;
  v6 = Gre::Base::Globals(a1);
  v7 = *((_QWORD *)v6 + 15);
  GreAcquireSemaphore(v7);
  v8 = 0;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || (v11 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v11 + 104) && !*(_DWORD *)(v11 + 108) )
  {
    v12 = Gre::Base::Globals(v10);
    GreAcquireSemaphore(*((_QWORD *)v12 + 14));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v12 + 14), 5LL);
    v8 = 1;
  }
  GreAcquireSemaphore(*((_QWORD *)v6 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v6 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v22);
    v16 = 0LL;
    v23 = 0LL;
    if ( a2 )
    {
      a3 = DWMSPRITEREF::hspLookupWindow(a2);
      v16 = v23;
    }
    if ( a3 )
    {
      Gre::Base::Globals(v14);
      LOBYTE(v17) = 15;
      v16 = HmgLock(a3, v17);
      v23 = v16;
    }
    if ( v16 )
    {
      v18 = (void *)UserReferenceDwmApiPort(v14, v13, v15);
      v5 = DwmAsyncNotifySpriteMonitorChange(v18);
      if ( v23 )
        _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
    }
    v23 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v22);
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v6 + 9));
  if ( v8 )
  {
    v20 = Gre::Base::Globals(v19);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v20 + 14));
  }
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v7);
  }
  return v5;
}
