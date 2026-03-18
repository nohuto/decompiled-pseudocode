/*
 * XREFs of GreWindowLayoutComplete @ 0x1C0023E5C
 * Callers:
 *     NtUserLayoutCompleted @ 0x1C0023CA0 (NtUserLayoutCompleted.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0026D20 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0264EC4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowLayoutComplete(Gre::Base *a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v4; // edi
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  volatile signed __int32 *v8; // rcx
  int v9; // eax
  _BYTE v11[32]; // [rsp+20h] [rbp-48h] BYREF
  struct DWMSPRITE *v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v13 = a2;
  v4 = 0;
  v14 = 0;
  v7 = Gre::Base::Globals(a1);
  v13 = *((_QWORD *)v7 + 15);
  GreAcquireSemaphore(v13);
  if ( (unsigned int)IsDwmActive() )
  {
    GreAcquireSemaphore(*((_QWORD *)v7 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v7 + 9), 7LL);
    if ( (unsigned int)IsDwmActive() )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v11, (HWND)a1);
      v8 = (volatile signed __int32 *)v12;
      if ( v12 )
      {
        v4 = 1;
        if ( *((int *)v12 + 29) >= 1 )
        {
          v9 = *((_DWORD *)v12 + 30);
          if ( v9 > 0 )
          {
            *((_DWORD *)v12 + 30) = v9 - 1;
            CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v8, 0, &v14);
            v8 = (volatile signed __int32 *)v12;
          }
        }
        if ( v8 )
          _InterlockedDecrement(v8 + 3);
      }
      v12 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 9));
  }
  *a4 = v14;
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v4;
}
