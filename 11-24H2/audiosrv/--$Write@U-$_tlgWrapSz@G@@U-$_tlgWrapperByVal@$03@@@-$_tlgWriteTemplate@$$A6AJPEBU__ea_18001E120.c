/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001E120
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180009C2C (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18000AB70 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x18001D850 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001DA80 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x18003DA80 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180042840 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MigrateSpatialProperties @ 0x180068B40 (MigrateSpatialProperties.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800878B0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     AudioVolumeConnect @ 0x180087FA0 (AudioVolumeConnect.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18008AEB8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ??1?$CWatchdogTimer_Old@$00@@QEAA@XZ @ 0x1800AD7E4 (--1-$CWatchdogTimer_Old@$00@@QEAA@XZ.c)
 *     _lambda_2dbeb383abe4e3058f79ce1fc26f8e50_::operator() @ 0x1800C0B38 (_lambda_2dbeb383abe4e3058f79ce1fc26f8e50_--operator().c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800D2FD8 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x180102904 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 *     PolicyConfigSetDeviceFormat @ 0x180108440 (PolicyConfigSetDeviceFormat.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013C03C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18013CB8C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x18013EC20 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18013F840 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6)
{
  const WCHAR *v7; // rcx
  __int64 v8; // rax
  int v10; // eax
  _DWORD v12[2]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v13; // [rsp+40h] [rbp-68h]
  unsigned __int16 *v14; // [rsp+50h] [rbp-58h]
  int v15; // [rsp+58h] [rbp-50h]
  int v16; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int8 *v17; // [rsp+60h] [rbp-48h]
  int v18; // [rsp+68h] [rbp-40h]
  int v19; // [rsp+6Ch] [rbp-3Ch]
  const WCHAR *v20; // [rsp+70h] [rbp-38h]
  int v21; // [rsp+78h] [rbp-30h]
  int v22; // [rsp+7Ch] [rbp-2Ch]
  __int64 v23; // [rsp+80h] [rbp-28h]
  __int64 v24; // [rsp+88h] [rbp-20h]

  v23 = a6;
  v24 = 4LL;
  v7 = *a5;
  if ( *a5 )
  {
    v8 = -1LL;
    while ( v7[++v8] != 0 )
      ;
    v10 = 2 * v8 + 2;
  }
  else
  {
    v7 = &LocaleName;
    v10 = 2;
  }
  v21 = v10;
  v12[0] = *a2 << 24;
  v12[1] = *(unsigned __int16 *)(a2 + 1);
  v13 = *(_QWORD *)(a2 + 3);
  v14 = *(unsigned __int16 **)(a1 + 8);
  v20 = v7;
  v22 = 0;
  v15 = *v14;
  v17 = a2 + 11;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v16 = 2;
  v19 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v12, 0LL, 0LL);
}
