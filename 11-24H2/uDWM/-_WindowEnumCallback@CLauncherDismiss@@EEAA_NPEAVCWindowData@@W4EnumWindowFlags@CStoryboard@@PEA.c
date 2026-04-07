/*
 * XREFs of ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800513D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180051730 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180051BE8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180051C94 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180053BE4 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x180053CB4 (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180053D00 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x1800733C4 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18008667C (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x18008A540 (-GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D4580 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 */

char __fastcall CLauncherDismiss::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  char v8; // al
  char v9; // r13
  int v10; // edi
  char v11; // r12
  struct tagRECT *v12; // r14
  unsigned int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  bool v17; // al
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int PVLTarget; // eax
  int v26; // eax
  CBaseObject *v27; // rbx
  struct tagRECT v28; // xmm0
  CBaseObject *v29; // rbx
  struct tagRECT **v31; // [rsp+28h] [rbp-58h]
  CBaseObject *v32; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v33; // [rsp+48h] [rbp-38h] BYREF
  struct tagRECT *v34; // [rsp+58h] [rbp-28h] BYREF
  int *v35; // [rsp+60h] [rbp-20h]
  struct tagRECT v36; // [rsp+68h] [rbp-18h] BYREF

  v35 = a4;
  v8 = CFlyoutPopup::_WindowEnumCallback();
  v9 = v8;
  if ( *a4 >= 0 && v8 )
  {
    v10 = 0;
    v11 = 0;
    v32 = 0LL;
    if ( (a3 & 1) != 0 )
    {
      v33 = 0LL;
      CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v33);
      v34 = 0LL;
      v12 = (struct tagRECT *)(a1 + 128);
      v36 = 0LL;
      v33 = 0LL;
      CStoryboard::_GetIdealRects((struct CWindowData *)a2, (const struct tagRECT *)(a1 + 128), &v36, &v34, &v33, v31);
      v13 = *(_DWORD *)(a2 + 744);
      v14 = v13 & 0xFFF;
      switch ( v14 )
      {
        case 3:
          if ( *(_DWORD *)(a2 + 128) == 1 )
          {
            if ( *(_BYTE *)(a1 + 144) )
            {
              v36 = *v12;
              v33 = v36;
            }
            PVLTarget = CLauncherDismiss::GetPVLTarget(a1, v13);
            v26 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    PVLTarget,
                    &v36,
                    0,
                    &v32);
            v10 = v26;
            if ( v26 >= 0 )
            {
              v27 = v32;
              if ( *((_DWORD *)v32 + 17) != 2 )
              {
                v28 = *v12;
                *((_DWORD *)v32 + 17) = 2;
                *(struct tagRECT *)((char *)v27 + 104) = v28;
              }
              goto LABEL_28;
            }
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v26,
              0xB7Eu,
              0LL);
          }
          else
          {
            v23 = CLauncherDismiss::GetPVLTarget(a1, v13);
            v24 = CStoryboard::_CreateAndAddAnimationComponentWithRect(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    0,
                    v23,
                    v34,
                    0LL,
                    -1,
                    &v32);
            v10 = v24;
            if ( v24 >= 0 )
              goto LABEL_28;
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v24,
              0xB72u,
              0LL);
          }
          break;
        case 22:
          v17 = ContainsRect((const struct tagRECT *)(a1 + 128), (const struct tagRECT *)(a2 + 48));
          if ( v17 && *(_BYTE *)(a1 + 144) )
          {
            v11 = 1;
            v19 = CLauncherDismiss::GetPVLTarget(a1, v18);
            v20 = CStoryboard::_CreateAndAddNullComponentWithWindow(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    v19,
                    &v32);
            v10 = v20;
            if ( v20 >= 0 )
              goto LABEL_28;
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v20,
              0xB5Cu,
              0LL);
          }
          else
          {
            if ( (*(_BYTE *)(a2 + 736) & 1) == 0 || (*(_BYTE *)(a2 + 740) & 1) != 0 || !v17 )
              goto LABEL_37;
            v21 = CLauncherDismiss::GetPVLTarget(a1, v18);
            v22 = CStoryboard::_CreateAndAddAnimationComponent(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    0,
                    v21,
                    &v32);
            v10 = v22;
            if ( v22 >= 0 )
            {
              v36 = *(struct tagRECT *)(a2 + 48);
              v33 = v36;
              goto LABEL_28;
            }
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v22,
              0xB69u,
              0LL);
          }
          break;
        case 43:
          v11 = 1;
          v15 = CLauncherDismiss::GetPVLTarget(a1, v13);
          v16 = CStoryboard::_CreateAndAddNullComponentWithWindow(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  v15,
                  &v32);
          v10 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v16,
              0xB90u,
              0LL);
            break;
          }
LABEL_28:
          v29 = v32;
          if ( v32 )
          {
            if ( !v11 )
            {
              CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v32 + 5), 0.0);
              CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v29 + 5), &v36);
              CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v29 + 5), &v33);
            }
            break;
          }
LABEL_37:
          *v35 = v10;
          return v9;
        default:
          goto LABEL_37;
      }
    }
    else
    {
      if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 744) & 0xFFF) != 0x2B )
        goto LABEL_37;
      *(_BYTE *)(a1 + 144) = 1;
    }
    if ( v32 )
      CBaseObject::Release(v32);
    goto LABEL_37;
  }
  return v9;
}
