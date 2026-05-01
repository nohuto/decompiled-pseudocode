/*
 * XREFs of ?DisplaySettingsChange@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806A7130
 * Callers:
 *     ?DisplaySettingsChange@XamlSnapAssistViewHost@@WJA@EAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806A71A0 (-DisplaySettingsChange@XamlSnapAssistViewHost@@WJA@EAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18011ED70 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlSnapAssistViewHost::DisplaySettingsChange(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v5 = (a1 + 16) & -(__int64)(a1 != 16);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v5, 1);
  v2 = CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1 - 8);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CC,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v2);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v5);
  return v3;
}
