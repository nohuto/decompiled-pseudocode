/*
 * XREFs of ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180140F7C
 * Callers:
 *     wil::details::lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___::_lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___ @ 0x18013B298 (wil--details--lambda_call__lambda_2c1c5ed8eae8d86e74e504b7d79e03ad___--_lambda_call__lambda_2c1c.c)
 *     ?InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z @ 0x18013DC74 (-InitializeGlobals@CSpatialProperties@@AEAAJPEBU_tlgProvider_t@@@Z.c)
 *     ?ShutdownGlobals@CSpatialProperties@@AEAAXXZ @ 0x180140D54 (-ShutdownGlobals@CSpatialProperties@@AEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMixedRealitySpatialAudioFormatPolicyChange@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013E8B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMixedRealitySpat.c)
 */

__int64 wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = CSpatialProperties::s_exclusiveModeListener;
  CSpatialProperties::s_exclusiveModeListener = 0LL;
  if ( v0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::Release(v0);
  return result;
}
