/*
 * XREFs of ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x140026A60
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400232F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400241A8 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140024F54 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14002563C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026610 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140026C04 (-TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140026F5C (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?InitLoggingInfo@CAudioPump@@UEAAJPEBU_tlgProvider_t@@U_GUID@@PEBG@Z @ 0x140042F40 (-InitLoggingInfo@CAudioPump@@UEAAJPEBU_tlgProvider_t@@U_GUID@@PEBG@Z.c)
 *     ?GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z @ 0x14004D424 (-GetEffectPackDevNodeId@@YAJU_GUID@@PEAPEAG@Z.c)
 *     ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14006BDC4 (-CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBR.c)
 * Callees:
 *     StringCopyWorkerW_0 @ 0x140064414 (StringCopyWorkerW_0.c)
 *     StringExHandleFillBehindNullW @ 0x140064490 (StringExHandleFillBehindNullW.c)
 *     StringExValidateDestW @ 0x1400644B8 (StringExValidateDestW.c)
 *     StringExValidateSrcW @ 0x1400644DC (StringExValidateSrcW.c)
 */

__int64 __fastcall _AllocString<CTCoAllocPolicy>(size_t a1, __int64 a2, const wchar_t *a3, const wchar_t **a4)
{
  size_t v6; // rbx
  unsigned __int64 v7; // rsi
  const wchar_t *v8; // rax
  size_t v9; // r8
  DWORD v10; // r9d
  wchar_t *v11; // r14
  __int64 result; // rax
  size_t v13; // r8
  DWORD v14; // r9d
  HRESULT v15; // eax
  DWORD v16; // r8d
  unsigned __int64 v17; // rsi
  size_t pcchNewDestLength[7]; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchToRead; // [rsp+70h] [rbp+8h] BYREF
  STRSAFE_PCNZWCH ppszSrc; // [rsp+88h] [rbp+20h] BYREF

  pcchToRead = a1;
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = v6 + 1;
  *a4 = 0LL;
  if ( v6 + 1 < v6 )
    return 2147942934LL;
  *a4 = 0LL;
  pcchToRead = 0LL;
  if ( !is_mul_ok(v7, 2uLL) )
    return 2147942934LL;
  v8 = (const wchar_t *)CoTaskMemAlloc(2 * v7);
  *a4 = v8;
  v11 = (wchar_t *)v8;
  if ( !v8 )
    return 2147942414LL;
  pcchToRead = v6;
  ppszSrc = a3;
  if ( StringExValidateDestW(v8, v6 + 1, v9, v10) < 0 )
  {
    result = 0LL;
    if ( v6 != -1LL )
      *v11 = 0;
  }
  else
  {
    if ( StringExValidateSrcW(&ppszSrc, &pcchToRead, v13, v14) < 0 )
    {
      if ( v6 != -1LL )
        *v11 = 0;
    }
    else if ( v6 != -1LL )
    {
      pcchNewDestLength[0] = 0LL;
      v15 = StringCopyWorkerW_0(v11, v6 + 1, pcchNewDestLength, ppszSrc, pcchToRead);
      v17 = v7 - pcchNewDestLength[0];
      if ( v15 >= 0 && v17 > 1 )
        StringExHandleFillBehindNullW(&v11[pcchNewDestLength[0]], 2 * v17, v16);
    }
    return 0LL;
  }
  return result;
}
