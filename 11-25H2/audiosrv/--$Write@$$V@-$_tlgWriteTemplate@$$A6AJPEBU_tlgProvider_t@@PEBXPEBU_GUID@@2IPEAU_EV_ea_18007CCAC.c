/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18007CCAC
 * Callers:
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x180008D38 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x180009304 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x1800627E4 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007CC60 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A5154 (-RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ.c)
 *     _lambda_763aee26e7d4656314e991e320ffb749_::operator() @ 0x1801473E4 (_lambda_763aee26e7d4656314e991e320ffb749_--operator().c)
 *     _lambda_7e22c0f576fc86e89f8df846bfab63fc_::operator() @ 0x180147454 (_lambda_7e22c0f576fc86e89f8df846bfab63fc_--operator().c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180147D9C (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180149860 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 *     ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x180155E30 (-ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180156200 (-StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        unsigned __int8 *a2)
{
  ULONGLONG v2; // rax
  unsigned __int16 *v3; // rdx
  EVENT_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  *(_DWORD *)&v5.Id = *a2 << 24;
  *(_DWORD *)&v5.Level = *(unsigned __int16 *)(a2 + 1);
  v2 = *(_QWORD *)(a2 + 3);
  v3 = (unsigned __int16 *)(a2 + 11);
  v5.Keyword = v2;
  v6.Ptr = (ULONGLONG)off_1801CC380;
  v6.Size = *(unsigned __int16 *)off_1801CC380;
  LODWORD(v2) = *v3;
  v6.Reserved = 2;
  v7 = v3;
  v8 = v2;
  v9 = 1;
  return EventWriteTransfer(RegHandle, &v5, 0LL, 0LL, 2u, &v6);
}
