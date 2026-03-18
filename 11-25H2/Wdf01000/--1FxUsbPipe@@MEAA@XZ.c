/*
 * XREFs of ??1FxUsbPipe@@MEAA@XZ @ 0x14004AA0C
 * Callers:
 *     ??_GFxUsbPipe@@MEAAPEAXI@Z @ 0x14004A810 (--_GFxUsbPipe@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbPipe::~FxUsbPipe(FxUsbPipe *this)
{
  FxUsbInterface *m_UsbInterface; // rcx
  FxUsbPipe **m_ConfiguredPipes; // rdx
  __int64 i; // rax

  this->__vftable = (FxUsbPipe_vtbl *)FxUsbPipe::`vftable';
  m_UsbInterface = this->m_UsbInterface;
  if ( m_UsbInterface )
  {
    m_ConfiguredPipes = m_UsbInterface->m_ConfiguredPipes;
    if ( m_ConfiguredPipes )
    {
      for ( i = 0LL; (unsigned int)i < m_UsbInterface->m_NumberOfConfiguredPipes; i = (unsigned int)(i + 1) )
      {
        if ( m_ConfiguredPipes[i] == this )
        {
          m_ConfiguredPipes[i] = 0LL;
          break;
        }
      }
    }
    this->m_UsbInterface->Release(
      this->m_UsbInterface,
      this,
      1100,
      "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbpipe.cpp");
  }
  this->__vftable = (FxUsbPipe_vtbl *)FxIoTarget::`vftable';
  FxNonPagedObject::~FxNonPagedObject(this);
}
