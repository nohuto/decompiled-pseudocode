/*
 * XREFs of ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18012F8D4
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 * Callees:
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180040350 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800437C0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800449C0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18007F72C (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x180085704 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ??1?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@QEAA@XZ @ 0x18012880C (--1-$unique_ptr@UPacketSizeConstraints@@U-$default_delete@UPacketSizeConstraints@@@std@@@std@@QE.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18015D768 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x18015DE44 (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV-$unique_ptr@UPac.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::TryAddFormat(
        CEndpointCharacteristics *this,
        struct EffectPack *a2,
        struct tWAVEFORMATEX *a3)
{
  int PacketSizeConstraints; // eax
  int v5; // edi
  __int64 OemEnginePeriodicity; // r9
  BOOL v7; // r8d
  char v8; // r15
  unsigned int v9; // r12d
  int *v10; // r13
  __int64 v11; // rbx
  int v12; // edx
  __int64 v13; // rax
  CConnectorProcessingModeCharacteristics **v14; // r14
  CConnectorProcessingModeCharacteristics **v15; // r12
  struct tWAVEFORMATEX *v16; // r13
  int v17; // eax
  int v18; // eax
  LPDWORD pcbData; // [rsp+30h] [rbp-79h]
  unsigned int v21; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v22; // [rsp+74h] [rbp-35h] BYREF
  unsigned int v23; // [rsp+78h] [rbp-31h] BYREF
  BOOL v24; // [rsp+7Ch] [rbp-2Dh]
  unsigned int v25; // [rsp+80h] [rbp-29h]
  DWORD v26; // [rsp+84h] [rbp-25h] BYREF
  int v27; // [rsp+88h] [rbp-21h]
  __int64 v28; // [rsp+90h] [rbp-19h] BYREF
  _DWORD v29[2]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-9h]
  int *v31; // [rsp+A8h] [rbp-1h]
  struct _GUID v32; // [rsp+B0h] [rbp+7h] BYREF
  unsigned int v33; // [rsp+110h] [rbp+67h] BYREF
  struct EffectPack *pvData; // [rsp+118h] [rbp+6Fh] BYREF
  struct tWAVEFORMATEX *v35; // [rsp+120h] [rbp+77h]
  unsigned int v36; // [rsp+128h] [rbp+7Fh] BYREF

  v35 = a3;
  pvData = a2;
  v28 = 0LL;
  v29[0] = 0;
  v29[1] = 3;
  PacketSizeConstraints = GetPacketSizeConstraints(g_DeviceEnumerator, *((_QWORD *)this + 9), &v28);
  v5 = 0;
  if ( PacketSizeConstraints != -2147023728 )
    v5 = PacketSizeConstraints;
  if ( v5 >= 0 )
  {
    LODWORD(pvData) = 0;
    v26 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"ProbeForMinimumPeriod",
      0x18u,
      0LL,
      &pvData,
      &v26);
    OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
    v30 = OemEnginePeriodicity;
    v7 = (_DWORD)pvData != 0;
    v24 = v7;
    v8 = 0;
    v9 = 0;
    v25 = 0;
    v10 = v29;
    v31 = v29;
    v11 = v28;
    do
    {
      v12 = *v10;
      v27 = v12;
      v13 = 296LL;
      if ( v12 != 3 )
        v13 = 272LL;
      v14 = *(CConnectorProcessingModeCharacteristics ***)((char *)this + v13);
      if ( v14 != *(CConnectorProcessingModeCharacteristics ***)((char *)this + v13 + 8) )
      {
        v15 = *(CConnectorProcessingModeCharacteristics ***)((char *)this + v13 + 8);
        v16 = v35;
        do
        {
          v23 = 0;
          v21 = 0;
          v36 = 0;
          v22 = 0;
          v33 = 0;
          v32 = *(struct _GUID *)*v14;
          LODWORD(pcbData) = v7;
          v17 = DiscoverPeriodicityCharacteristicsForFormat(
                  *((__int64 **)this + 5),
                  *((_DWORD *)this + 59),
                  v12,
                  &v32,
                  v16,
                  v11,
                  pcbData,
                  OemEnginePeriodicity,
                  &v23,
                  &v22,
                  &v21,
                  &v36,
                  &v33);
          if ( v17 < 0 )
          {
            if ( AEError::DeviceInUse((AEError *)(unsigned int)v17) )
            {
              CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(*v14, v16);
              *((_DWORD *)this + 65) = 1;
            }
            v5 = 0;
          }
          else
          {
            v18 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(*v14, v16, v23, v22, v21, v36, v33);
            v5 = v18;
            if ( v8 || v18 >= 0 )
              v8 = 1;
          }
          ++v14;
          v12 = v27;
          v7 = v24;
          OemEnginePeriodicity = v30;
        }
        while ( v14 != v15 );
        v9 = v25;
        v10 = v31;
      }
      v25 = ++v9;
      v31 = ++v10;
    }
    while ( v9 < 2 );
    if ( v8 && !*((_DWORD *)this + 65) )
      CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
  }
  std::unique_ptr<PacketSizeConstraints>::~unique_ptr<PacketSizeConstraints>(&v28);
  return (unsigned int)v5;
}
