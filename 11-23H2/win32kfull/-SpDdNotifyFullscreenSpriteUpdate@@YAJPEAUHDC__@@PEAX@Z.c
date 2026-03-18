/*
 * XREFs of ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02658F8
 * Callers:
 *     NtGdiDdNotifyFullscreenSpriteUpdate @ 0x1C026F960 (NtGdiDdNotifyFullscreenSpriteUpdate.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00209B4 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0026CC4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     DwmAsyncDirtySprite @ 0x1C0027344 (DwmAsyncDirtySprite.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C009CF2C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z @ 0x1C009FD98 (-bShouldUseSfmTokenArray@@YAEU_LOGSURF_FLAGS@@@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00BA500 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall SpDdNotifyFullscreenSpriteUpdate(HDC a1, HSPRITE a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // r14
  Gre::Base *v6; // rcx
  BOOL v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct DWMSPRITE *v10; // rbx
  __int64 v11; // rdi
  char ShouldUseSfmTokenArray; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  UINT_PTR v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rbx
  void *v20; // rax
  __int64 v21; // r8
  unsigned int v22; // edi
  _BYTE v23[32]; // [rsp+30h] [rbp-19h] BYREF
  struct DWMSPRITE *v24; // [rsp+50h] [rbp+7h]
  _QWORD v25[2]; // [rsp+58h] [rbp+Fh] BYREF
  _BYTE v26[56]; // [rsp+68h] [rbp+1Fh] BYREF
  unsigned int v27; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( !v25[0] )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v25);
    return 3221225485LL;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
  v5 = Gre::Base::Globals(v4);
  v28 = *((_QWORD *)v5 + 15);
  GreAcquireSemaphore(v28);
  GreAcquireSemaphore(*((_QWORD *)v5 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v23, 0LL, a2);
  v7 = IsDwmActive(v6);
  v10 = v24;
  if ( v7 && v24 )
  {
    v11 = *((_QWORD *)v24 + 18);
    LOBYTE(v8) = 1;
    vSpDwmUpdateSpriteVisibility(v24, v8, v9);
    v27 = 0;
    vSpUpdateDirtyRgn(v10, (struct SFMLOGICALSURFACE *)v11, 0LL, (const struct _RECTL *)((char *)v10 + 56), &v27, 0);
    if ( v27 )
    {
      ShouldUseSfmTokenArray = bShouldUseSfmTokenArray(*(_DWORD *)(v11 + 252));
      v15 = *(_QWORD *)(v11 + 184);
      if ( ShouldUseSfmTokenArray )
      {
        if ( v15 )
          v16 = *(_QWORD *)(v15 + 8);
        else
          v16 = 0LL;
        v17 = GreAddLogicalSurfaceToDirtyQueue(*(Gre::Base **)v11, v27, v16);
      }
      else
      {
        if ( v15 )
          v18 = *(_QWORD *)(v15 + 8);
        else
          v18 = 0LL;
        v19 = *(_QWORD *)v10;
        v20 = (void *)UserReferenceDwmApiPort(v15, v13, v14);
        v17 = DwmAsyncDirtySprite(v20, v19, v21, v27, v18);
      }
      v22 = v17;
    }
    else
    {
      v22 = 0;
    }
    if ( !v24 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v22 = -1073741816;
  if ( v24 )
LABEL_20:
    _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
LABEL_21:
  v24 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v23);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
  SEMOBJ::vUnlock((SEMOBJ *)&v28);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
  if ( v25[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v25);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v26);
  return v22;
}
