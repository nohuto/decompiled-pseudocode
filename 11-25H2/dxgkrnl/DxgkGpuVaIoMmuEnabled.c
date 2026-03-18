/*
 * XREFs of DxgkGpuVaIoMmuEnabled @ 0x1401823F0
 * Callers:
 *     ?SmmLoadConfiguration@@YAXXZ @ 0x14018236C (-SmmLoadConfiguration@@YAXXZ.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x14023E0DC (DpiFdoQuerySysMmAdapterCaps.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ @ 0x140182410 (-GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ.c)
 */

unsigned __int8 DxgkGpuVaIoMmuEnabled()
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::GpuVaIoMmuEnabled(Global);
}
