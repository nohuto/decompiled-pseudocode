/*
 * XREFs of ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800D630C
 * Callers:
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D42E0 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x180003C30 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x1800D0A4C (-Provider@RawInputProvidersTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x1800D1CAC (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     ??1SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@XZ @ 0x1800D2224 (--1SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@XZ.c)
 */

void __fastcall RawInputProvidersTracing::TelemetryDdiDevice_Added_(__int64 a1, int a2, int a3, unsigned __int16 *a4)
{
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+40h] [rbp-78h] BYREF
  int v13; // [rsp+44h] [rbp-74h] BYREF
  const WCHAR *v14; // [rsp+48h] [rbp-70h] BYREF
  __int64 v15; // [rsp+50h] [rbp-68h] BYREF
  HSTRING v16[8]; // [rsp+60h] [rbp-58h] BYREF

  RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties((BYTE *)v16, a4);
  v8 = RawInputProvidersTracing::Provider(v7);
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
  {
    v14 = a4;
    v12 = a3;
    v13 = a2;
    v15 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v9,
      (__int64)&unk_1802094D0,
      v10,
      v11,
      (__int64)&v15,
      (__int64)&v13,
      (__int64)&v12,
      &v14);
  }
  RawInputProvidersTracing::SpatialInputTelemetryProperties::~SpatialInputTelemetryProperties(v16);
}
