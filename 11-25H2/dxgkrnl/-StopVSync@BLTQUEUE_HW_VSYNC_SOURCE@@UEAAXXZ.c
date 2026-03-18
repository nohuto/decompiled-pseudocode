/*
 * XREFs of ?StopVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAXXZ @ 0x14027C6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x14027C0A4 (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE_HW_VSYNC_SOURCE::StopVSync(BLTQUEUE_HW_VSYNC_SOURCE *this)
{
  KeCancelTimer((PKTIMER)((char *)this + 16));
  KeFlushQueuedDpcs();
  DXGDODPRESENT::StopHwVSync(*((struct _KTHREAD ***)this + 1));
}
