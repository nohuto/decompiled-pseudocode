/*
 * XREFs of DxgkNotifyAdapterRemoval @ 0x1401D74F4
 * Callers:
 *     DpiRemoveAdapter @ 0x14007C860 (DpiRemoveAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1401D5E3C (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkNotifyAdapterRemoval()
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::NotifyAdapterRemoval(Global);
}
