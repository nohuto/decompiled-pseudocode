/*
 * XREFs of ?Invoke@?$delegate@U?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowArrangementEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_9a383877cf6fee3a1c80047b805bc2b8_@@@impl@winrt@@UEAAHPEAXUstruct_Windows_Internal_Shell_WindowManagementEvents_WindowArrangementEventArgs@23@@Z @ 0x180588120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>,_lambda_9a383877cf6fee3a1c80047b805bc2b8_>::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v4 = a2;
  try
  {
    (*(void (**)(void))(a1 + 24))();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
