/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::Threading::ITimerElapsedHandler::_)(Windows::System::Threading::IThreadPoolTimer__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::Threading::ITimerElapsedHandler_Microsoft::WRL::FtmBase___lambda_47c0868eeef6d2db2a8f89db045b20e4___1_Windows::System::Threading::IThreadPoolTimer___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::Threading::ITimerElapsedHandler_Microsoft::WRL::FtmBase___lambda_47c0868eeef6d2db2a8f89db045b20e4___1_Windows::System::Threading::IThreadPoolTimer___ @ 0x180624B9C
 * Callers:
 *     wil::MakeAgileCallback_Windows::System::Threading::ITimerElapsedHandler__lambda_47c0868eeef6d2db2a8f89db045b20e4___ @ 0x18062435C (wil--MakeAgileCallback_Windows--System--Threading--ITimerElapsedHandler__lambda_47c0868eeef6d2db.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800C9020 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::System::Threading::ITimerElapsedHandler::___Windows::System::Threading::IThreadPoolTimer____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::Threading::ITimerElapsedHandler_Microsoft::WRL::FtmBase___lambda_47c0868eeef6d2db2a8f89db045b20e4___1_Windows::System::Threading::IThreadPoolTimer___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::Threading::ITimerElapsedHandler_Microsoft::WRL::FtmBase___lambda_47c0868eeef6d2db2a8f89db045b20e4___1_Windows::System::Threading::IThreadPoolTimer___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rax

  v4 = (_QWORD *)(a1 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::System::Threading::ITimerElapsedHandler'};
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 64) = *a2;
  v5 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 72) = v5;
  *(_QWORD *)a1 = off_1807EF048;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
