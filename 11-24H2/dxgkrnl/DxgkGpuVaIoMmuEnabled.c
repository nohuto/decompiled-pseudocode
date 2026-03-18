/*
 * XREFs of DxgkGpuVaIoMmuEnabled @ 0x1401848A0
 * Callers:
 *     ?SmmLoadConfiguration@@YAXXZ @ 0x14018481C (-SmmLoadConfiguration@@YAXXZ.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x140244DA4 (DpiFdoQuerySysMmAdapterCaps.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ @ 0x1401848C0 (-GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ.c)
 */

unsigned __int8 DxgkGpuVaIoMmuEnabled()
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::GpuVaIoMmuEnabled(Global);
}
