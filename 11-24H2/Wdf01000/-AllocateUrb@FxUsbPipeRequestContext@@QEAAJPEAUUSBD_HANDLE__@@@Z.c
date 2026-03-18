/*
 * XREFs of ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x14009DBB8
 * Callers:
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x14004D2B0 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x14004F6F0 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     USBD_UrbAllocate @ 0x14001FB30 (USBD_UrbAllocate.c)
 */

__int64 __fastcall FxUsbPipeRequestContext::AllocateUrb(FxUsbPipeRequestContext *this, USBD_HANDLE__ *USBDHandle)
{
  __int64 result; // rax

  if ( this->m_Urb )
    return 3221225860LL;
  result = USBD_UrbAllocate(USBDHandle, (_URB **)&this->m_Urb);
  if ( (int)result >= 0 )
    this->m_USBDHandle = USBDHandle;
  return result;
}
