/*
 * XREFs of ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x18059DB80
 * Callers:
 *     ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x18059AA1C (--$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemet.c)
 * Callees:
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18008A064 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x1800B8E20 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333333AEBU?$_tlgWrapSz@G@@33@Z @ 0x1800CC1B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTem.c)
 *     ?GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA?AW4SnapRegion@SnapComponentTelemetry@@W42@@Z @ 0x18059F2F4 (-GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA-AW4SnapRegion@SnapComponentTelemetry@@W42@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::AppSnapped_(
        __int64 a1,
        enum _TABLETMODESTATE *a2,
        int *a3,
        int *a4,
        LPCWSTR pszPath)
{
  unsigned int v7; // r14d
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  const unsigned __int16 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+90h] [rbp-1h] BYREF
  int v15; // [rsp+94h] [rbp+3h] BYREF
  int v16; // [rsp+98h] [rbp+7h] BYREF
  int v17; // [rsp+9Ch] [rbp+Bh] BYREF
  int v18; // [rsp+A0h] [rbp+Fh] BYREF
  int v19; // [rsp+A4h] [rbp+13h] BYREF
  int v20; // [rsp+A8h] [rbp+17h] BYREF
  int v21; // [rsp+ACh] [rbp+1Bh] BYREF
  int TelemetrySnapRegion; // [rsp+B0h] [rbp+1Fh] BYREF
  const unsigned __int16 *v23; // [rsp+B8h] [rbp+27h] BYREF
  int v24; // [rsp+E8h] [rbp+57h] BYREF
  int v25; // [rsp+ECh] [rbp+5Bh]

  v25 = HIDWORD(a1);
  v24 = 0;
  v7 = (unsigned int)a2;
  TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v24, a2);
  v8 = WindowManagementLogging::Provider();
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v23 = SQM::CensorAppID(pszPath, v10);
      v14 = a4[3];
      v15 = a4[2];
      v16 = a4[1];
      v17 = *a4;
      v18 = a3[3];
      v19 = a3[2];
      v20 = a3[1];
      v21 = *a3;
      TelemetrySnapRegion = CSnapComponentTelemetry::GetTelemetrySnapRegion(v7);
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v9,
                     (__int64)&unk_180812D3F,
                     v11,
                     v12,
                     (__int64)&TelemetrySnapRegion,
                     (__int64)&v21,
                     (__int64)&v20,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v14,
                     &v23);
    }
  }
  return (char)v8;
}
