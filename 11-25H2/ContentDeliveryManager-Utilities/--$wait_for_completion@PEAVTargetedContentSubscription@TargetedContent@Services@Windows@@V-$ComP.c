/*
 * XREFs of ??$wait_for_completion@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@V?$ComPtr@UITargetedContentSubscription@TargetedContent@Services@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UITargetedContentSubscription@TargetedContent@Services@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800AB7F0
 * Callers:
 *     ??$call_and_wait_for_completion@UITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@4@$$ZPEAU5@@wil@@YA?A_PPEAUITargetedContentSubscriptionStatics@TargetedContent@Services@Windows@@P81234@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@4@@Z$$QEAPEAU5@@Z @ 0x1800AB4C4 (--$call_and_wait_for_completion@UITargetedContentSubscriptionStatics@TargetedContent@Services@Wi.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800AB178 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Servi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::wait_for_completion<Windows::Services::TargetedContent::TargetedContentSubscription *,Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::ITargetedContentSubscription>>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentSubscription *> *>(
         a2,
         (DWORD)a2,
         a3);
  if ( v5 >= 0 )
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD *))(*a2)[8])(a2, a1);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72D,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v5,
      1);
  return a1;
}
