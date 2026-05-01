/*
 * XREFs of ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x18047F9D8
 * Callers:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18007E618 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?OnAllowInputPanelMdmPolicyUpdated@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x180203304 (-OnAllowInputPanelMdmPolicyUpdated@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x18047E390 (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z.c)
 *     ?OnOnScreenKeyboardVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z @ 0x18047E424 (-OnOnScreenKeyboardVisibilityChanged@TabTipAdapter@KeyboardHosting@@QEAAJ_N@Z.c)
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x18047F010 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 *     ?OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUDismissShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x18047F6AC (-OnShellViewCoordinatorHideRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18002BBFC (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x1800491DC (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x18047D390 (-InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessChangeRequest(
        __int64 a1,
        int a2,
        unsigned int a3,
        const char *a4)
{
  int v7; // eax
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, char *, int *, unsigned int *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  int v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  unsigned int v20; // [rsp+80h] [rbp+38h] BYREF
  int v21; // [rsp+88h] [rbp+40h] BYREF
  char v22; // [rsp+90h] [rbp+48h] BYREF
  __int64 v23; // [rsp+98h] [rbp+50h] BYREF

  if ( a3 == *(_DWORD *)(a1 + 496) )
  {
    v7 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP((KeyboardHosting::TabTipAdapter *)a1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xACA,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v7);
  }
  v8 = a2 - 2;
  if ( v8 )
  {
    if ( v8 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xAD7,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        a4);
    v9 = 3;
  }
  else
  {
    v9 = 2;
  }
  v22 = 0;
  LOBYTE(v21) = 0;
  v20 = 0;
  v23 = 0LL;
  v10 = *(_QWORD *)(a1 + 120);
  v11 = *(__int64 (__fastcall **)(__int64, __int64, char *, int *, unsigned int *, __int64 *))(*(_QWORD *)v10 + 304LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v12 = v11(v10, 11LL, &v22, &v21, &v20, &v23);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = 2783LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    return v14;
  }
  if ( v9 == 2 )
  {
    v16 = KeyboardHosting::TabTipAdapter::InvokeIsViewShown((KeyboardHosting::TabTipAdapter *)a1, a3);
    KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference((KeyboardHosting::TabTipAdapter *)a1, a3, v16);
  }
  LOBYTE(v18) = v21;
  LOBYTE(v13) = v22;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**(_QWORD **)(a1 + 32)
                                                                                            + 576LL))(
          *(_QWORD *)(a1 + 32),
          v23,
          v20,
          v13,
          v18,
          v9,
          a3);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = 2798LL;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  return 0LL;
}
