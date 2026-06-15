/*
 * XREFs of ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640
 * Callers:
 *     ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18000A510 (-GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18000A890 (-InitializeAPOs@CVolumeStrip@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18000ABD0 (-ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?StartStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x18000AF70 (-StartStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StopStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x18000B0E0 (-StopStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?StopStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x18000B23C (-StopStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?StartStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x18000B2F0 (-StartStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18000B3A0 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ??1CAPOWrapperClient@@UEAA@XZ @ 0x18000BEEC (--1CAPOWrapperClient@@UEAA@XZ.c)
 *     ?DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x18000C038 (-DestroyStream@CStreamInstanceProxyImpl@@IEAAJXZ.c)
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000C210 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18000C500 (-IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x18002599C (--1CProcessSubmixProxy@@MEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180056D60 (-RuntimeClassInitialize@CAPOWrapperClient@@QEAAJPEBGW4APO_TYPE@@AEBU_GUID@@@Z.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUIAudioModeEffectsWatcher@@@Z @ 0x180059270 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ??1CStreamInstanceProxy@@UEAA@XZ @ 0x1800617BC (--1CStreamInstanceProxy@@UEAA@XZ.c)
 *     ?DisconnectFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180063AF0 (-DisconnectFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ConnectToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180063EF0 (-ConnectToStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x180064D60 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180065060 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18006CC74 (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180078370 (-StartStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180079C00 (-InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x18007EFA0 (-StopStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180084790 (-IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180089E24 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z @ 0x18008ADC8 (-Initialize@CStreamInstanceProxyImpl@@IEAAJ_J@Z.c)
 *     ?GetControllableSystemEffectsList@CAPOWrapperClient@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z @ 0x1800AF300 (-GetControllableSystemEffectsList@CAPOWrapperClient@@UEAAJPEAPEAUAUDIO_SYSTEMEFFECT@@PEAIPEAX@Z.c)
 *     ?GetDesiredReferenceStreamProperties@CAPOWrapperClient@@UEAAJPEAW4APO_REFERENCE_STREAM_PROPERTIES@@@Z @ 0x1800AF4A0 (-GetDesiredReferenceStreamProperties@CAPOWrapperClient@@UEAAJPEAW4APO_REFERENCE_STREAM_PROPERTIE.c)
 *     ?GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x1800AF5A0 (-GetExtendedProperties@CAPOWrapperClient@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ?GetInputChannelCount@CAPOWrapperClient@@UEAAJPEAI@Z @ 0x1800AF780 (-GetInputChannelCount@CAPOWrapperClient@@UEAAJPEAI@Z.c)
 *     ?GetLatency@CAPOWrapperClient@@UEAAJPEA_J@Z @ 0x1800AF820 (-GetLatency@CAPOWrapperClient@@UEAAJPEA_J@Z.c)
 *     ?GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800AF8C0 (-GetPreferredInputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?GetPreferredOutputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x1800AFA50 (-GetPreferredOutputFormat@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z.c)
 *     ?GetRegistrationProperties@CAPOWrapperClient@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x1800AFBE0 (-GetRegistrationProperties@CAPOWrapperClient@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?Reset@CAPOWrapperClient@@UEAAJXZ @ 0x1800AFE30 (-Reset@CAPOWrapperClient@@UEAAJXZ.c)
 *     _lambda_a4cb84fa65d51627a0f7f0ac7469365e_::operator() @ 0x1800EF1F4 (_lambda_a4cb84fa65d51627a0f7f0ac7469365e_--operator().c)
 *     _lambda_d7b7c63bb19bd4dc54ca7775a1234c2f_::operator() @ 0x1800EF510 (_lambda_d7b7c63bb19bd4dc54ca7775a1234c2f_--operator().c)
 *     ?ConnectToBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800EFC70 (-ConnectToBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z.c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x1800EFF40 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 *     ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1800F02B0 (-CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DES.c)
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800F07C0 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DisconnectFromBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800F0B70 (-DisconnectFromBridgeStream@CSharedStreamGroupProxy@@UEAAJPEAUIBridgeStreamInstanceProxy@@@Z.c)
 *     ?DisconnectFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800F0E40 (-DisconnectFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x18004E540 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 */

LARGE_INTEGER *__fastcall CPerfTracker::CPerfTracker(
        LARGE_INTEGER *lpPerformanceCount,
        const struct _tlgProvider_t *a2,
        const char *a3,
        const char *const a4)
{
  LARGE_INTEGER *v5; // rbx
  LARGE_INTEGER *v7; // rcx
  __int64 v8; // rdx
  const char *v9; // r14
  char v10; // al
  _BYTE *v11; // rax

  lpPerformanceCount->QuadPart = 0LL;
  v5 = lpPerformanceCount + 11;
  lpPerformanceCount[1].QuadPart = 0LL;
  lpPerformanceCount[2].QuadPart = 0LL;
  v7 = lpPerformanceCount + 3;
  *(_OWORD *)&v7->LowPart = 0LL;
  *(_OWORD *)&v7[2].LowPart = 0LL;
  *(_OWORD *)&v7[4].LowPart = 0LL;
  *(_OWORD *)&v7[6].LowPart = 0LL;
  *(_OWORD *)&v5->LowPart = 0LL;
  *(_OWORD *)&v5[2].LowPart = 0LL;
  *(_OWORD *)&v5[4].LowPart = 0LL;
  *(_OWORD *)&v5[6].LowPart = 0LL;
  *(_OWORD *)&v5[8].LowPart = 0LL;
  *(_OWORD *)&v5[10].LowPart = 0LL;
  *(_OWORD *)&v5[12].LowPart = 0LL;
  *(_OWORD *)&v5[14].LowPart = 0LL;
  lpPerformanceCount[29].QuadPart = (LONGLONG)a2;
  StringCchPrintfExA(
    (char *)v7,
    0x40uLL,
    (char **)&lpPerformanceCount[27],
    (unsigned __int64 *)&lpPerformanceCount[28].QuadPart,
    0,
    "%s",
    a3);
  StringCchPrintfExA((char *)lpPerformanceCount[27].QuadPart, lpPerformanceCount[28].QuadPart, 0LL, 0LL, 0, "-Start");
  if ( a4 )
  {
    v8 = 128LL;
    v9 = (const char *)(a4 - (const char *const)v5);
    do
    {
      if ( v8 == -2147483518 )
        break;
      v10 = *((_BYTE *)&v5->QuadPart + (_QWORD)v9);
      if ( !v10 )
        break;
      LOBYTE(v5->LowPart) = v10;
      v5 = (LARGE_INTEGER *)((char *)v5 + 1);
      --v8;
    }
    while ( v8 );
    v11 = (char *)&v5[-1].QuadPart + 7;
    if ( v8 )
      v11 = v5;
    *v11 = 0;
  }
  QueryPerformanceCounter(lpPerformanceCount);
  QueryPerformanceFrequency(lpPerformanceCount + 2);
  return lpPerformanceCount;
}
