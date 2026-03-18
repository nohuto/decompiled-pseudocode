/*
 * XREFs of ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x140056510
 * Callers:
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1400E41E4 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     <none>
 */

FxPkgIo *__fastcall FxDevice::GetDispatchPackage(FxDevice *this, unsigned __int8 MajorFunction)
{
  FxPkgIo *result; // rax

  if ( MajorFunction == 15 )
    return this->m_PkgIo;
  if ( MajorFunction == 16 )
    return (FxPkgIo *)this->m_PkgGeneral;
  switch ( MajorFunction )
  {
    case 0u:
    case 2u:
    case 0x12u:
      return (FxPkgIo *)this->m_PkgGeneral;
    case 3u:
    case 4u:
    case 0xEu:
      return this->m_PkgIo;
    case 0x16u:
    case 0x1Bu:
      result = (FxPkgIo *)this->m_PkgPnp;
      if ( !result )
        goto LABEL_8;
      return result;
    case 0x17u:
      return (FxPkgIo *)this->m_PkgWmi;
    default:
LABEL_8:
      result = (FxPkgIo *)this->m_PkgDefault;
      break;
  }
  return result;
}
