/*
 * XREFs of ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180042EEC
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x180042B30 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAAEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@$$QEAV21@@Z @ 0x18004297C (--$_Emplace_back_with_unused_capacity@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSu.c)
 *     ??1?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@QEAA@XZ @ 0x180042B00 (--1-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete@VCConnectorProcessin.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800437C0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800449C0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     ?reset@?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@@wil@@QEAAXXZ @ 0x180086D2C (-reset@-$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@.c)
 *     ?GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAV?$unique_any_array_ptr@PEAUtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@U23@@wil@@@Z @ 0x180091A08 (-GetConnectorProcessingModeDataFormatsFromDriver@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180126C8C (--$_Emplace_reallocate@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7)
{
  int ConnectorProcessingModeDataFormatsFromDriver; // eax
  unsigned int v10; // ebx
  CConnectorProcessingModeCharacteristics *v11; // rax
  CConnectorProcessingModeCharacteristics *v12; // rbx
  int v13; // edx
  __int64 v14; // rsi
  const struct tWAVEFORMATEX **v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r12
  unsigned int v18; // r14d
  const struct tWAVEFORMATEX *v19; // rax
  __int64 v20; // rdx
  unsigned int v22; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v23; // [rsp+74h] [rbp-3Dh] BYREF
  unsigned int v24; // [rsp+78h] [rbp-39h] BYREF
  int v25; // [rsp+7Ch] [rbp-35h]
  __int128 v26; // [rsp+80h] [rbp-31h] BYREF
  int v27[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v28; // [rsp+98h] [rbp-19h]
  _OWORD v29[5]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]
  CConnectorProcessingModeCharacteristics *v31; // [rsp+100h] [rbp+4Fh] BYREF
  unsigned int v32; // [rsp+108h] [rbp+57h] BYREF
  unsigned int v33; // [rsp+110h] [rbp+5Fh]
  __int64 v34; // [rsp+118h] [rbp+67h]

  v34 = a4;
  v33 = a3;
  *(_QWORD *)v27 = 0LL;
  v28 = 0LL;
  v26 = *a2;
  ConnectorProcessingModeDataFormatsFromDriver = GetConnectorProcessingModeDataFormatsFromDriver(
                                                   (_DWORD)g_DeviceEnumerator,
                                                   *(_QWORD *)(a1 + 72),
                                                   (unsigned int)&v26,
                                                   a3,
                                                   (__int64)v27);
  v10 = ConnectorProcessingModeDataFormatsFromDriver;
  if ( ConnectorProcessingModeDataFormatsFromDriver < 0 )
  {
    if ( ConnectorProcessingModeDataFormatsFromDriver != -2147467262
      && ConnectorProcessingModeDataFormatsFromDriver != -2147023728
      && ConnectorProcessingModeDataFormatsFromDriver != -2147024846 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1147,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)ConnectorProcessingModeDataFormatsFromDriver);
    }
    goto LABEL_23;
  }
  v11 = (CConnectorProcessingModeCharacteristics *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  v31 = v11;
  if ( v11 )
  {
    *(_OWORD *)v11 = *a2;
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 5) = 0LL;
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)&v26 = v12;
  if ( !v12 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x114A,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>((CConnectorProcessingModeCharacteristics **)&v26);
LABEL_23:
    wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(v27);
    return v10;
  }
  v13 = a5 + 2;
  v25 = v13;
  v14 = 0LL;
  v15 = *(const struct tWAVEFORMATEX ***)v27;
  v16 = v28;
  v17 = *(_QWORD *)v27 + 8 * v28;
  if ( *(_QWORD *)v27 != v17 )
  {
    v18 = v33;
    do
    {
      v24 = 0;
      v22 = 0;
      v32 = 0;
      v23 = 0;
      LODWORD(v31) = 0;
      v19 = *v15;
      v29[0] = *a2;
      if ( (int)DiscoverPeriodicityCharacteristicsForFormat(
                  *(_QWORD *)(a1 + 40),
                  *(unsigned int *)(a1 + 236),
                  v18,
                  v29,
                  v19,
                  v34,
                  v13,
                  a6,
                  &v24,
                  &v23,
                  &v22,
                  &v32,
                  &v31) >= 0 )
      {
        CConnectorProcessingModeCharacteristics::AddConnectorFormat(v12, *v15, v24, v23, v22, v32, (unsigned int)v31);
        ++v14;
      }
      ++v15;
      v13 = v25;
    }
    while ( v15 != (const struct tWAVEFORMATEX **)v17 );
    v16 = v28;
    if ( v14 )
    {
      v20 = *(_QWORD *)(a7 + 8);
      if ( v20 == *(_QWORD *)(a7 + 16) )
        std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Emplace_reallocate<std::unique_ptr<CConnectorProcessingModeCharacteristics>>(
          a7,
          v20,
          &v26);
      else
        std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_back_with_unused_capacity<std::unique_ptr<CAppSubmixClient>>(
          a7,
          (__int64)&v26);
    }
  }
  if ( v14 != v16 )
    *(_DWORD *)(a1 + 260) = 1;
  std::unique_ptr<CConnectorProcessingModeCharacteristics>::~unique_ptr<CConnectorProcessingModeCharacteristics>((CConnectorProcessingModeCharacteristics **)&v26);
  wil::unique_any_array_ptr<tWAVEFORMATEX *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(v27);
  return 0LL;
}
