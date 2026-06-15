/*
 * XREFs of ?OnDeviceFormatChanged@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@@Z @ 0x180101080
 * Callers:
 *     <none>
 * Callees:
 *     IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x1800AAFB4 (IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent.c)
 */

__int64 __fastcall CPolicyConfig::OnDeviceFormatChanged(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3)
{
  if ( IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent() )
    AudioPolicyManagerExtension_OnDeviceFormatChanged(a2, a3);
  return 0LL;
}
