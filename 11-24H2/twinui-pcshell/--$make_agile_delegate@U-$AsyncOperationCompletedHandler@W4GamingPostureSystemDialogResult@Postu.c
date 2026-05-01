/*
 * XREFs of ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@1@AEBU2341@@Z @ 0x18033CDC0
 * Callers:
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@PEAUGamingPostureSystemDialog@implementation@Posture@GamingExperiences@Internal@34@@experimental@std@@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x18033D7AC (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@W4GamingPostureSys.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     WINRT_IMPL_RoGetAgileReference @ 0x1802D2BF5 (WINRT_IMPL_RoGetAgileReference.c)
 *     ??$?0V_lambda_7536ed3602bc242f525d5b8b1c633343_@@@?$AsyncOperationCompletedHandler@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_7536ed3602bc242f525d5b8b1c633343_@@@Z @ 0x18033C58C (--$-0V_lambda_7536ed3602bc242f525d5b8b1c633343_@@@-$AsyncOperationCompletedHandler@W4GamingPostu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>>(
        __int64 *a1,
        __int64 *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+38h] [rbp-28h]
  __int128 v11; // [rsp+48h] [rbp-18h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
  if ( *a2 && (v8 = 0LL, (**v4)(v4, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v8), v8) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    *a1 = *a2;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
  }
  else
  {
    v11 = winrt::impl::guid_v<winrt::Windows::Foundation::AsyncOperationCompletedHandler<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>>;
    v7 = 0LL;
    WINRT_IMPL_RoGetAgileReference(0LL, (__int64)&v11, *a2, (__int64)&v7);
    v5 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      v9 = v5;
      v10 = v11;
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>::AsyncOperationCompletedHandler<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>(
        a1,
        (__int64)&v9);
    }
    else
    {
      *a1 = *a2;
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a1);
    }
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  }
  return a1;
}
