/*
 * XREFs of ?Send@FxIoTarget@@UEAAXPEAU_IRP@@@Z @ 0x14005D6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxIoTarget::Send(FxIoTarget *this, _IRP *Irp)
{
  IofCallDriver(this->m_TargetDevice, Irp);
}
