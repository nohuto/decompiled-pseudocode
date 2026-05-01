/*
 * XREFs of wil::details::lambda_call__lambda_73237fb50d5bd92e4320b0bf879800c4___::_lambda_call__lambda_73237fb50d5bd92e4320b0bf879800c4___ @ 0x1804F8D74
 * Callers:
 *     _GamingPosturePositioner::HandleViewRecovery_::_1_::dtor$2 @ 0x1806F1560 (_GamingPosturePositioner--HandleViewRecovery_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_73237fb50d5bd92e4320b0bf879800c4___::_lambda_call__lambda_73237fb50d5bd92e4320b0bf879800c4___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 786) = 0;
  }
  return result;
}
