/*
 * XREFs of ?OnMonitorFrameDismissAnimationCompleted@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A0210
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x1804B10C0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlGamingTaskViewHost::OnMonitorFrameDismissAnimationCompleted(XamlGamingTaskViewHost *this)
{
  char *v1; // rbx
  signed __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v1 = (char *)this - 120;
  v3 = ((unsigned __int64)this - 96) & -(__int64)(this != (XamlGamingTaskViewHost *)120);
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v3, 1);
  CMultitaskingViewHostBase<IAllUpViewHost>::DismissView((__int64)v1);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v3);
  return 0LL;
}
