/*
 * XREFs of ?_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1760
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D5E78 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCF8C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DE6D4 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EB870 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CInputView::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char result; // al
  struct tagRECT v13; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v14 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_20;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v13);
  if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 2 )
  {
    if ( (*(_DWORD *)(a2 + 680) & 0xFFF) == 3 || (*(_DWORD *)(a2 + 680) & 0xFFF) == 0x19 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
              *(HWND *)(a2 + 40),
              0) )
        goto LABEL_20;
      v10 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v13, 1, &v14);
      v4 = v10;
      if ( v10 >= 0 )
        *(_BYTE *)(*((_QWORD *)v14 + 5) + 976LL) = 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x13A9u);
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x1A )
    {
      if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x2B )
        goto LABEL_20;
      v8 = (*(__int64 (__fastcall **)(CSlide *))(*(_QWORD *)a1 + 112LL))(a1);
      v9 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v8, 1, &v14);
      v4 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0x13B9u);
      goto LABEL_18;
    }
  }
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
          *(HWND *)(a2 + 40),
          1) )
    goto LABEL_20;
  v11 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v13, 0, &v14);
  v4 = v11;
  if ( v11 >= 0 )
    *(_BYTE *)(*((_QWORD *)v14 + 5) + 976LL) = 1;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x13B2u);
LABEL_18:
  if ( v14 )
    CBaseObject::Release(v14);
LABEL_20:
  result = 1;
  *a4 = v4;
  return result;
}
