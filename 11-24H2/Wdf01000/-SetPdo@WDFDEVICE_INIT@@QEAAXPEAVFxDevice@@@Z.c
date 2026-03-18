/*
 * XREFs of ?SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z @ 0x140078FA0
 * Callers:
 *     imp_WdfPdoInitAllocate @ 0x140078E80 (imp_WdfPdoInitAllocate.c)
 * Callees:
 *     <none>
 */

void __fastcall WDFDEVICE_INIT::SetPdo(WDFDEVICE_INIT *this, FxDevice *Parent)
{
  this->Characteristics |= 0x80u;
  this->InitType = FxDeviceInitTypePdo;
  this->Pdo.Parent = Parent;
  if ( !Parent->m_PowerPageableCapable )
    this->PowerPageable = 0;
}
