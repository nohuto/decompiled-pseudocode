/*
 * XREFs of ?MonitorAdded@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806A75D0
 * Callers:
 *     ?MonitorAdded@XamlSnapAssistViewHost@@WJA@EAAJPEAUIImmersiveMonitor@@@Z @ 0x1806A7640 (-MonitorAdded@XamlSnapAssistViewHost@@WJA@EAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18011ED70 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::MonitorAdded(XamlSnapAssistViewHost *this, struct IImmersiveMonitor *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v6 = ((unsigned __int64)this + 16) & -(__int64)(this != (XamlSnapAssistViewHost *)16);
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v6, 1);
  v3 = CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView((__int64)this - 8);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C6,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v3);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v6);
  return v4;
}
