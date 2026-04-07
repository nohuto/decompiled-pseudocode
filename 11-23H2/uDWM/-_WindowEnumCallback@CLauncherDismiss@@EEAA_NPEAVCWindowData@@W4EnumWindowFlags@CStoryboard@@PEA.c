/*
 * XREFs of ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18000B080 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180013CEC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180058514 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800DA190 (-GetPVLTarget@CLauncherDismiss@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCCA8 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCF8C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x1800DD804 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0E10 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EB870 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CLauncherDismiss::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  char v8; // al
  char v9; // r13
  int v10; // edi
  char v11; // r12
  struct tagRECT *v12; // r14
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  bool v17; // al
  __int16 v18; // r8
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  struct tagRECT v23; // xmm6
  int PVLTarget; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  CBaseObject *v28; // rbx
  struct tagRECT v29; // xmm0
  CBaseObject *v30; // rbx
  __int64 v31; // rax
  CVisual *v32; // rcx
  int v33; // eax
  CBaseObject *v35; // [rsp+58h] [rbp-29h] BYREF
  struct tagRECT *v36; // [rsp+60h] [rbp-21h] BYREF
  int *v37; // [rsp+68h] [rbp-19h]
  struct tagRECT v38; // [rsp+70h] [rbp-11h] BYREF
  struct tagRECT v39; // [rsp+80h] [rbp-1h] BYREF

  v37 = a4;
  v8 = CFlyoutPopup::_WindowEnumCallback((CStoryboard *)a1, a2, a3, a4);
  v9 = v8;
  if ( *a4 >= 0 && v8 )
  {
    v10 = 0;
    v11 = 0;
    v35 = 0LL;
    if ( (a3 & 1) != 0 )
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v38);
      v36 = 0LL;
      v12 = (struct tagRECT *)(a1 + 128);
      CStoryboard::_GetIdealRects((struct CWindowData *)a2, (const struct tagRECT *)(a1 + 128), &v39, &v36, &v38);
      v13 = *(_DWORD *)(a2 + 680);
      v14 = v13 & 0xFFF;
      switch ( v14 )
      {
        case 3:
          if ( *(_DWORD *)(a2 + 132) != 1 )
          {
            PVLTarget = CLauncherDismiss::GetPVLTarget(a1, v13);
            v25 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    0,
                    PVLTarget,
                    v36,
                    0LL,
                    -1,
                    1,
                    &v35);
            v10 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v25,
                0xB49u);
              break;
            }
            goto LABEL_23;
          }
          if ( *(_BYTE *)(a1 + 144) )
          {
            v39 = *v12;
            v23 = v39;
          }
          else
          {
            v23 = v38;
          }
          v26 = CLauncherDismiss::GetPVLTarget(a1, v13);
          v27 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  v26,
                  &v39,
                  0,
                  &v35);
          v10 = v27;
          if ( v27 >= 0 )
          {
            v28 = v35;
            if ( *((_DWORD *)v35 + 17) != 2 )
            {
              v29 = *v12;
              *((_DWORD *)v35 + 17) = 2;
              *(struct tagRECT *)((char *)v28 + 104) = v29;
            }
LABEL_31:
            v30 = v35;
            if ( v35 )
            {
              if ( !v11 )
              {
                CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v35 + 5), 0.0);
                CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v30 + 5), &v39);
                v31 = *((_QWORD *)v30 + 5);
                v32 = (CVisual *)(v31 + 8);
                *(struct tagRECT *)(v31 + 872) = v23;
                v33 = *(_DWORD *)(v31 + 96);
                if ( (v33 & 0x1000) == 0 )
                {
                  *((_DWORD *)v32 + 22) = v33 | 0x1000;
                  CVisual::PropagateDirtyChildren(v32);
                }
              }
              break;
            }
LABEL_40:
            *v37 = v10;
            return v9;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v27, 0xB55u);
          break;
        case 22:
          v17 = ContainsRect((const struct tagRECT *)(a1 + 128), (const struct tagRECT *)(a2 + 48));
          if ( v17 && *(_BYTE *)(a1 + 144) )
          {
            v11 = 1;
            v19 = CLauncherDismiss::GetPVLTarget(a1, v18);
            v20 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
                    (CStoryboard *)a1,
                    (struct CWindowData *)a2,
                    v19,
                    1,
                    &v35);
            v10 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1LL,
                v20,
                0xB33u);
              break;
            }
LABEL_23:
            v23 = v38;
            goto LABEL_31;
          }
          if ( (*(_BYTE *)(a2 + 672) & 1) == 0 || (*(_BYTE *)(a2 + 676) & 1) != 0 || !v17 )
            goto LABEL_40;
          v21 = CLauncherDismiss::GetPVLTarget(a1, v18);
          v22 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  0,
                  v21,
                  0LL,
                  0LL,
                  -1,
                  1,
                  &v35);
          v10 = v22;
          if ( v22 >= 0 )
          {
            v39 = *(struct tagRECT *)(a2 + 48);
            v23 = v39;
            goto LABEL_31;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0xB40u);
          break;
        case 43:
          v11 = 1;
          v15 = CLauncherDismiss::GetPVLTarget(a1, v13);
          v16 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
                  (CStoryboard *)a1,
                  (struct CWindowData *)a2,
                  v15,
                  1,
                  &v35);
          v10 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v16,
              0xB67u);
            break;
          }
          goto LABEL_23;
        default:
          goto LABEL_40;
      }
    }
    else
    {
      if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x2B )
        goto LABEL_40;
      *(_BYTE *)(a1 + 144) = 1;
    }
    if ( v35 )
      CBaseObject::Release(v35);
    goto LABEL_40;
  }
  return v9;
}
