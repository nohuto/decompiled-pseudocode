/*
 * XREFs of ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180040B34
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x18004AB54 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     wil::details::lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___::_lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___ @ 0x1800A5DF4 (wil--details--lambda_call__lambda_e396111eb4c478e6ba8d1be5074c3579___--_lambda_call__lambda_e396.c)
 *     wil::details::lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___::_lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___ @ 0x1800A65A8 (wil--details--lambda_call__lambda_468acda44b4c3772750e5bffa51eb9a1___--_lambda_call__lambda_468a.c)
 *     _lambda_9137dbba075d897e82b5fd8c66242eba_::operator() @ 0x180129718 (_lambda_9137dbba075d897e82b5fd8c66242eba_--operator().c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18012E2DC (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18012E98C (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z @ 0x180041234 (-ClearMixFormatCache@@YAJPEAUIPropertyStore@@_N1@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::ClearMixFormatCache(__int64 a1, unsigned int a2)
{
  bool v2; // r8
  bool v3; // al
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( a2 <= 1 )
  {
    v3 = 1;
    if ( !a2 )
      goto LABEL_6;
  }
  else
  {
    v3 = 0;
  }
  if ( a2 != 2 )
    v2 = 0;
LABEL_6:
  v4 = ClearMixFormatCache(*(struct IPropertyStore **)(a1 + 72), v3, v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1BD1,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
