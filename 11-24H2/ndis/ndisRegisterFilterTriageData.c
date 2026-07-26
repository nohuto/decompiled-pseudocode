/*
 * XREFs of ndisRegisterFilterTriageData @ 0x140098178
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x140057110 (NdisConvertNtStatusToNdisStatus.c)
 *     ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x14009130C (--1-$out_param_t@V-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140097F34 (-Make@-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@SAJPEAU_NDIS_FILTER_BLOCK@@PEBU-$TriageDataColle.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisRegisterFilterTriageData(_LIST_ENTRY *a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _LIST_ENTRY **p_Blink; // [rsp+20h] [rbp-59h] BYREF
  TriageData *v5; // [rsp+28h] [rbp-51h] BYREF
  char v6; // [rsp+30h] [rbp-49h]
  int v7; // [rsp+40h] [rbp-39h] BYREF
  bool (__fastcall *v8)(void *, TriageDataArray *); // [rsp+48h] [rbp-31h]
  int v9; // [rsp+50h] [rbp-29h]
  bool (__fastcall *v10)(__int64, TriageDataArray *); // [rsp+58h] [rbp-21h]
  int v11; // [rsp+60h] [rbp-19h]
  bool (__fastcall *v12)(__int64, TriageDataArray *); // [rsp+68h] [rbp-11h]
  int v13; // [rsp+70h] [rbp-9h]
  bool (__fastcall *v14)(__int64, TriageDataArray *); // [rsp+78h] [rbp-1h]
  int v15; // [rsp+80h] [rbp+7h]
  void (__fastcall *v16)(__int64, TriageDataArray *); // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+90h] [rbp+17h]
  char (__fastcall *v18)(__int64, TriageDataArray *); // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+A0h] [rbp+27h]
  char (__fastcall *v20)(__int64, TriageDataArray *); // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+B0h] [rbp+37h]
  void (__fastcall *v22)(__int64, TriageDataArray *); // [rsp+B8h] [rbp+3Fh]

  v5 = 0LL;
  v8 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,0,128>::AddTriageBlocks;
  v15 = 3;
  v7 = 1;
  v10 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,160,184>::AddTriageBlocks;
  v12 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,312,377>::AddTriageBlocks;
  v14 = StructFieldDataCollector<_NDIS_FILTER_BLOCK,NDIS_NBL_TRACKER_HANDLE__ *,648>::AddTriageBlocks;
  v17 = 2;
  v16 = NblTrackerCollector<_NDIS_FILTER_BLOCK>::AddTriageBlocks;
  v18 = UnicodeStringPointerDataCollector<_NDIS_FILTER_BLOCK,wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,40>::AddTriageBlocks;
  v20 = UnicodeStringPointerDataCollector<_NDIS_FILTER_BLOCK,_UNICODE_STRING *,48>::AddTriageBlocks;
  v22 = OidRequestQueueCollector<_NDIS_FILTER_BLOCK>::AddTriageBlocks;
  v19 = 2;
  p_Blink = &a1[88].Blink;
  v9 = 1;
  v11 = 1;
  v13 = 1;
  v21 = 11;
  v6 = 1;
  v1 = ObjectTriageData<_NDIS_FILTER_BLOCK>::Make(a1, &v7, (TriageData *)1, &v5);
  v2 = NdisConvertNtStatusToNdisStatus(v1);
  wil::details::out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>::~out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>((__int64)&p_Blink);
  return v2;
}
