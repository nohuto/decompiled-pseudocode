/*
 * XREFs of _lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_ @ 0x1802E2DD8
 * Callers:
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1802ECB88 (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::_lambda_2cec81e5a08c64ba5d30bf166a2a5e31_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 *v6; // rcx

  a1[1] = *a3;
  a1[2] = *a4;
  *a1 = a2;
  v6 = a1 + 3;
  *v6 = *a5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
  return a1;
}
