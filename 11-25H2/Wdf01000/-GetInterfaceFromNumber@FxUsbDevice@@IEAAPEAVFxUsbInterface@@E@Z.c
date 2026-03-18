/*
 * XREFs of ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x14005AEC4
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14005A73C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

FxUsbInterface *__fastcall FxUsbDevice::GetInterfaceFromNumber(FxUsbDevice *this, unsigned __int8 InterfaceNumber)
{
  __int64 i; // r9
  FxUsbInterface *result; // rax

  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    result = this->m_Interfaces[i];
    if ( result->m_InterfaceNumber == InterfaceNumber )
      return result;
  }
  return 0LL;
}
