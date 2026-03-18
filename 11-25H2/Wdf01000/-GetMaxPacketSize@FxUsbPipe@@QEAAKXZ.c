/*
 * XREFs of ?GetMaxPacketSize@FxUsbPipe@@QEAAKXZ @ 0x14006796C
 * Callers:
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x140067904 (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009BF40 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbPipe::GetMaxPacketSize(FxUsbPipe *this)
{
  if ( (this->m_PipeInformation.PipeFlags & 0x10000) != 0 )
    return this->m_PipeInformation.MaximumTransferSize;
  else
    return this->m_PipeInformation.MaximumPacketSize;
}
