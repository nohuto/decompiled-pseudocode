/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(IInspectable___unsigned_char)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___1_IInspectable___unsigned_char_::Invoke @ 0x1800E0A00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800C4930 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_701f9db595b52d3fc136544516ee8948_::operator() @ 0x1800E01CC (_lambda_701f9db595b52d3fc136544516ee8948_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___IInspectable___unsigned_char__::DelegateInvokeHelper_Windows::Foundation::IEventHandler_bool___lambda_701f9db595b52d3fc136544516ee8948___1_IInspectable___unsigned_char_::Invoke(
        __int64 a1,
        const unsigned __int16 *a2)
{
  signed int v2; // eax
  unsigned int v3; // ebx

  v2 = lambda_701f9db595b52d3fc136544516ee8948_::operator()((ULONG_PTR *)(a1 + 16), a2);
  v3 = v2;
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  return v3;
}
