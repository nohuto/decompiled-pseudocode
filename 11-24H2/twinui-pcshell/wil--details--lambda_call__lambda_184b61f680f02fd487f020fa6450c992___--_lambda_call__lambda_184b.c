/*
 * XREFs of wil::details::lambda_call__lambda_184b61f680f02fd487f020fa6450c992___::_lambda_call__lambda_184b61f680f02fd487f020fa6450c992___ @ 0x1802CB160
 * Callers:
 *     _Utils::ProtocolLauncher::TryGetForUriScheme_::_1_::dtor$1 @ 0x1806FE403 (_Utils--ProtocolLauncher--TryGetForUriScheme_--_1_--dtor$1.c)
 * Callees:
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180288ABC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_184b61f680f02fd487f020fa6450c992___::_lambda_call__lambda_184b61f680f02fd487f020fa6450c992___(
        __int64 *a1)
{
  __int64 v1; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    tip2::details::shared_data<0,0,0>::complete_without_lock(*(_QWORD *)(v1 + 56) + 8LL);
  }
}
