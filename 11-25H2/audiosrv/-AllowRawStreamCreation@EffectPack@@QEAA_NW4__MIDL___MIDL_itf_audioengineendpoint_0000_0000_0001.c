/*
 * XREFs of ?AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18007A690
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     AudioServerIsRawStreamSupported @ 0x18006EE90 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x180035B48 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 */

char __fastcall EffectPack::AllowRawStreamCreation(EffectPack *this, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  int IsConnectorModeSupported; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r8
  GUID v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = (int)a2;
  v9 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  IsConnectorModeSupported = EffectPack::IsConnectorModeSupported(this, a2, 0, &v9);
  v7 = 0;
  if ( IsConnectorModeSupported )
  {
    if ( v2 >= *((_QWORD *)this + 219) )
    {
      _o_terminate(v6, v5);
      __debugbreak();
      JUMPOUT(0x18007A6FALL);
    }
    return *(_DWORD *)(*((_QWORD *)this + 220) + 4 * v2) == 0;
  }
  return v7;
}
