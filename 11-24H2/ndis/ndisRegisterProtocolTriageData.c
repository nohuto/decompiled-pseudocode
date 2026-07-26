/*
 * XREFs of ndisRegisterProtocolTriageData @ 0x1400B8354
 * Callers:
 *     NdisRegisterProtocol @ 0x1400B8C40 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400B9070 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x140057110 (NdisConvertNtStatusToNdisStatus.c)
 *     ??1?$out_param_t@V?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@QEAA@XZ @ 0x14009130C (--1-$out_param_t@V-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@@details@wil@@.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_PROTOCOL_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x1400B7B70 (-Make@-$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@SAJPEAU_NDIS_PROTOCOL_BLOCK@@PEBU-$TriageDataC.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisRegisterProtocolTriageData(_LIST_ENTRY *a1, __int64 a2, TriageData *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  _LIST_ENTRY **p_Blink; // [rsp+20h] [rbp-19h] BYREF
  TriageData *v7; // [rsp+28h] [rbp-11h] BYREF
  char v8; // [rsp+30h] [rbp-9h]
  int v9; // [rsp+40h] [rbp+7h] BYREF
  bool (__fastcall *v10)(void *, TriageDataArray *); // [rsp+48h] [rbp+Fh]
  int v11; // [rsp+50h] [rbp+17h]
  bool (__fastcall *v12)(__int64, TriageDataArray *); // [rsp+58h] [rbp+1Fh]
  int v13; // [rsp+60h] [rbp+27h]
  char (__fastcall *v14)(__int64, TriageDataArray *); // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+70h] [rbp+37h]
  char (__fastcall *v16)(__int64, TriageDataArray *); // [rsp+78h] [rbp+3Fh]

  v7 = 0LL;
  v10 = StructSliceDataCollector<_NDIS_FILTER_BLOCK,0,128>::AddTriageBlocks;
  v9 = 1;
  v12 = StructSliceDataCollector<_NDIS_PROTOCOL_BLOCK,808,832>::AddTriageBlocks;
  v11 = 1;
  v14 = UnicodeStringDataCollector<_NDIS_PROTOCOL_BLOCK,808>::AddTriageBlocks;
  v16 = UnicodeStringDataCollector<_NDIS_PROTOCOL_BLOCK,72>::AddTriageBlocks;
  v13 = 1;
  v15 = 1;
  v8 = 1;
  p_Blink = &a1[55].Blink;
  v3 = ObjectTriageData<_NDIS_PROTOCOL_BLOCK>::Make(a1, &v9, a3, &v7);
  v4 = NdisConvertNtStatusToNdisStatus(v3);
  wil::details::out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>::~out_param_t<wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>>((__int64)&p_Blink);
  return v4;
}
