/*
 * XREFs of ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02657B0
 * Callers:
 *     NtGdiDdDestroyFullscreenSprite @ 0x1C026F940 (NtGdiDdDestroyFullscreenSprite.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C00267F8 (GreDeleteSprite.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00AA9F0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall SpDdDestroyFullscreenSprite(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  Gre::Base *v6; // r14
  struct PDEVOBJ *v7; // rdx
  Gre::Base *v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+90h] [rbp+40h] BYREF
  __int64 v13; // [rsp+98h] [rbp+48h] BYREF

  v3 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    v5 = Gre::Base::Globals(v4);
    v13 = *((_QWORD *)v5 + 15);
    GreAcquireSemaphore(v13);
    v6 = *(Gre::Base **)(v10[0] + 48LL);
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v12, v7, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v5 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
    if ( IsDwmActive(v8) && (unsigned int)GreDeleteSprite(v6, 0LL, a2, 1) )
      v3 = 0;
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v12);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    if ( v10[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v10);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v11);
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v10);
  }
  return v3;
}
