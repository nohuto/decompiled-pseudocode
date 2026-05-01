/*
 * XREFs of ??1?$ComPtr@V?$ShellPositionerCallback@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Details@ShellPositionerHelpers@@@WRL@Microsoft@@QEAA@XZ @ 0x1802BB430
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_1f0bee7b591eec396a7438297aca16b6____::_1_::dtor$2 @ 0x1806D4B1E (_ShellPositionerHelpers--PerformCallbackOnView__lambda_1f0bee7b591eec396a7438297aca16b6____--_1_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002CCD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>>::~ComPtr<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
