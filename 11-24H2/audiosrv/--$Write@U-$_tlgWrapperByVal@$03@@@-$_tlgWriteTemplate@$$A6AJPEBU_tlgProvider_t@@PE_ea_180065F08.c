/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180065F08
 * Callers:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180065858 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer_Old@$00@@AEAA_NXZ @ 0x1800AF808 (-IsFirstHang@-$CWatchdogTimer_Old@$00@@AEAA_NXZ.c)
 *     ?LooksLikeWeAreHung_Old@CAudioHealthMonitor@@AEAAXKPEBG@Z @ 0x1800B489C (-LooksLikeWeAreHung_Old@CAudioHealthMonitor@@AEAAXKPEBG@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B809C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ??1CAudioSrv@@UEAA@XZ @ 0x1800CB9E4 (--1CAudioSrv@@UEAA@XZ.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800CC510 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800DD544 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800DDBD4 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 *     ?OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z @ 0x18010D3B0 (-OnPoStandbyAudioRequestReceived@@YAJW4_PO_STANDBY_AUDIO_POLICY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rax
  unsigned __int16 *v6; // rdx
  _DWORD v8[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  unsigned __int16 *v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+54h] [rbp-2Ch]
  unsigned __int16 *v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  __int64 v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  int v18; // [rsp+74h] [rbp-Ch]

  v18 = 0;
  v16 = a5;
  v8[0] = *a2 << 24;
  v8[1] = *(unsigned __int16 *)(a2 + 1);
  v5 = *(_QWORD *)(a2 + 3);
  v6 = (unsigned __int16 *)(a2 + 11);
  v9 = v5;
  v10 = *(unsigned __int16 **)(a1 + 8);
  v17 = 4;
  v11 = *v10;
  v14 = *v6;
  v13 = v6;
  v12 = 2;
  v15 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v8, 0LL, 0LL);
}
