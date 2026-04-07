/*
 * XREFs of ?UpdateSecondaryWindowProperties@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800AB1A8
 * Callers:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180065540 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800A87E4 (-AddSecondaryWindow@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180021F0C (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z @ 0x180065754 (-FindSecondaryWindow@CapturedWindowRepresentation@@IEAAHPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@details@wil@@QEAA_NXZ @ 0x1800AB2C0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix@@@det.c)
 */

__int64 __fastcall CapturedWindowRepresentation::UpdateSecondaryWindowProperties(HWND *this, struct CWindowData *a2)
{
  int SecondaryWindow; // eax
  __int64 v5; // rsi
  struct CWindowData *v7; // rax
  __int64 v8; // rdx
  HWND v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWindowData *v13; // [rsp+40h] [rbp+18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h]

  SecondaryWindow = CapturedWindowRepresentation::FindSecondaryWindow((CapturedWindowRepresentation *)this, a2);
  v5 = (unsigned int)SecondaryWindow;
  if ( SecondaryWindow < 0 )
    return 2147942487LL;
  v13 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_SecondaryWindowsFix>::GetImpl'::`2'::impl) )
  {
    v7 = (struct CWindowData *)this[11];
    v13 = v7;
  }
  else
  {
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      this[2],
      &v13);
    v7 = v13;
  }
  if ( !*((_QWORD *)v7 + 55) )
    return 0LL;
  if ( !*((_QWORD *)a2 + 55) )
    return 0LL;
  _mm_lfence();
  v8 = *((_QWORD *)v13 + 55);
  v9 = this[6];
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 55) + 64LL);
  v10 = CVisualProxy::SetOffset(
          *(CVisualProxy **)(*((_QWORD *)v9 + v5) + 8LL),
          (double)((int)v14 - *(_DWORD *)(v8 + 64)),
          (double)(int)(HIDWORD(v14) - HIDWORD(*(_QWORD *)(v8 + 64))),
          0.0);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE0,
    (__int64)"clientcore\\windows\\dwm\\udwm\\capturedwindowrepresentation.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
