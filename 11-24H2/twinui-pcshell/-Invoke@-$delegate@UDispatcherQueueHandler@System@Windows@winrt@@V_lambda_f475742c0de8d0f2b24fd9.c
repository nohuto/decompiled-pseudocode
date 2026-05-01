/*
 * XREFs of ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@@impl@winrt@@UEAAHXZ @ 0x1805959C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_f475742c0de8d0f2b24fd9d946f0a567_>::Invoke(
        __int64 a1)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 12LL) = 1;
  (**(void (***)(void))(a1 + 16))();
  return 0LL;
}
