/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_ @ 0x1803ABE70
 * Callers:
 *     ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803B4DA0 (-Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Wind.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004E194 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_1807CFEF0;
  return a1;
}
