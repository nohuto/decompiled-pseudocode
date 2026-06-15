/*
 * XREFs of ?IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z @ 0x180100F48
 * Callers:
 *     s_IsProcessingModeSupportedOnHostConnector @ 0x180103050 (s_IsProcessingModeSupportedOnHostConnector.c)
 * Callees:
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x180035B48 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004B4A8 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::IsProcessingModeSupportedOnHostConnector(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct _GUID *a3)
{
  unsigned int v4; // ebx
  GUID v6; // [rsp+20h] [rbp-30h] BYREF
  __int128 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]

  v7 = 0LL;
  v4 = 0;
  v8 = 0LL;
  if ( (int)GetEndpointCharacteristicsDescriptor(a2, 0, (struct EndpointCharacteristicsDescriptor *)&v7) >= 0 )
  {
    v6 = *a3;
    if ( (unsigned int)EffectPack::IsConnectorModeSupported(*((_QWORD **)&v7 + 1), 0LL, 0, &v6)
      || (v6 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
          (unsigned int)EffectPack::IsConnectorModeSupported(*((_QWORD **)&v7 + 1), 0LL, 0, &v6)) )
    {
      v6 = *a3;
      if ( (unsigned int)EffectPack::IsAPOModeSupported(*((_QWORD **)&v7 + 1), 0LL, (__int128 *)&v6, 0) )
        v4 = 1;
    }
  }
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v7);
  return v4;
}
