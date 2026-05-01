/*
 * XREFs of ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180527620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x180526E30 (-QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806C26BC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1806C30D8 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppResizeOperation::ResizeApps(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbp
  int ResizeApps; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a1 - 176;
  v11 = (a1 + 16) & -(__int64)(a1 != 176);
  v12 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v11, 1);
  ResizeApps = CAppLayoutOperation::_VerifyAndPrepareLayout((CAppLayoutOperation *)(a1 - 152), 0LL, 0);
  v8 = ResizeApps;
  if ( ResizeApps < 0 )
  {
    v9 = 58LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizeoperation.cpp",
      (const char *)(unsigned int)ResizeApps);
    goto LABEL_8;
  }
  *(_DWORD *)(a1 - 72) = 1;
  ResizeApps = AppResizeOperation::QueryResizeApps(v6, a2, a3);
  v8 = ResizeApps;
  if ( ResizeApps < 0 )
  {
    v9 = 60LL;
    goto LABEL_7;
  }
  ResizeApps = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
  v8 = ResizeApps;
  if ( ResizeApps < 0 )
  {
    v9 = 61LL;
    goto LABEL_7;
  }
LABEL_8:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v11);
  return v8;
}
