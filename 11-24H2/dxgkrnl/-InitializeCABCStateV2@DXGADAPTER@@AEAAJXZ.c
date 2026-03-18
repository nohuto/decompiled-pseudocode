/*
 * XREFs of ?InitializeCABCStateV2@DXGADAPTER@@AEAAJXZ @ 0x140191FB0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetCabcOptionFromRegistry@@YAJPEAK@Z @ 0x14018F538 (-GetCabcOptionFromRegistry@@YAJPEAK@Z.c)
 */

__int64 __fastcall DXGADAPTER::InitializeCABCStateV2(DXGADAPTER *this)
{
  unsigned int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]

  v3 = HIDWORD(this);
  v2 = 0;
  GetCabcOptionFromRegistry(&v2);
  return ZwUpdateWnfStateData(&WNF_DXGK_CABC_OPTION_CHANGED, &v2, 4LL, 0LL, 0LL, 0, 0);
}
