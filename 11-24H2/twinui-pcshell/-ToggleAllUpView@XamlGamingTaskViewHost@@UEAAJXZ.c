/*
 * XREFs of ?ToggleAllUpView@XamlGamingTaskViewHost@@UEAAJXZ @ 0x1806A1A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18069F6B0 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A0C10 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlGamingTaskViewHost::ToggleAllUpView(XamlGamingTaskViewHost *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v6 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v6, 1);
  if ( *((_BYTE *)this + 872) )
    goto LABEL_8;
  if ( !*((_BYTE *)this + 112) )
  {
    v2 = XamlGamingTaskViewHost::Show((__int64)this, *((IUnknown **)this + 22), *((__int64 **)this + 23));
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 272LL;
      goto LABEL_7;
    }
LABEL_8:
    v3 = 0;
    goto LABEL_9;
  }
  v2 = XamlGamingTaskViewHost::DismissViewAnimated(this);
  v3 = v2;
  if ( v2 >= 0 )
    goto LABEL_8;
  v4 = 268LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlgamingtaskviewhost.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v6);
  return v3;
}
