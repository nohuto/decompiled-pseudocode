/*
 * XREFs of wil::details::lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___::_lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___ @ 0x180128748
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     _EffectPack::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$11 @ 0x180161555 (_EffectPack--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$11.c)
 * Callees:
 *     _lambda_950500107a52a887eceb6991ca1e1e73_::operator() @ 0x1801297F0 (_lambda_950500107a52a887eceb6991ca1e1e73_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___::_lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_950500107a52a887eceb6991ca1e1e73_::operator()();
  }
  return result;
}
