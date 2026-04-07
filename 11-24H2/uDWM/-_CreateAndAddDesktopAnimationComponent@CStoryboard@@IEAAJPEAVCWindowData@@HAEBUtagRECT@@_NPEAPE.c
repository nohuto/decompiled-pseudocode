/*
 * XREFs of ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D4580
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800513D0 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x1800D1A9C (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800D4D8C (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5B40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D6600 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180053F3C (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddDesktopAnimationComponent(
        CStoryboard *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  __int64 v6; // rax
  int v8; // edx
  char v12; // al
  int v13; // eax
  CMILRefCountBase *v14; // rbx
  unsigned int v15; // edi
  int v16; // eax
  CMILRefCountBase *v18; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)this;
  v8 = *((_DWORD *)a2 + 186);
  v18 = 0LL;
  v12 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(v6 + 120))(this, v8 & 0xFFF);
  v13 = CTransitionVisualController::CreateDesktopAnimationComponent(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
          a2,
          a3,
          a4,
          a5,
          (v12 & 4) != 0,
          this,
          &v18);
  v14 = v18;
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x15DDu, 0LL);
  }
  else
  {
    v16 = CStoryboard::_AddAnimationComponent(this, v18);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        v16,
        0x15DEu,
        0LL);
    }
    else
    {
      *a6 = v14;
      if ( !v14 )
        return v15;
      CMILRefCountBase::AddRef(v14);
    }
  }
  if ( v14 )
    CBaseObject::Release(v14);
  return v15;
}
