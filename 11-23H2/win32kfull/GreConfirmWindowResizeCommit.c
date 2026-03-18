/*
 * XREFs of GreConfirmWindowResizeCommit @ 0x1C0266BF8
 * Callers:
 *     NtUserConfirmResizeCommit @ 0x1C01CD5F0 (NtUserConfirmResizeCommit.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0026D20 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreConfirmWindowResizeCommit(Gre::Base *a1)
{
  unsigned int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  Gre::Base *v4; // rcx
  Gre::Base *v5; // rcx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  v9 = *((_QWORD *)v3 + 15);
  GreAcquireSemaphore(v9);
  if ( IsDwmActive(v4) )
  {
    GreAcquireSemaphore(*((_QWORD *)v3 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v3 + 9), 7LL);
    if ( IsDwmActive(v5) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v7, (HWND)a1);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 124) = 0;
        v2 = 1;
        if ( v8 )
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      }
      v8 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v7);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v2;
}
