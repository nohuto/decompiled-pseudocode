/*
 * XREFs of LogDriverInfoStream @ 0x14007C9B0
 * Callers:
 *     ?PnpEventStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140073510 (-PnpEventStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400012F4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U?$_tlgWrapSz@G@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@66666666666666666666666AEBU?$_tlgWrapSz@G@@777@Z @ 0x140001444 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_t_ea_140001444.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     FxGetDevicePropertyString @ 0x140054D6C (FxGetDevicePropertyString.c)
 *     GetDriverInfo @ 0x14007CD68 (GetDriverInfo.c)
 *     RegistryWriteCurrentTime @ 0x14007CFA8 (RegistryWriteCurrentTime.c)
 *     GetFirstHardwareId @ 0x14007E174 (GetFirstHardwareId.c)
 */

void __fastcall LogDriverInfoStream(_FX_DRIVER_GLOBALS *DriverGlobals, FxDevice *Fdo)
{
  wchar_t *Buffer; // rbx
  wchar_t *v5; // rdi
  wchar_t *v6; // rsi
  const _GUID *v7; // r8
  const _GUID *v8; // r9
  FxTelemetryDriverInfo v9; // eax
  const _tlgProvider_t *v10; // rcx
  _tlgWrapperByVal<1> v11; // [rsp+120h] [rbp-80h] BYREF
  _tlgWrapperByVal<1> v12; // [rsp+121h] [rbp-7Fh] BYREF
  _tlgWrapperByVal<1> v13; // [rsp+122h] [rbp-7Eh] BYREF
  _tlgWrapperByVal<1> v14; // [rsp+123h] [rbp-7Dh] BYREF
  _tlgWrapperByVal<1> v15; // [rsp+124h] [rbp-7Ch] BYREF
  _tlgWrapperByVal<1> v16; // [rsp+125h] [rbp-7Bh] BYREF
  _tlgWrapperByVal<1> v17; // [rsp+126h] [rbp-7Ah] BYREF
  _tlgWrapperByVal<1> v18; // [rsp+127h] [rbp-79h] BYREF
  _tlgWrapperByVal<1> v19; // [rsp+128h] [rbp-78h] BYREF
  _tlgWrapperByVal<1> v20; // [rsp+129h] [rbp-77h] BYREF
  _tlgWrapperByVal<1> v21; // [rsp+12Ah] [rbp-76h] BYREF
  _tlgWrapperByVal<1> v22; // [rsp+12Bh] [rbp-75h] BYREF
  _tlgWrapperByVal<1> v23; // [rsp+12Ch] [rbp-74h] BYREF
  _tlgWrapperByVal<1> v24; // [rsp+12Dh] [rbp-73h] BYREF
  _tlgWrapperByVal<1> v25; // [rsp+12Eh] [rbp-72h] BYREF
  _tlgWrapperByVal<1> v26; // [rsp+12Fh] [rbp-71h] BYREF
  _tlgWrapperByVal<1> v27; // [rsp+130h] [rbp-70h] BYREF
  _tlgWrapperByVal<1> v28; // [rsp+131h] [rbp-6Fh] BYREF
  _tlgWrapperByVal<1> v29; // [rsp+132h] [rbp-6Eh] BYREF
  _tlgWrapperByVal<1> v30; // [rsp+133h] [rbp-6Dh] BYREF
  _tlgWrapperByVal<1> v31; // [rsp+134h] [rbp-6Ch] BYREF
  FxAutoString manufacturer; // [rsp+138h] [rbp-68h] BYREF
  FxAutoString busEnum; // [rsp+148h] [rbp-58h] BYREF
  FxAutoString setupClass; // [rsp+158h] [rbp-48h] BYREF
  FxAutoString hardwareIDs; // [rsp+168h] [rbp-38h] BYREF
  _tlgWrapSz<unsigned short> v36; // [rsp+178h] [rbp-28h] BYREF
  _tlgWrapSz<unsigned short> v37; // [rsp+180h] [rbp-20h] BYREF
  _tlgWrapSz<unsigned short> hProvider; // [rsp+188h] [rbp-18h] BYREF
  _tlgWrapSz<unsigned short> v39; // [rsp+190h] [rbp-10h] BYREF
  FxTelemetryDriverInfo driverInfo; // [rsp+1D8h] [rbp+38h] BYREF
  _tlgWrapperByVal<1> v41; // [rsp+1E0h] [rbp+40h] BYREF
  _tlgWrapperByVal<1> v42; // [rsp+1E8h] [rbp+48h] BYREF

  driverInfo.Dword = 0;
  hardwareIDs = 0LL;
  setupClass = 0LL;
  busEnum = 0LL;
  manufacturer = 0LL;
  GetDriverInfo(DriverGlobals, Fdo, &driverInfo);
  if ( Fdo )
  {
    FxGetDevicePropertyString(Fdo, 5u, &setupClass.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 0xFu, &busEnum.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 1u, &hardwareIDs.m_UnicodeString);
    GetFirstHardwareId(&hardwareIDs.m_UnicodeString);
    FxGetDevicePropertyString(Fdo, 8u, &manufacturer.m_UnicodeString);
  }
  Buffer = setupClass.m_UnicodeString.Buffer;
  v5 = busEnum.m_UnicodeString.Buffer;
  v6 = manufacturer.m_UnicodeString.Buffer;
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
  {
    v37.Psz = hardwareIDs.m_UnicodeString.Buffer;
    v9.bitmap = driverInfo.bitmap;
    v36.Psz = v6;
    *(_BYTE *)&driverInfo.bitmap = *((_BYTE *)&driverInfo.bitmap + 1) & 1;
    hProvider.Psz = v5;
    v41.Value = (v9.Dword & 0x800000) != 0;
    v39.Psz = Buffer;
    v42.Value = (v9.Dword & 0x400000) != 0;
    v11.Value = (v9.Dword & 0x200000) != 0;
    v12.Value = (v9.Dword & 0x100000) != 0;
    v13.Value = (v9.Dword & 0x80000) != 0;
    v14.Value = (v9.Dword & 0x40000) != 0;
    v15.Value = (v9.Dword & 0x20000) != 0;
    v16.Value = BYTE2(v9.Dword) & 1;
    v17.Value = (*(_WORD *)&v9.bitmap & 0x8000) != 0;
    v18.Value = (*(_WORD *)&v9.bitmap & 0x4000) != 0;
    v19.Value = (*(_WORD *)&v9.bitmap & 0x2000) != 0;
    v20.Value = (*(_WORD *)&v9.bitmap & 0x1000) != 0;
    v21.Value = (*(_WORD *)&v9.bitmap & 0x800) != 0;
    v22.Value = (*(_WORD *)&v9.bitmap & 0x400) != 0;
    v23.Value = (*(_WORD *)&v9.bitmap & 0x200) != 0;
    v24.Value = (*(_BYTE *)&v9.bitmap & 0x80) != 0;
    v25.Value = (*(_BYTE *)&v9.bitmap & 0x40) != 0;
    v26.Value = (*(_BYTE *)&v9.bitmap & 0x20) != 0;
    *(_QWORD *)&setupClass.m_UnicodeString.Length = 16779264LL;
    v27.Value = (*(_BYTE *)&v9.bitmap & 0x10) != 0;
    v28.Value = (*(_BYTE *)&v9.bitmap & 8) != 0;
    v29.Value = (*(_BYTE *)&v9.bitmap & 4) != 0;
    v10 = (const _tlgProvider_t *)(v9.Dword >> 1);
    LOBYTE(v10) = (*(_BYTE *)&v9.bitmap & 2) != 0;
    v30.Value = (unsigned __int8)v10;
    v31.Value = *(_BYTE *)&v9.bitmap & 1;
    *(_QWORD *)&manufacturer.m_UnicodeString.Length = DriverGlobals->Public.DriverName;
    *(_QWORD *)&busEnum.m_UnicodeString.Length = DriverGlobals->TelemetryContext;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v10,
      (char *)&tlgEvent_2._tlgChannel,
      v7,
      v8,
      (const _tlgWrapperByVal<8> *)&setupClass,
      (const _tlgWrapperByRef<16> *)&busEnum,
      (const _tlgWrapSz<char> *)&manufacturer,
      &v31,
      &v30,
      &v29,
      &v28,
      &v27,
      &v26,
      &v25,
      &v24,
      &v23,
      &v22,
      &v21,
      &v20,
      &v19,
      &v18,
      &v17,
      &v16,
      &v15,
      &v14,
      &v13,
      &v12,
      &v11,
      &v42,
      &v41,
      (const _tlgWrapperByVal<1> *)&driverInfo,
      &v39,
      &hProvider,
      &v37,
      &v36);
  }
  RegistryWriteCurrentTime(DriverGlobals);
  if ( v6 )
    FxPoolFree(v6);
  if ( v5 )
    FxPoolFree(v5);
  if ( Buffer )
    FxPoolFree(Buffer);
  if ( hardwareIDs.m_UnicodeString.Buffer )
    FxPoolFree((_QWORD *)hardwareIDs.m_UnicodeString.Buffer);
}
