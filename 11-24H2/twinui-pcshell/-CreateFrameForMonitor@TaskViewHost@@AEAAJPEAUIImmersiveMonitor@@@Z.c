/*
 * XREFs of ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801DD5E8
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x18011CA9C (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?__abi_ThrowIfFailed@@YAXJ@Z @ 0x180040600 (-__abi_ThrowIfFailed@@YAXJ@Z.c)
 *     ??$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@@YAXPE$ADVItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180040900 (--$__abi_winrt_ptrto_delegate_dtor@VItemContextMenuInvokedHandler@Switcher@Experiences@Composabl.c)
 *     ?MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@I@Z @ 0x18011A58C (-MonitorFrameCreated_@XamlSwitcherTelemetry@@QEAAX_NIIUtagRECT@@I@Z.c)
 *     ?MakeTaskViewFrame@@YA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@1AEBUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUSwitchItemDataView@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopDataSource@7ComposableShell@9Windows@winrt@@AEBUIVirtualDesktopController@7ComposableShell@9Windows@winrt@@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@PEAUIApplicationViewCollection@@AEBUTaskGroupDataSourceAdapter@TaskGroups@89Windows@winrt@@PEAUIRemoteSessionWindowManager@89Windows@ABI@@@Z @ 0x1801DD818 (-MakeTaskViewFrame@@YA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@W4ALL_UP_.c)
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18029B8A0 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18029B8E0 (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BC1C (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1806A3318 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@-$vect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskViewHost::CreateFrameForMonitor(TaskViewHost *this, struct IImmersiveMonitor *a2)
{
  int v2; // r15d
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 (__fastcall ***v6)(_QWORD, const struct _GUID *, _QWORD *); // rcx
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // r14d
  struct tagRECT *v10; // r15
  int v11; // edi
  int v12; // ebx
  unsigned __int64 v13; // rdx
  unsigned __int8 v14; // cl
  __int64 v15; // rcx
  const char *v16; // r9
  __int64 result; // rax
  XamlSwitcherTelemetry *v18; // rcx
  _QWORD v19[2]; // [rsp+70h] [rbp-68h] BYREF
  struct tagRECT v20; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v21[2]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    v2 = (int)a2;
    v4 = *((_QWORD *)this + 34);
    v5 = *((_QWORD *)this + 33);
    v6 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, _QWORD *))*((_QWORD *)this + 26);
    v7 = 0LL;
    v21[0] = 0LL;
    if ( v6 )
    {
      v8 = (**v6)(v6, &_uuidof__AUIXamlSwitcherWindowInteractionEvents__, v21);
      __abi_ThrowIfFailed(v8);
      v7 = v21[0];
    }
    *(_QWORD *)&v20.left = v7;
    MakeTaskViewFrame(
      (unsigned int)v19,
      *((_DWORD *)this + 70),
      v2,
      *((_QWORD *)this + 30),
      (__int64)this + 152,
      (__int64)this + 168,
      (__int64)this + 176,
      (__int64)this + 192,
      *((_QWORD *)this + 26),
      v7,
      v5,
      (__int64)this + 200,
      v4);
    __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(v7);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 96LL))(v19[0]);
    v10 = (struct tagRECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v19[0] + 112LL))(v19[0], v21);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 104LL))(v19[0]);
    v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 88LL))(v19[0]);
    if ( XamlSwitcherTelemetry::IsEnabled(v14, v13) )
    {
      wil::details::static_lazy<XamlSwitcherTelemetry>::get(
        v15,
        _lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
      v20 = *v10;
      XamlSwitcherTelemetry::MonitorFrameCreated_(v18, 0, v12, v11, &v20, v9);
    }
    if ( *((_QWORD *)this + 41) == *((_QWORD *)this + 42) )
    {
      std::vector<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> const &>(
        (char *)this + 320,
        *((_QWORD *)this + 41),
        v19);
    }
    else
    {
      wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
        *((_QWORD *)this + 41),
        v19);
      *((_QWORD *)this + 41) += 8LL;
    }
    if ( v19[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x24F,
                           (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                           v16);
  }
  return result;
}
