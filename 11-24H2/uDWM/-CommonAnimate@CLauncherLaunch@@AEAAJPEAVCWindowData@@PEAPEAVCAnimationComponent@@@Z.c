/*
 * XREFs of ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x1800D1A9C
 * Callers:
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800512D0 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180051C94 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x180053CB4 (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     ?GetPVLTarget@CLauncherLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x18007B0D0 (-GetPVLTarget@CLauncherLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D4580 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 */

__int64 __fastcall CLauncherLaunch::CommonAnimate(
        CLauncherLaunch *this,
        struct CWindowData *a2,
        struct CAnimationComponent **a3)
{
  int v3; // ebx
  const struct tagRECT *v5; // rdx
  int PVLTarget; // ecx
  int v9; // eax
  int v10; // edi
  CMILRefCountBase *v11; // rbx
  __int128 v12; // xmm0
  int v13; // eax
  CMILRefCountBase *v15; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT *v16; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v18; // [rsp+60h] [rbp-20h] BYREF

  v3 = *((_DWORD *)a2 + 32);
  v15 = 0LL;
  v5 = (const struct tagRECT *)((char *)this + 128);
  v16 = 0LL;
  v18 = 0LL;
  if ( v3 != 1 )
    v5 = 0LL;
  v17 = 0LL;
  CStoryboard::_GetIdealRects(a2, v5, &v18, &v16, &v17);
  PVLTarget = CLauncherLaunch::GetPVLTarget((__int64)this, *((_DWORD *)a2 + 186));
  if ( v3 == 1 )
  {
    v9 = CStoryboard::_CreateAndAddDesktopAnimationComponent(this, a2, PVLTarget, &v18, 0, &v15);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = v15;
      if ( *((_DWORD *)v15 + 17) != 2 )
      {
        v12 = *((_OWORD *)this + 8);
        *((_DWORD *)v15 + 17) = 2;
        *(_OWORD *)((char *)v11 + 104) = v12;
      }
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0xAE1u, 0LL);
  }
  else
  {
    v13 = CStoryboard::_CreateAndAddAnimationComponentWithRect(this, a2, 0, PVLTarget, v16, 0LL, 17, &v15);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v11 = v15;
LABEL_10:
      CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v11 + 5), &v18);
      CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v11 + 5), &v17);
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0xAEBu, 0LL);
  }
  v11 = v15;
LABEL_13:
  if ( a3 )
  {
    if ( v10 < 0 )
    {
      *a3 = 0LL;
    }
    else
    {
      *a3 = v11;
      if ( !v11 )
        return (unsigned int)v10;
      CMILRefCountBase::AddRef(v11);
    }
  }
  if ( v11 )
    CBaseObject::Release(v11);
  return (unsigned int)v10;
}
