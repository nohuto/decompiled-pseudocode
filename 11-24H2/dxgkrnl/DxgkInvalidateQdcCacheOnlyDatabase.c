/*
 * XREFs of DxgkInvalidateQdcCacheOnlyDatabase @ 0x14018C84C
 * Callers:
 *     DxgkHandleCcdDatabaseRequests @ 0x14026D3B4 (DxgkHandleCcdDatabaseRequests.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140341C24 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1403B5A04 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 */

void DxgkInvalidateQdcCacheOnlyDatabase()
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 183), 1);
}
