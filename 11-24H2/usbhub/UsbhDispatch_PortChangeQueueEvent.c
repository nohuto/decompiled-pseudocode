/*
 * XREFs of UsbhDispatch_PortChangeQueueEvent @ 0x140008E50
 * Callers:
 *     UsbhQueuePauseChange @ 0x140006628 (UsbhQueuePauseChange.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x140008E28 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhPCE_QueueChange @ 0x1400332E8 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1400433D4 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_QueueDriverReset @ 0x1400434E0 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_SoftDisconnect @ 0x1400437F8 (UsbhPCE_SoftDisconnect.c)
 *     UsbhPCE_wChangeERROR @ 0x1400438F8 (UsbhPCE_wChangeERROR.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 */

__int64 __fastcall UsbhDispatch_PortChangeQueueEvent(int a1, int a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
