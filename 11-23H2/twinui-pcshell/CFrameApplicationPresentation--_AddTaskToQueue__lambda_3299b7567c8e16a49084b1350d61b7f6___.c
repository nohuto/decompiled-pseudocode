/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___ @ 0x1800209B4
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180020CC0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___ @ 0x18001FBD0 (Windows--Internal--ComTaskPool--QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___.c)
 *     _lambda_d0da97affcf0ee4e8d5f1623cb8d936b_::_lambda_d0da97affcf0ee4e8d5f1623cb8d936b_ @ 0x18001FEB8 (_lambda_d0da97affcf0ee4e8d5f1623cb8d936b_--_lambda_d0da97affcf0ee4e8d5f1623cb8d936b_.c)
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180022020 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_3299b7567c8e16a49084b1350d61b7f6___(
        unsigned int *a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  __int64 v9[2]; // [rsp+20h] [rbp-188h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v12[320]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x820,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v9[0]);
  }
  else
  {
    v9[0] = (__int64)a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    v4 = lambda_d0da97affcf0ee4e8d5f1623cb8d936b_::_lambda_d0da97affcf0ee4e8d5f1623cb8d936b_(v10, v9, (__int64)a1, a2);
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___(
           v6,
           v5,
           a1[12],
           (__int64)v4);
    CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v10);
    if ( v7 >= 0 )
      ++a1[53];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v9);
  }
  CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)(a2 + 2));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  return (unsigned int)v7;
}
