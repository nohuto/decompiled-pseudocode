/*
 * XREFs of ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18008C498
 * Callers:
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180054864 (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x180136B84 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJAEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18003F854 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18003F9E0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180046590 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ?CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormats@@@Z @ 0x180066F74 (-CacheUnsupportedConnectorFormats@CEndpointCharacteristics@@AEAAXPEAVCUnsupportedConnectorFormat.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18006CE50 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18006D33C (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x1800728F8 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x180074070 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x18008CA00 (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800A1D24 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??1?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@QEAA@XZ @ 0x1801308D8 (--1-$unique_ptr@UPacketSizeConstraints@@U-$default_delete@UPacketSizeConstraints@@@std@@@std@@QE.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x180167504 (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV-$unique_ptr@UPac.c)
 *     _alloca_probe @ 0x180167ED0 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(CEndpointCharacteristics *this)
{
  int v2; // r15d
  struct KSMULTIPLE_ITEM *v3; // rbx
  ULONG Count; // r12d
  struct KSMULTIPLE_ITEM *v5; // r13
  int SupportedDataRangeForEndpoint; // eax
  struct KSMULTIPLE_ITEM *v7; // rdi
  int PacketSizeConstraints; // eax
  __int64 OemEnginePeriodicity; // rdx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG v15; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  __int64 pvData; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  struct KSMULTIPLE_ITEM *v19; // [rsp+68h] [rbp-98h] BYREF
  const WCHAR *v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 TimeSec; // [rsp+78h] [rbp-88h] BYREF
  int v22; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  struct KSMULTIPLE_ITEM *v24; // [rsp+90h] [rbp-70h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER Frequency; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v28[57]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+194h] [rbp+94h]
  int v30; // [rsp+119Ch] [rbp+109Ch]
  GUID v31; // [rsp+11A0h] [rbp+10A0h]
  _DWORD v32[57]; // [rsp+11B0h] [rbp+10B0h] BYREF
  __int64 v33; // [rsp+1294h] [rbp+1194h]
  int v34; // [rsp+229Ch] [rbp+219Ch]
  GUID v35; // [rsp+22A0h] [rbp+21A0h]

  v2 = 0;
  if ( (int)CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(this) < 0 )
  {
    v24 = 0LL;
    v3 = 0LL;
    v19 = 0LL;
    v23 = 0LL;
    Count = 0;
    v15 = 0;
    v5 = 0LL;
    v20 = 0LL;
    PerformanceCount.QuadPart = 0LL;
    v25 = 0LL;
    QueryPerformanceFrequency(&Frequency);
    CQPCStopWatch::Start((CQPCStopWatch *)&v25);
    SupportedDataRangeForEndpoint = GetSupportedDataRangeForEndpoint(
                                      eHostProcessConnector,
                                      *((struct IMMDevice **)this + 5),
                                      &v24);
    v7 = v24;
    if ( SupportedDataRangeForEndpoint >= 0 )
    {
      Count = v24->Count;
      v5 = v24 + 1;
    }
    PacketSizeConstraints = GetPacketSizeConstraints(g_DeviceEnumerator, *((_QWORD *)this + 9), &v23);
    v2 = 0;
    if ( PacketSizeConstraints != -2147023728 )
      v2 = PacketSizeConstraints;
    LODWORD(pvData) = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"ProbeForMinimumPeriod",
      0x18u,
      0LL,
      &pvData,
      &pcbData);
    v22 = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"MaxCapturePeriodicityInMs",
      0x18u,
      0LL,
      &v22,
      &pcbData);
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
    TimeSec = OemEnginePeriodicity;
    v10 = v23;
    if ( v2 >= 0 && *((_DWORD *)this + 64) )
    {
      v28[0] = 3;
      v29 = 0LL;
      v30 = 0;
      v31 = GUID_00000000_0000_0000_0000_000000000000;
      v11 = GetSupportedDataRangeForEndpoint(eKeywordDetectorConnector, *((struct IMMDevice **)this + 5), &v19);
      v3 = v19;
      if ( v11 >= 0 )
      {
        v15 = v19->Count;
        v20 = (const WCHAR *)&v19[1];
      }
      v2 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
             (__int64)this,
             3LL,
             v15,
             (__int64)v20,
             v10,
             (_DWORD)pvData != 0,
             TimeSec,
             (__int64)this + 296,
             (char)v28);
      CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v28);
      OemEnginePeriodicity = TimeSec;
    }
    v32[0] = 0;
    v33 = 0LL;
    v34 = 0;
    v35 = GUID_00000000_0000_0000_0000_000000000000;
    if ( v2 >= 0 )
    {
      v2 = CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
             (__int64)this,
             0LL,
             Count,
             (__int64)v5,
             v10,
             (_DWORD)pvData != 0,
             OemEnginePeriodicity,
             (__int64)this + 272,
             (char)v32);
      if ( v2 >= 0 && !*((_DWORD *)this + 65) )
        CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
    }
    CEndpointCharacteristics::CacheUnsupportedConnectorFormats(this, (struct CUnsupportedConnectorFormats *)v32);
    QueryPerformanceCounter(&PerformanceCount);
    pv = 0LL;
    if ( (int)CEndpointCharacteristics::GetEndpointId(this, (unsigned __int16 **)&pv) >= 0
      && **((_DWORD **)this + 1036) > 4u
      && tlgKeywordOn(*((_QWORD *)this + 1036), 0x200000000010LL) )
    {
      TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v25);
      v15 = v2;
      v20 = (const WCHAR *)pv;
      v19 = (struct KSMULTIPLE_ITEM *)2048;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v12,
        (int)&unk_1801AFD2D,
        v12,
        v13,
        (__int64)&v19,
        &v20,
        (__int64)&v15,
        (__int64)&TimeSec);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    std::unique_ptr<PacketSizeConstraints>::~unique_ptr<PacketSizeConstraints>(&v23);
    CoTaskMemFree(v3);
    CoTaskMemFree(v7);
  }
  return (unsigned int)v2;
}
