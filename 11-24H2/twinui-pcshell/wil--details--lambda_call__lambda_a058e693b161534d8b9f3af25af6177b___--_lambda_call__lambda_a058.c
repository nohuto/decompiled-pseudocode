/*
 * XREFs of wil::details::lambda_call__lambda_a058e693b161534d8b9f3af25af6177b___::_lambda_call__lambda_a058e693b161534d8b9f3af25af6177b___ @ 0x1804F8D90
 * Callers:
 *     _GamingPosturePositioner::ControlGained_::_1_::dtor$2 @ 0x1806F1158 (_GamingPosturePositioner--ControlGained_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_a058e693b161534d8b9f3af25af6177b___::_lambda_call__lambda_a058e693b161534d8b9f3af25af6177b___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 787) = 0;
  }
  return result;
}
