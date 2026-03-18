/*
 * XREFs of GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00922A4
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00C42D0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1C0092394 (-SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00B4A08 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C5CF0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmRegisterLogicalSurfaceForSignaling(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  unsigned int v5; // ebx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  SFMLOGICALSURFACE *v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+48h] [rbp-10h]

  v4 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v4 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v7);
    v8 = 0LL;
    v9 = 0;
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v7, (HLSURF)a1);
    if ( v8 )
      v5 = SFMLOGICALSURFACE::SignalOnDirty(v8, a2);
    else
      v5 = -1073741816;
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v7);
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
  return v5;
}
