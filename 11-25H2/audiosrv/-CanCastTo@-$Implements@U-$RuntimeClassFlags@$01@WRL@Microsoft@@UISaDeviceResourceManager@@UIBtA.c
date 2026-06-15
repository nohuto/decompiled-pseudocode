/*
 * XREFs of ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISaDeviceResourceManager@@UIBtAudioResourceManager@@UISessionInternalEvents@@UIEndpointCustomFormatHandler@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ECD64
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtAudioResourceManagerBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED310 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtAudioR.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180050C50 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIBtAudioResourceManager@@UISessionInternalEvents@@UIEndpointCustomFormatHandler@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800ECDA8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIBtAudioResourceManage.c)
 */

__int64 __fastcall Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,ISaDeviceResourceManager,IBtAudioResourceManager,ISessionInternalEvents,IEndpointCustomFormatHandler>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // r9d

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_4d3814ae_3db5_4fb3_819c_1493075ce6e3);
  v6 = 0;
  if ( IsEqualGUID )
    *v3 = v4;
  else
    return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBtAudioResourceManager,ISessionInternalEvents,IEndpointCustomFormatHandler>::CanCastTo(
                           v4 + 8,
                           v5,
                           v3,
                           0LL);
  return v6;
}
