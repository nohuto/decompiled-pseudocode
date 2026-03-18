/*
 * XREFs of ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x14009E9CC
 * Callers:
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x14009EEF8 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x14009FF84 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x14004CD5C (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 */

void __fastcall FxUsbDevice::CancelSentIo(FxUsbDevice *this, __int64 a2, unsigned __int8 a3)
{
  __int64 i; // rdi
  FxUsbInterface *v5; // rbp
  __int64 j; // rsi
  FxIoTarget *v7; // rcx

  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    v5 = this->m_Interfaces[i];
    if ( v5->m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v5->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        v7 = v5->m_ConfiguredPipes[j];
        if ( v7 )
          FxIoTarget::CancelSentIo(v7, a2, a3);
      }
    }
  }
  FxIoTarget::CancelSentIo(this, a2, a3);
}
