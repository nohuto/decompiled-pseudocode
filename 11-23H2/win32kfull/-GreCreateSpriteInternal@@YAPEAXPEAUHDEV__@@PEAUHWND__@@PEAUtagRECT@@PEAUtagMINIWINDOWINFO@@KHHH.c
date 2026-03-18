/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00AB6EC
 * Callers:
 *     GreCreateSprite @ 0x1C00AB61C (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C013371C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0026D64 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C006B6A0 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0084548 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C00AA4A0 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C00AA528 (DwmAsyncCreateSprite.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00AA9F0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     DwmAsyncZorderSprite @ 0x1C00B4428 (DwmAsyncZorderSprite.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00B4A3C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C486C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C5F3C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0135338 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

struct SPRITE *__fastcall GreCreateSpriteInternal(
        Gre::Base *a1,
        HWND a2,
        struct _RECTL *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  HWND v13; // rdi
  Gre::Base *v14; // rbx
  Gre::Base *v15; // r14
  struct Gre::Base::SESSION_GLOBALS *v16; // r15
  struct PDEVOBJ *v17; // rdx
  unsigned __int64 v18; // rdx
  HSPRITE DwmSpriteObj; // rbx
  DWMSPRITE *v20; // rdi
  __int64 *v21; // rbx
  unsigned __int16 *v22; // rdx
  __int64 v23; // r8
  HSPRITE NeighborSprite; // r13
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // ebx
  void *v29; // rax
  Gre::Base *v30; // rbx
  Gre::Base *v31; // rcx
  struct Gre::Base::SESSION_GLOBALS *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  void *v36; // rax
  struct DWMSPRITE *v38; // r8
  int v39; // [rsp+20h] [rbp-E0h]
  int v40; // [rsp+40h] [rbp-C0h]
  _BYTE v41[4]; // [rsp+44h] [rbp-BCh] BYREF
  HDEV v42; // [rsp+48h] [rbp-B8h]
  HWND v43; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v44; // [rsp+58h] [rbp-A8h] BYREF
  Gre::Base *v45; // [rsp+60h] [rbp-A0h]
  _BYTE v46[32]; // [rsp+68h] [rbp-98h] BYREF
  DWMSPRITE *v47; // [rsp+88h] [rbp-78h]
  _BYTE v48[32]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-50h]
  _BYTE v50[144]; // [rsp+C0h] [rbp-40h] BYREF

  v44 = a11;
  v13 = a2;
  v43 = a2;
  v14 = a1;
  v42 = (HDEV)a1;
  v15 = 0LL;
  v40 = 1;
  v16 = Gre::Base::Globals(a1);
  if ( !a6 || !(unsigned int)IsDwmActive() )
    return GdiCreateSprite(v14, v13, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v41, v17, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v16 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v16 + 9), 7LL);
  if ( !(unsigned int)IsDwmActive() )
    goto LABEL_26;
  memset_0(v50, 0, 0x88uLL);
  v40 = 0;
  if ( a4 )
    v18 = *((_QWORD *)a4 + 6);
  else
    v18 = gdwRitInputDesktopId;
  DwmSpriteObj = hspCreateDwmSpriteObj(v13, v18, (HDEV)v14, a8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v46);
  v47 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v46, DwmSpriteObj);
  v20 = v47;
  if ( v47 )
  {
    *((_DWORD *)v47 + 29) = 0;
    v21 = (__int64 *)*((_QWORD *)v20 + 18);
    if ( a3 )
      *(struct _RECTL *)((char *)v20 + 56) = *a3;
    v22 = v44;
    *((_DWORD *)v20 + 35) = (2 * (a8 & 1)) | *((_DWORD *)v20 + 35) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v21 + 63) = (*((_DWORD *)v21 + 63) ^ (4 * a9)) & 4 ^ (*((_DWORD *)v21 + 63) & 0xFFFFFFEF | (16 * (a8 & 1)));
    *((_DWORD *)v20 + 35) ^= (*((_DWORD *)v20 + 35) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v20, v22);
    v45 = *(Gre::Base **)v20;
    NeighborSprite = (HSPRITE)hspGetNeighborSprite(v45, 0, 1);
    if ( !v43 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v50, (char *)v20 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v50;
    }
    if ( (*((_DWORD *)v21 + 63) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
      v25 = *v21;
      v21[10] = (__int64)v44;
      EtwTraceLifetimeAccum(v25, 1LL);
    }
    v26 = *((_DWORD *)v20 + 35) & 1;
    v27 = *((_DWORD *)v21 + 63) & 1;
    v28 = v26 | *((_DWORD *)v21 + 63) & 0xC | (2
                                             * (*((_DWORD *)v21 + 63) & 1 | *((_DWORD *)v20 + 35) & 0x40 | (4 * (*((_DWORD *)v20 + 35) & 0xE))));
    v29 = (void *)UserReferenceDwmApiPort(v26, v27, v23);
    v39 = v28;
    v30 = v45;
    if ( (int)DwmAsyncCreateSprite(v29, (__int64)v45, (__int64)v43, (__int128 *)&a3->left, v39, (__int128 *)a4, a5) < 0 )
    {
      v38 = v47;
      if ( v47 )
        _InterlockedDecrement((volatile signed __int32 *)v47 + 3);
      v14 = (Gre::Base *)v42;
      v47 = 0LL;
      vspDestroyDwmSpriteObjInternal(v42, 0, v38);
      v20 = v47;
      goto LABEL_23;
    }
    v32 = Gre::Base::Globals(v31);
    if ( NeighborSprite && *(_QWORD *)(*((_QWORD *)v32 + 38) + 144LL) )
    {
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v48);
      v49 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v48, NeighborSprite);
      v36 = (void *)UserReferenceDwmApiPort(v34, v33, v35);
      DwmAsyncZorderSprite(v36);
      if ( v49 )
        _InterlockedDecrement((volatile signed __int32 *)(v49 + 12));
      v49 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v48);
    }
    v15 = v30;
    *((_DWORD *)v20 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v20 = v47;
  }
  v14 = (Gre::Base *)v42;
LABEL_23:
  if ( v20 )
    _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
  v47 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v46);
  v13 = v43;
LABEL_26:
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v41);
  if ( v40 )
    return GdiCreateSprite(v14, v13, a3);
  return v15;
}
