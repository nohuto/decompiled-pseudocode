/*
 * XREFs of GreIsWindowResizeInProgress @ 0x1C0159110
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F0D1C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0026D20 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

_BOOL8 __fastcall GreIsWindowResizeInProgress(Gre::Base *a1, __int64 a2)
{
  BOOL v3; // ebx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  Gre::Base *v5; // rcx
  Gre::Base *v6; // rcx
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  v3 = 0;
  v4 = Gre::Base::Globals(a1);
  v10 = *((_QWORD *)v4 + 15);
  GreAcquireSemaphore(v10);
  if ( IsDwmActive(v5) )
  {
    GreAcquireSemaphore(*((_QWORD *)v4 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
    if ( IsDwmActive(v6) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v8, (HWND)a1);
      if ( v9 )
      {
        v3 = 1;
        if ( *(int *)(v9 + 116) < 1 )
          v3 = *(_DWORD *)(v9 + 124) != 0;
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
      }
      v9 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v3;
}
