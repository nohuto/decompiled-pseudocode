/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1801C3C20
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@@?$EventSource@U?$ITypedEventHandler@PEAUIObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_992899f37bde9c4ccf5aeca340241f6d_@@@Z @ 0x1801C3C60 (--$DoInvoke@V_lambda_992899f37bde9c4ccf5aeca340241f6d_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::Run(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 16);
  v6 = v1;
  v4[0] = &v5;
  v5 = v2;
  v4[1] = &v6;
  return Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithVisibility *,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_992899f37bde9c4ccf5aeca340241f6d_>(
           v2 + 16,
           v4);
}
