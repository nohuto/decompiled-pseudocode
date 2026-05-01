/*
 * XREFs of ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x180101E04
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x180101B60 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18002A604 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002B1E4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x180101ED0 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     _lambda_0067f30f54eb0de3635ee7c500c831b5_::operator() @ 0x180311468 (_lambda_0067f30f54eb0de3635ee7c500c831b5_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::RuntimeClassInitialize(CWinRTApplicationView *this)
{
  int ViewId; // ebx
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-30h] BYREF
  LPVOID pv[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  volatile signed __int32 *v8; // [rsp+60h] [rbp+10h] BYREF

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ViewId = CWinRTApplicationView::GetViewId((CWinRTApplicationView *)((char *)this + 16), (unsigned __int16 **)pv);
  if ( ViewId < 0 )
  {
    v3 = 34LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)ViewId);
    goto LABEL_8;
  }
  v5[0] = pv;
  v5[1] = this;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v8);
  if ( v8 )
    lambda_0067f30f54eb0de3635ee7c500c831b5_::operator()(v5);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v8);
  ViewId = CApplicationViewBase::RuntimeClassInitialize(this);
  if ( ViewId < 0 )
  {
    v3 = 46LL;
    goto LABEL_7;
  }
LABEL_8:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)ViewId;
}
