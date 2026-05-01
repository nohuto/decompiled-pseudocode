/*
 * XREFs of ??0?$ShellPositionerCallback@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Details@ShellPositionerHelpers@@QEAA@$$QEAV_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Z @ 0x1804EA7B8
 * Callers:
 *     ??$PerformCallbackOnView@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@ShellPositionerHelpers@@YAJPEAUIUnknown@@PEAUIApplicationView@@$$QEAV_lambda_1f0bee7b591eec396a7438297aca16b6_@@@Z @ 0x18014C140 (--$PerformCallbackOnView@V_lambda_1f0bee7b591eec396a7438297aca16b6_@@@ShellPositionerHelpers@@YA.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18002CD38 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 */

_QWORD *__fastcall ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)a1);
  a1[6] = *a2;
  v4 = a2 + 1;
  a1[7] = 0LL;
  if ( a1 + 7 != v4 )
  {
    a1[7] = *v4;
    *v4 = 0LL;
  }
  *a1 = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>::`vftable'{for `IShellPositionerCallback'};
  a1[1] = &ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_1f0bee7b591eec396a7438297aca16b6_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
