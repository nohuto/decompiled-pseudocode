/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C
 * Callers:
 *     GreCreateSprite @ 0x140030280 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016B470 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401EDE40 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140023E24 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1400278E4 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x140027920 (DwmAsyncZorderSprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x140030624 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1400C7410 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x14016AE00 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x14016BBF8 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x14016C574 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1401987B0 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x14019D728 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401A17FC (-Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ.c)
 *     DwmAsyncCreateSprite @ 0x1401B807C (DwmAsyncCreateSprite.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1401B86A0 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1401C256C (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1403205F4 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

struct SPRITE *__fastcall GreCreateSpriteInternal(
        Gre::Base *a1,
        __int64 a2,
        struct _RECTL *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        struct REGION *a12)
{
  Gre::Base *v12; // r12
  HWND v15; // rdi
  int v16; // ebx
  Gre::Base *v18; // rcx
  Gre::Base *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  HSPRITE DwmSpriteObj; // rax
  __int64 v24; // r8
  DWMSPRITE *v25; // rdi
  SFMLOGICALSURFACE *v26; // rbx
  unsigned int v27; // ecx
  int v28; // r13d
  int v29; // edx
  int v30; // eax
  unsigned __int16 *v31; // rdx
  HSPRITE NeighborSprite; // r13
  __int64 v33; // rcx
  int v34; // ebx
  void *v35; // rax
  Gre::Base *v36; // rbx
  Gre::Base *v37; // rcx
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  __int64 v39; // rcx
  void *v40; // rax
  struct DWMSPRITE *v41; // rax
  int v43; // [rsp+20h] [rbp-E0h]
  struct Gre::Base::SESSION_GLOBALS *v44; // [rsp+40h] [rbp-C0h]
  struct REGION *v46; // [rsp+50h] [rbp-B0h] BYREF
  Gre::Base *v47; // [rsp+58h] [rbp-A8h]
  _OWORD v48[2]; // [rsp+60h] [rbp-A0h] BYREF
  DWMSPRITE *v49; // [rsp+80h] [rbp-80h]
  _BYTE v50[32]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v51[40]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v52[96]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v53[144]; // [rsp+130h] [rbp+30h] BYREF

  v12 = 0LL;
  v15 = (HWND)a2;
  v46 = a12;
  v16 = 1;
  v44 = Gre::Base::Globals(a1);
  if ( !a6 || !IsDwmActive(v18) )
    return GdiCreateSprite(a1, v15, a3);
  ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v50, v44, (__int64)a1, 0);
  if ( IsDwmActive(v19) )
  {
    memset_0(v53, 0, 0x88uLL);
    if ( a4 )
      v22 = *((_QWORD *)a4 + 6);
    else
      v22 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 18712);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v48);
    v49 = 0LL;
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v52);
    DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj((Gre::Base *)v15, v22, (HDEV)a1, a8);
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v48, DwmSpriteObj);
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v52);
    v25 = v49;
    if ( v49 )
    {
      *((_DWORD *)v49 + 29) = 0;
      v26 = (SFMLOGICALSURFACE *)*((_QWORD *)v25 + 18);
      if ( a3 )
        *(struct _RECTL *)((char *)v25 + 56) = *a3;
      v27 = *((_DWORD *)v25 + 35) & 0xFFFFFFFE | (a7 != 0);
      *((_DWORD *)v25 + 35) = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(2 * a8)) & 2;
      v28 = *((_DWORD *)v26 + 63) ^ ((unsigned __int8)*((_DWORD *)v26 + 63) ^ (unsigned __int8)(16 * a8)) & 0x10;
      *((_DWORD *)v26 + 63) = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(4 * a9)) & 4;
      v29 = *((_DWORD *)v25 + 35) ^ ((unsigned __int8)*((_DWORD *)v25 + 35) ^ (unsigned __int8)(8 * a10)) & 8;
      v30 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(a11 << 6)) & 0x40;
      v31 = (unsigned __int16 *)v46;
      *((_DWORD *)v25 + 35) = v30;
      DWMSPRITE::vUpdateDpiScaling(v25, v31, v24);
      v47 = *(Gre::Base **)v25;
      NeighborSprite = (HSPRITE)hspGetNeighborSprite(v47, 0, 1);
      if ( !a2 && !a4 )
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v53, (__int128 *)((char *)v25 + 56));
        a4 = (struct tagMINIWINDOWINFO *)v53;
      }
      if ( (*((_DWORD *)v26 + 63) & 4) != 0 )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v46);
        SFMLOGICALSURFACE::vDirtyRegionAccum(v26, v46);
      }
      v33 = *((_DWORD *)v25 + 35) & 1;
      v34 = v33 | *((_DWORD *)v26 + 63) & 0xC | (2
                                               * (*((_DWORD *)v26 + 63) & 1 | *((_DWORD *)v25 + 35) & 0x40 | (4 * (*((_DWORD *)v25 + 35) & 0xE))));
      v35 = (void *)UserReferenceDwmApiPort(v33);
      v43 = v34;
      v36 = v47;
      if ( (int)DwmAsyncCreateSprite(v35, (__int64)v47, a2, (__int128 *)&a3->left, v43, (__int128 *)a4, a5) < 0 )
      {
        v41 = DWMSPRITEREF::Detach((DWMSPRITEREF *)v48);
        vspDestroyDwmSpriteObjInternal((HDEV)a1, 0LL, v41);
      }
      else
      {
        v38 = Gre::Base::Globals(v37);
        if ( NeighborSprite && *(_QWORD *)(*((_QWORD *)v38 + 17) + 144LL) )
        {
          DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v51, NeighborSprite);
          v40 = (void *)UserReferenceDwmApiPort(v39);
          DwmAsyncZorderSprite(v40, (__int64)v36, (__int64)NeighborSprite);
          DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v51);
        }
        v12 = v36;
        *((_DWORD *)v25 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      }
    }
    DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v48);
    v15 = (HWND)a2;
    v16 = 0;
  }
  ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v50);
  if ( v16 )
    return GdiCreateSprite(a1, v15, a3);
  return v12;
}
