/*
 * XREFs of ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1400077F4
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x14000747C (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfUsbTargetDeviceIsConnectedSynchronous @ 0x14001FEB0 (imp_WdfUsbTargetDeviceIsConnectedSynchronous.c)
 * Callees:
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140007824 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 */

int __fastcall FxUsbDevice::IsConnected(FxUsbDevice *this)
{
  int result; // eax
  unsigned int portStatus; // [rsp+38h] [rbp+10h] BYREF

  portStatus = 0;
  result = FxUsbDevice::GetPortStatus(this, &portStatus);
  if ( result >= 0 && (portStatus & 2) == 0 )
    return -1073741632;
  return result;
}
