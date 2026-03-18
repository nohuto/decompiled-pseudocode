/*
 * XREFs of ?GetUsbdStatus@FxUsbPipeRequestContext@@UEAAJXZ @ 0x14007AB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbPipeRequestContext::GetUsbdStatus(FxUsbPipeRequestContext *this)
{
  return (unsigned int)this->m_Urb->Hdr.Status;
}
