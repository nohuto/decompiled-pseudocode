/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x18033CBC0
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1 @ 0x18033E610 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18033E610.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x18014403C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?0U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@$00U?$await_adapter@U?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@@impl@3@@Z @ 0x18033C4FC (--$-0U-$disconnect_aware_handler@$00U-$await_adapter@U-$IAsyncOperation@UValueSet@Collections@Fo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::ValueSet>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog *>::promise_type>(
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
    *(_QWORD *)v7 = _lambda_4cff5cac03f7c41104750b1d0579036a_::_lambda_invoker_cdecl_;
  }
  v8 = *(__int64 **)(a1 + 8);
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)v15);
  v16 = a1;
  v17 = a2;
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Collections::ValueSet>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Collections::ValueSet>(
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
