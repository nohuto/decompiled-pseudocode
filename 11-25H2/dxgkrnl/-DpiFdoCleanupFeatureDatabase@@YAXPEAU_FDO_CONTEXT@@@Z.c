/*
 * XREFs of ?DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14007C780
 * Callers:
 *     DpiFdoResetFdo @ 0x14023E5C8 (DpiFdoResetFdo.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z @ 0x140281284 (-DxgkDestroyFeatureDatabase@@YAXPEAUDXGK_FEATURE_DATABASE@@@Z.c)
 */

void __fastcall DpiFdoCleanupFeatureDatabase(struct _FDO_CONTEXT *a1)
{
  struct DXGK_FEATURE_DATABASE *v2; // rcx

  v2 = (struct DXGK_FEATURE_DATABASE *)*((_QWORD *)a1 + 729);
  if ( v2 )
  {
    DxgkDestroyFeatureDatabase(v2);
    *((_QWORD *)a1 + 729) = 0LL;
  }
}
