/*
 * XREFs of ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800361B0
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180031D9C (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180035CD0 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180036734 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180036E18 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x180063690 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180066618 (-GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18007F65C (-GetConnectorProcessingModeCount@EffectPack@@QEAAIW4__MIDL___MIDL_itf_audioengineendpoint_0000_0.c)
 *     _lambda_f318f87950837fa021a8ed1b2df6ff30_::operator() @ 0x18012A524 (_lambda_f318f87950837fa021a8ed1b2df6ff30_--operator().c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180036310 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPack::GetSupportedConnectorModesInternal(_QWORD *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  BOOL v9; // r14d
  __int64 v10; // rsi
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v4 = (int)a2;
  v7 = a1;
  if ( (_DWORD)a2 )
    goto LABEL_8;
  v8 = a1[198];
  if ( *(_BYTE *)(v8 + 8235) )
    goto LABEL_8;
  a1 = *(_QWORD **)(v8 + 80);
  v9 = 1;
  if ( !a1 )
    goto LABEL_8;
  v13 = 0LL;
  *(_OWORD *)pvar = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, const PROPERTYKEY *, PROPVARIANT *))(*a1 + 40LL))(
         a1,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v9 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v9 || a3 == 1 )
  {
LABEL_8:
    if ( !a4 )
    {
      if ( v4 >= v7[180] )
        goto LABEL_17;
      v10 = 96 * v4;
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v4 + v7[181]));
      if ( v4 >= v7[182] )
        goto LABEL_17;
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + v7[183]));
      if ( v4 >= v7[184] )
        goto LABEL_17;
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + v7[185]));
    }
    if ( v4 < v7[214] )
      return v7[215] + 16 * v4;
LABEL_17:
    _o_terminate(a1, a2);
    __debugbreak();
    JUMPOUT(0x180036302LL);
  }
  return (__int64)(v7 + 250);
}
