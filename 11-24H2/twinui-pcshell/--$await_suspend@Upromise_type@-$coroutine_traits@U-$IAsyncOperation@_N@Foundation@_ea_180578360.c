/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@@?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@@experimental@std@@@Z @ 0x180578360
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x18057AE90 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_18057AE90.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x18014403C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?0U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@I@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@3@@Z @ 0x180577E8C (--$-0U-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@I@Foundation@Windows@win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  char v11; // r14
  int v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+28h] [rbp-38h]
  _BYTE v15[16]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  int v18; // [rsp+90h] [rbp+30h] BYREF
  __int64 v19; // [rsp+98h] [rbp+38h] BYREF

  v4 = a2 - 112;
  v5 = a2 - 112 + 32;
  v6 = -v4;
  v7 = v5 & -(__int64)(v6 != 0);
  if ( *(_BYTE *)(v7 + 0x10) )
  {
    *(_QWORD *)a1 = v7;
    *(_QWORD *)((v5 & -(__int64)(v6 != 0)) + 8) = a1;
    *(_QWORD *)v7 = _lambda_6df262792ed19d9f37b8132f1161a915_::_lambda_invoker_cdecl_;
  }
  v8 = *(__int64 **)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v15);
  v16 = a1;
  v17 = a2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>::AsyncOperationCompletedHandler<unsigned int>(
    &v19,
    (__int64)v15);
  v9 = *v8;
  v13 = 0;
  v14 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, v19);
  winrt::check_hresult(&v18, v10, (__int64)&v13);
  if ( v19 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
  v11 = *(_BYTE *)(a1 + 24);
  *(_BYTE *)(a1 + 24) = 0;
  return v11;
}
