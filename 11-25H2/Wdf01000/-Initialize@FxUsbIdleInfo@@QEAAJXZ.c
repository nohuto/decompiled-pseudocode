/*
 * XREFs of ?Initialize@FxUsbIdleInfo@@QEAAJXZ @ 0x14008385C
 * Callers:
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x14007A3E0 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbIdleInfo::Initialize(FxUsbIdleInfo *this)
{
  _IRP *Irp; // rax

  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this->m_CallbackInfo.IdleContext + 12) + 152LL) + 76LL), 0);
  if ( !Irp )
    return 3221225626LL;
  this->m_IdleIrp.m_Irp = Irp;
  return 0LL;
}
