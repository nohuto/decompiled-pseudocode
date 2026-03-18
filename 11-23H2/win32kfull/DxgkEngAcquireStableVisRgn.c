/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x1C01596E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  int v2; // esi
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  __int64 v5; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  UserEnterUserCritSecShared();
  v4 = Gre::Base::Globals(v3);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v4 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v4 + 10));
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    if ( (v2 = 1, v9 = *(_QWORD *)(v7[0] + 48LL), (**(_DWORD **)(v7[0] + 976LL) & 1) == 0)
      && (*(_DWORD *)(v7[0] + 36LL) & 0x8200) != 0x8200
      || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) )
    {
      v2 = 0;
    }
  }
  v5 = *((_QWORD *)v4 + 15);
  if ( v2 )
  {
    GreAcquireSemaphoreSharedInternal(v5);
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v4 + 15));
  }
  else
  {
    GreAcquireSemaphore(v5);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v4 + 15), 2LL);
  }
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v4 + 11));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v4 + 11));
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
}
