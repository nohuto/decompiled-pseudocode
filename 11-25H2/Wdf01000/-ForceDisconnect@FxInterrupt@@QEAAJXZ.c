/*
 * XREFs of ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1400A9440
 * Callers:
 *     imp_WdfInterruptDisable @ 0x1400A2420 (imp_WdfInterruptDisable.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x14004D358 (WPP_IFR_SF_qqq.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140068FD0 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 */

__int64 __fastcall FxInterrupt::ForceDisconnect(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // r8
  unsigned int Flags; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *v5; // rdx
  const void *v6; // r8

  m_DeviceBase = this->m_DeviceBase;
  Flags = m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v5 = 0LL;
  v6 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v6 = 0LL;
  WPP_IFR_SF_qqq(this->m_Globals, 4u, 0xCu, 0x1Au, WPP_InterruptObject_cpp_Traceguids, v6, v5, this->m_Interrupt);
  this->m_ForceDisconnected = 1;
  return FxInterrupt::Disconnect(this, (Flags & 0x2000) == 0);
}
