/*
 * XREFs of ?Create@CGraphicsDeviceManager@@SAJPEAPEAV1@@Z @ 0x180027BC8
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800258F8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x180028220 (-InitializeGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18009B670 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CGraphicsDeviceManager::Create(struct CGraphicsDeviceManager **a1)
{
  void *v2; // rax
  void *v3; // rdi
  wil::details *v4; // rcx
  wil::details *Event; // rbx
  int LastErrorFailHr; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v2 = (void *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                 WPF::g_pProcessHeap,
                 72LL);
  v3 = v2;
  v13 = v2;
  if ( !v2 )
  {
    v13 = 0LL;
    v7 = -2147024882;
    v10 = 27LL;
    goto LABEL_11;
  }
  memset_0(v2, 0, 0x48uLL);
  *((_DWORD *)v3 + 2) = 1;
  *(_QWORD *)v3 = &CGraphicsDeviceManager::`vftable';
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_DWORD *)v3 + 16) = 0;
  v13 = v3;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (wil::details **)v3 + 7,
      Event);
LABEL_4:
    LastErrorFailHr = CGraphicsDeviceManager::InitializeGraphicsDevice((CGraphicsDeviceManager *)v3);
    v7 = LastErrorFailHr;
    if ( LastErrorFailHr >= 0 )
    {
      *a1 = (struct CGraphicsDeviceManager *)v3;
      return 0LL;
    }
    v9 = 40LL;
    goto LABEL_9;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
  v7 = LastErrorFailHr;
  if ( LastErrorFailHr >= 0 )
    goto LABEL_4;
  v9 = 39LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
    (const char *)(unsigned int)LastErrorFailHr,
    v11);
  v10 = 29LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
    (const char *)v7,
    v11);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
  return v7;
}
