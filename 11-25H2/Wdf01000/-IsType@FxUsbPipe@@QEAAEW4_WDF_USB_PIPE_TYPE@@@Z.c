/*
 * XREFs of ?IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z @ 0x140068384
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009BF40 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxUsbPipe::IsType(FxUsbPipe *this, _WDF_USB_PIPE_TYPE Type)
{
  unsigned __int64 PipeType; // rax
  int v3; // eax

  PipeType = this->m_PipeInformation.PipeType;
  if ( PipeType >= 4 )
    v3 = 0;
  else
    v3 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[PipeType];
  return v3 == Type;
}
