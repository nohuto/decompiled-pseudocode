/*
 * XREFs of ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x140065D1C
 * Callers:
 *     imp_WdfUsbInterfaceGetConfiguredPipe @ 0x140065C70 (imp_WdfUsbInterfaceGetConfiguredPipe.c)
 * Callees:
 *     ?GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x140065DF4 (-GetInformation@FxUsbPipe@@QEAAXPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

WDFUSBPIPE__ *__fastcall FxUsbInterface::GetConfiguredPipe(
        FxUsbInterface *this,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int16 v6; // cx
  WDFUSBPIPE__ *result; // rax

  if ( PipeIndex >= this->m_NumberOfConfiguredPipes )
    return 0LL;
  _mm_lfence();
  v4 = PipeIndex;
  if ( PipeInfo )
    FxUsbPipe::GetInformation(this->m_ConfiguredPipes[PipeIndex], PipeInfo);
  v5 = (unsigned __int64)this->m_ConfiguredPipes[v4];
  v6 = *(_WORD *)(v5 + 10);
  result = (WDFUSBPIPE__ *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v6 )
    return 0LL;
  return result;
}
