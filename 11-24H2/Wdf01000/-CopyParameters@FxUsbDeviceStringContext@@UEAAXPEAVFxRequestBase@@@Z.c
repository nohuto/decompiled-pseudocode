/*
 * XREFs of ?CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x14009EA70
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140065FF0 (-CopyParameters@FxUsbRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

void __fastcall FxUsbDeviceStringContext::CopyParameters(FxUsbDeviceStringContext *this, FxRequestBase *Request)
{
  unsigned __int8 bLength; // cl
  unsigned __int64 v5; // rax
  unsigned __int64 RequiredSize; // rdi
  IFxMemory *m_RequestMemory; // rcx
  IFxMemory *v8; // rsi
  __int64 v9; // rbx
  _USB_STRING_DESCRIPTOR *v10; // rdi
  void *v11; // rax
  size_t v12; // r8
  wchar_t *bString; // rdx
  _USB_STRING_DESCRIPTOR *m_StringDescriptor; // rbx

  bLength = this->m_StringDescriptor->bLength;
  if ( (bLength & 1) != 0 || bLength < 2u )
  {
    this->m_CompletionParams.IoStatus.Status = -1073741668;
  }
  else if ( Request->m_Irp.m_Irp->IoStatus.Status >= 0 )
  {
    this->m_UsbParameters.Parameters.DeviceString.RequiredSize = bLength - 2;
    v5 = this->m_RequestMemory->GetBufferSize(this->m_RequestMemory);
    RequiredSize = this->m_UsbParameters.Parameters.DeviceString.RequiredSize;
    m_RequestMemory = this->m_RequestMemory;
    if ( RequiredSize <= v5 )
    {
      m_StringDescriptor = this->m_StringDescriptor;
      this->m_CompletionParams.IoStatus.Information = RequiredSize;
      v11 = (void *)m_RequestMemory->GetBuffer(m_RequestMemory);
      v12 = RequiredSize;
      bString = m_StringDescriptor->bString;
    }
    else
    {
      this->m_CompletionParams.IoStatus.Status = -2147483643;
      v8 = m_RequestMemory;
      v9 = m_RequestMemory->GetBufferSize(m_RequestMemory);
      v10 = this->m_StringDescriptor;
      v11 = (void *)v8->GetBuffer(v8);
      v12 = v9;
      bString = v10->bString;
    }
    memmove(v11, bString, v12);
  }
  FxUsbRequestContext::CopyParameters(this, Request);
}
