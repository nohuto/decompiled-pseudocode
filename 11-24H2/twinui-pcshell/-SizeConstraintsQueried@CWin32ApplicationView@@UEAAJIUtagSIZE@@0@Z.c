/*
 * XREFs of ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x1801B9670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18002B8E8 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002EBC0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003CB70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::SizeConstraintsQueried(
        CWin32ApplicationView *this,
        unsigned int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // edi
  LONG v5; // ebx
  char *v7; // r14
  RTL_SRWLOCK *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *ViewManager; // rax
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v15[4]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct tagSIZE v17; // [rsp+80h] [rbp+40h] BYREF
  struct tagSIZE v18; // [rsp+88h] [rbp+48h]

  v18 = a4;
  v17 = a3;
  cx = a4.cx;
  v5 = a3.cx;
  v7 = (char *)this - 160;
  v8 = (RTL_SRWLOCK *)((char *)this - 112);
  AcquireSRWLockExclusive(v8);
  (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD))(**((_QWORD **)v7 + 28) + 24LL))(*((_QWORD *)v7 + 28), &v14, a2);
  v15[0] = v5;
  v15[1] = v17.cy;
  v15[2] = cx;
  v15[3] = v18.cy;
  if ( v14 != __PAIR128__(__PAIR64__(v18.cy, cx), __PAIR64__(v17.cy, v5)) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**((_QWORD **)v7 + 28) + 32LL))(
           *((_QWORD *)v7 + 28),
           a2,
           v15);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x298,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v9);
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39A,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)v10);
      return v10;
    }
    ViewManager = ApplicationViewManagement::CGlobals::GetViewManager((__int64 *)&v17);
    CApplicationViewManager::RaiseApplicationViewChanged(
      *ViewManager + 136,
      (int (__fastcall ***)(_QWORD, GUID *, LPMALLOC *))v7,
      0xFu,
      0LL);
    v13 = (__int64)v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(v13);
    }
  }
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return 0LL;
}
