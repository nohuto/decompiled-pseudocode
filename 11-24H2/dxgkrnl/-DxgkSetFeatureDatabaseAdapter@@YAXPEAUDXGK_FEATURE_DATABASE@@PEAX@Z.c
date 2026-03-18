/*
 * XREFs of ?DxgkSetFeatureDatabaseAdapter@@YAXPEAUDXGK_FEATURE_DATABASE@@PEAX@Z @ 0x140288D4C
 * Callers:
 *     DpiFdoSetFeatureDatabaseDxgAdapter @ 0x14007D7B4 (DpiFdoSetFeatureDatabaseDxgAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkSetFeatureDatabaseAdapter(struct DXGK_FEATURE_DATABASE *a1, void *a2)
{
  *((_QWORD *)a1 + 113) = a2;
}
