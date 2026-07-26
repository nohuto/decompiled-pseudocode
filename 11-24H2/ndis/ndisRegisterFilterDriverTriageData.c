/*
 * XREFs of ndisRegisterFilterDriverTriageData @ 0x14009A1DC
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x140057110 (NdisConvertNtStatusToNdisStatus.c)
 *     ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x14009130C (--1-$out_param_t@V-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140099D84 (-Make@-$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@SAJPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEBU-$T.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisRegisterFilterDriverTriageData(_LIST_ENTRY *a1, __int64 a2, TriageData *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _LIST_ENTRY **p_Blink; // [rsp+20h] [rbp-50h] BYREF
  TriageData *v7; // [rsp+28h] [rbp-48h] BYREF
  char v8; // [rsp+30h] [rbp-40h]
  int v9; // [rsp+38h] [rbp-38h] BYREF
  bool (__fastcall *v10)(void *, TriageDataArray *); // [rsp+40h] [rbp-30h]
  int v11; // [rsp+48h] [rbp-28h]
  bool (__fastcall *v12)(__int64, TriageDataArray *); // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  void (__fastcall *v14)(struct _NDIS_FILTER_DRIVER_BLOCK *, struct TriageDataArray *, const struct BugcheckParameters *); // [rsp+60h] [rbp-10h]

  v7 = 0LL;
  v10 = StructSliceDataCollector<_NDIS_FILTER_DRIVER_BLOCK,0,96>::AddTriageBlocks;
  v13 = 5;
  v9 = 1;
  v12 = StructSliceDataCollector<_NDIS_FILTER_DRIVER_BLOCK,336,360>::AddTriageBlocks;
  v14 = FilterDriverCustomCollector::AddTriageBlocks;
  v11 = 1;
  v8 = 1;
  p_Blink = &a1[22].Blink;
  v3 = ObjectTriageData<_NDIS_FILTER_DRIVER_BLOCK>::Make(a1, &v9, a3, &v7);
  v4 = NdisConvertNtStatusToNdisStatus(v3);
  wil::details::out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>::~out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>((__int64)&p_Blink);
  return v4;
}
