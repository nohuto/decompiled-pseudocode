/*
 * XREFs of ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x180061E80
 * Callers:
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800334C0 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180061BEC (-RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x180061D88 (_lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_--operator().c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180089E24 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18008FF40 (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800E7120 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800E9B10 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18006206C (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

struct _GUID *__fastcall EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(
        EffectPack *this,
        struct _GUID *__return_ptr retstr,
        int a3,
        struct _GUID *a4)
{
  char *v5; // r10
  __int64 v7; // r11
  int i; // eax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  GUID v11; // xmm0
  struct _GUID *result; // rax
  __int64 v13; // r8
  int j; // eax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  GUID v17; // [rsp+20h] [rbp-28h]

  v5 = (char *)this + 1888;
  if ( (unsigned __int64)a3 >= *((_QWORD *)this + 236) )
  {
    _o_terminate(this, retstr);
    __debugbreak();
    JUMPOUT(0x180061FA1LL);
  }
  v7 = *((_QWORD *)this + 237);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(v7 + 24LL * a3 + 16) )
      goto LABEL_8;
    v9 = (_QWORD *)(*(_QWORD *)(v7 + 24LL * a3) + 16LL * i);
    v10 = *v9 - *(_QWORD *)&a4->Data1;
    if ( *v9 == *(_QWORD *)&a4->Data1 )
      v10 = v9[1] - *(_QWORD *)a4->Data4;
    if ( !v10 )
      break;
  }
  if ( i == -1 )
  {
LABEL_8:
    v11 = *a4;
    goto LABEL_9;
  }
  v13 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](v5, a3);
  v17 = *a4;
  for ( j = 0; ; ++j )
  {
    if ( j >= *(_DWORD *)(v13 + 16) )
      goto LABEL_20;
    v15 = (_QWORD *)(*(_QWORD *)v13 + 16LL * j);
    v16 = *v15 - *(_QWORD *)&v17.Data1;
    if ( *v15 == *(_QWORD *)&v17.Data1 )
      v16 = v15[1] - *(_QWORD *)v17.Data4;
    if ( !v16 )
      break;
  }
  if ( j == -1 )
  {
LABEL_20:
    v11 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_9;
  }
  if ( j < 0 )
  {
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v15);
    __debugbreak();
  }
  v11 = *(GUID *)(*(_QWORD *)(v13 + 8) + 16LL * j);
LABEL_9:
  result = retstr;
  *retstr = v11;
  return result;
}
