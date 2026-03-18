/*
 * XREFs of DpiFdoSetFeatureDatabaseDxgAdapter @ 0x14007D084
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?DxgkSetFeatureDatabaseAdapter@@YAXPEAUDXGK_FEATURE_DATABASE@@PEAX@Z @ 0x1402818A0 (-DxgkSetFeatureDatabaseAdapter@@YAXPEAUDXGK_FEATURE_DATABASE@@PEAX@Z.c)
 */

void __fastcall DpiFdoSetFeatureDatabaseDxgAdapter(__int64 a1, void *a2)
{
  DxgkSetFeatureDatabaseAdapter(*(struct DXGK_FEATURE_DATABASE **)(*(_QWORD *)(a1 + 64) + 5832LL), a2);
}
