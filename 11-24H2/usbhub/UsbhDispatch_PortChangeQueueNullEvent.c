/*
 * XREFs of UsbhDispatch_PortChangeQueueNullEvent @ 0x140008E28
 * Callers:
 *     UsbhPCE_Disable @ 0x140006878 (UsbhPCE_Disable.c)
 *     UsbhHubRunPortChangeQueue @ 0x1400083A0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhPCE_wRun @ 0x14000FB64 (UsbhPCE_wRun.c)
 *     UsbhPCE_Enable @ 0x140020BC8 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x140020DB0 (UsbhPCE_Resume.c)
 *     UsbhPCE_psSUSPEND @ 0x1400351E0 (UsbhPCE_psSUSPEND.c)
 *     UsbhPCE_BusDisconnect @ 0x140042FFC (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_BusReset @ 0x1400430BC (UsbhPCE_BusReset.c)
 *     UsbhPCE_Close @ 0x140043244 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x140043304 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_ResumeDone @ 0x1400435C8 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x140043688 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SD_Resume @ 0x140043748 (UsbhPCE_SD_Resume.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEvent @ 0x140008E50 (UsbhDispatch_PortChangeQueueEvent.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueNullEvent(int a1, int a2, int a3, int a4)
{
  return UsbhDispatch_PortChangeQueueEvent(a1, a2, a3, a4, 0LL, 0, 0LL);
}
