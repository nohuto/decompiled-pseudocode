/*
 * XREFs of ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@Udispatcher_handler@details@wil@@@impl@winrt@@UEAAHXZ @ 0x1802264F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,wil::details::dispatcher_handler>::Invoke(
        __int64 a1)
{
  void (***v1)(void); // rax
  void (**v2)(void); // rdx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void (****)(void))(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  v2 = *v1;
  *v1 = 0LL;
  try
  {
    (*v2)();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
