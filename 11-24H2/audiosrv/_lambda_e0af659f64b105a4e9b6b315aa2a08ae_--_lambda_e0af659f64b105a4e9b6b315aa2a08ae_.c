/*
 * XREFs of _lambda_e0af659f64b105a4e9b6b315aa2a08ae_::_lambda_e0af659f64b105a4e9b6b315aa2a08ae_ @ 0x18010B698
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18000DA40 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e0af659f64b105a4e9b6b315aa2a08ae_::_lambda_e0af659f64b105a4e9b6b315aa2a08ae_(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = a2[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v4 = *a3;
  *(_QWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = a2[1];
  result = a1;
  *(_OWORD *)(a1 + 16) = v4;
  return result;
}
