/*
 * XREFs of ??1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ @ 0x1400999E4
 * Callers:
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x14004EE60 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     ?reset@?$unique_ptr@VTriageData@@U?$KFreePoolNP@VTriageData@@@@@wistd@@QEAAXPEAVTriageData@@@Z @ 0x140092E1C (-reset@-$unique_ptr@VTriageData@@U-$KFreePoolNP@VTriageData@@@@@wistd@@QEAAXPEAVTriageData@@@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14015DF50 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

void __fastcall _NDIS_FILTER_DRIVER_BLOCK::~_NDIS_FILTER_DRIVER_BLOCK(_NDIS_FILTER_DRIVER_BLOCK *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  wistd::unique_ptr<TriageData,KFreePoolNP<TriageData>>::reset((void **)&this->Triage.__ptr_.__value_, 0LL);
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(&this->Bind, v2, v3);
}
