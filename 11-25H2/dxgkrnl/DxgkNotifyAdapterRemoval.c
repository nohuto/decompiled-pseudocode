/*
 * XREFs of DxgkNotifyAdapterRemoval @ 0x1401D2244
 * Callers:
 *     DpiRemoveAdapter @ 0x14007C36C (DpiRemoveAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1401D0AFC (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkNotifyAdapterRemoval()
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::NotifyAdapterRemoval(Global);
}
