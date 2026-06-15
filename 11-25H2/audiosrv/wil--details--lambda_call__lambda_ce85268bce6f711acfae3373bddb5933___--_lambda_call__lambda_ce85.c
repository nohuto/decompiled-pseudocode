/*
 * XREFs of wil::details::lambda_call__lambda_ce85268bce6f711acfae3373bddb5933___::_lambda_call__lambda_ce85268bce6f711acfae3373bddb5933___ @ 0x1800B73DC
 * Callers:
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$10 @ 0x18016473A (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$10.c)
 * Callees:
 *     _lambda_ce85268bce6f711acfae3373bddb5933_::operator() @ 0x1800B82A4 (_lambda_ce85268bce6f711acfae3373bddb5933_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_ce85268bce6f711acfae3373bddb5933___::_lambda_call__lambda_ce85268bce6f711acfae3373bddb5933___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return lambda_ce85268bce6f711acfae3373bddb5933_::operator()();
  }
  return result;
}
