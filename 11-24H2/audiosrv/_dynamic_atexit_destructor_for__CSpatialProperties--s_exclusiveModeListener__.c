/*
 * XREFs of _dynamic_atexit_destructor_for__CSpatialProperties::s_exclusiveModeListener__ @ 0x180173330
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMixedRealitySpatialAudioFormatPolicyChange@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013E8B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMixedRealitySpat.c)
 */

__int64 dynamic_atexit_destructor_for__CSpatialProperties::s_exclusiveModeListener__()
{
  __int64 result; // rax

  if ( CSpatialProperties::s_exclusiveModeListener )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::Release(CSpatialProperties::s_exclusiveModeListener);
  return result;
}
