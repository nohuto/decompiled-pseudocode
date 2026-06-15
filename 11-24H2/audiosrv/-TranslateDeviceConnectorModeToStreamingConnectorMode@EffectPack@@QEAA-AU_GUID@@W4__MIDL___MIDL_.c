/*
 * XREFs of ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005473C
 * Callers:
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E710 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800544A8 (-RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_::operator() @ 0x180054644 (_lambda_b5d2e7512e0cec9d80c41e9eebd2b3f7_--operator().c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x18007B544 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18008C1D4 (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800EB570 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800EE800 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x180054928 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

struct _GUID *__fastcall EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(
        EffectPack *this,
        struct _GUID *__return_ptr retstr,
        int a3,
        struct _GUID *a4)
{
  char *v5; // r10
  __int64 v6; // r9
  __int64 v8; // r11
  __int64 v9; // r8
  int i; // eax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  GUID v13; // xmm0
  struct _GUID *result; // rax
  __int64 v15; // r8
  int j; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  GUID v19; // [rsp+20h] [rbp-28h]

  v5 = (char *)this + 1888;
  v6 = a3;
  if ( (unsigned __int64)a3 >= *((_QWORD *)this + 236) )
  {
    _o_terminate(this, retstr);
    __debugbreak();
    JUMPOUT(0x18005485DLL);
  }
  v8 = *((_QWORD *)this + 237);
  v9 = 3LL * a3;
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(v8 + 24 * v6 + 16) )
      goto LABEL_8;
    v11 = (_QWORD *)(*(_QWORD *)(v8 + 24 * v6) + 16LL * i);
    v12 = *v11 - *(_QWORD *)&a4->Data1;
    if ( *v11 == *(_QWORD *)&a4->Data1 )
      v12 = v11[1] - *(_QWORD *)a4->Data4;
    if ( !v12 )
      break;
  }
  if ( i == -1 )
  {
LABEL_8:
    v13 = *a4;
    goto LABEL_9;
  }
  v15 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](v5, v6, v9);
  v19 = *a4;
  for ( j = 0; ; ++j )
  {
    if ( j >= *(_DWORD *)(v15 + 16) )
      goto LABEL_20;
    v17 = (_QWORD *)(*(_QWORD *)v15 + 16LL * j);
    v18 = *v17 - *(_QWORD *)&v19.Data1;
    if ( *v17 == *(_QWORD *)&v19.Data1 )
      v18 = v17[1] - *(_QWORD *)v19.Data4;
    if ( !v18 )
      break;
  }
  if ( j == -1 )
  {
LABEL_20:
    v13 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_9;
  }
  if ( j < 0 )
  {
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v17);
    __debugbreak();
  }
  v13 = *(GUID *)(*(_QWORD *)(v15 + 8) + 16LL * j);
LABEL_9:
  result = retstr;
  *retstr = v13;
  return result;
}
