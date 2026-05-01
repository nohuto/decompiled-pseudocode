/*
 * XREFs of ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x18030D820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x180111330 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CE208 (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetSwitchWindow(
        CApplicationViewManager *this,
        __int64 (__fastcall ***a2)(struct IWin32ApplicationView *, GUID *, CWin32ApplicationView **),
        HWND *a3)
{
  __int64 (__fastcall *v5)(struct IWin32ApplicationView *, GUID *, CWin32ApplicationView **); // rbx
  int SwitchWindow; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CWin32ApplicationView *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease((__int64 *)&v11);
  SwitchWindow = v5((struct IWin32ApplicationView *)a2, &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3, &v11);
  v7 = SwitchWindow;
  if ( SwitchWindow < 0 )
  {
    v8 = 684LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)SwitchWindow);
    goto LABEL_6;
  }
  SwitchWindow = CWin32ApplicationView::GetSwitchWindow(v11, a3);
  v7 = SwitchWindow;
  if ( SwitchWindow < 0 )
  {
    v8 = 686LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease((__int64 *)&v11);
  return v7;
}
