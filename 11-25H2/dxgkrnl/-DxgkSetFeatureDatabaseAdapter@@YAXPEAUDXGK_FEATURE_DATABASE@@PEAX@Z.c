/*
 * XREFs of ?DxgkSetFeatureDatabaseAdapter@@YAXPEAUDXGK_FEATURE_DATABASE@@PEAX@Z @ 0x1402818A0
 * Callers:
 *     DpiFdoSetFeatureDatabaseDxgAdapter @ 0x14007D084 (DpiFdoSetFeatureDatabaseDxgAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkSetFeatureDatabaseAdapter(struct DXGK_FEATURE_DATABASE *a1, void *a2)
{
  *((_QWORD *)a1 + 105) = a2;
}
