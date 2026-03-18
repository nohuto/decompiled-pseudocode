/*
 * XREFs of DxgkInvalidateQdcCacheOnlyDatabase @ 0x14018A5FC
 * Callers:
 *     DxgkHandleCcdDatabaseRequests @ 0x1402664B4 (DxgkHandleCcdDatabaseRequests.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14036D944 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1403C0D60 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 */

void DxgkInvalidateQdcCacheOnlyDatabase()
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 179), 1);
}
