/*
 * XREFs of ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x18030D730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002CFA0 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CE208 (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetOwnerAppView(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct IApplicationView **a3)
{
  __int64 (__fastcall *v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int ViewForHwnd; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  HWND v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v14);
  ViewForHwnd = v6((struct IApplicationView *)a2, &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3, &v14);
  v8 = ViewForHwnd;
  if ( ViewForHwnd < 0 )
  {
    v9 = 695LL;
LABEL_7:
    v11 = (unsigned int)ViewForHwnd;
    goto LABEL_8;
  }
  v15 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**(_QWORD **)(v14 + 216) + 48LL))(*(_QWORD *)(v14 + 216), &v15);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C9,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v10);
    v11 = v8;
    v9 = 698LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)v11);
    goto LABEL_9;
  }
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd(this - 1, v15, a3);
  v8 = ViewForHwnd;
  if ( ViewForHwnd < 0 )
  {
    v9 = 700LL;
    goto LABEL_7;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v14);
  return v8;
}
