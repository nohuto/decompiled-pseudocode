/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0026874
 * Callers:
 *     GreDeleteSprite @ 0x1C00267F8 (GreDeleteSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C013371C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0134CC8 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0026CC4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     DwmAsyncDestroySprite @ 0x1C0026DAC (DwmAsyncDestroySprite.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C006B514 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C006CA94 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00AA9F0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C486C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C00C4B58 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(Gre::Base *a1, HWND a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  int v6; // esi
  HWND v8; // rdi
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  struct PDEVOBJ *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DWMSPRITE *v15; // rsi
  __int64 v16; // rdi
  void *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rbx
  unsigned int v20; // ebp
  __int64 v21; // rax
  struct DWMSPRITE *v22; // r8
  _BYTE v24[8]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v25[32]; // [rsp+28h] [rbp-60h] BYREF
  struct DWMSPRITE *v26; // [rsp+48h] [rbp-40h]

  v4 = 1;
  v6 = 1;
  v8 = a2;
  v10 = Gre::Base::Globals(a1);
  if ( !a4 || !(unsigned int)IsDwmActive() )
    return (unsigned int)GdiDeleteSprite((HDEV)a1, v8, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v24, v11, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v10 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v25, v8, a3);
    v15 = v26;
    if ( v26 )
    {
      v16 = *((_QWORD *)v26 + 18);
      v17 = (void *)UserReferenceDwmApiPort(v13, v12, v14);
      v18 = DwmAsyncDestroySprite(v17);
      v19 = *(_QWORD *)(v16 + 184);
      v20 = v18;
      if ( !v19 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v19 - 24)) )
        goto LABEL_11;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v19 + 248));
      if ( *(_DWORD *)(v19 + 300) && (*(_DWORD *)(v19 + 92) & 2) == 0 )
      {
        *((_DWORD *)v15 + 35) |= 0x10u;
        vspRemoveStateReferencesForSprite(v15);
        *(_QWORD *)(v19 + 480) = 0LL;
        *(_QWORD *)(v19 + 472) = a1;
        v21 = *(_QWORD *)v15;
        *(_DWORD *)(v19 + 92) |= 2u;
        *(_DWORD *)(v19 + 496) = 1;
        v4 = 0;
        *(_QWORD *)(v19 + 488) = v21;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v19 + 248));
      if ( v4 )
      {
LABEL_11:
        *((_DWORD *)v15 + 16) = *((_DWORD *)v15 + 14);
        *((_DWORD *)v15 + 17) = *((_DWORD *)v15 + 15);
        v22 = v26;
        if ( v26 )
          _InterlockedDecrement((volatile signed __int32 *)v26 + 3);
        v26 = 0LL;
        vspDestroyDwmSpriteObjInternal((HDEV)a1, 0, v22);
      }
      v15 = v26;
      v8 = a2;
    }
    else
    {
      v20 = -2143354870;
    }
    if ( v15 )
      _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
    v26 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
    v6 = 0;
  }
  else
  {
    v20 = -1071775733;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v24);
  if ( v6 )
    return (unsigned int)GdiDeleteSprite((HDEV)a1, v8, a3);
  return v20;
}
