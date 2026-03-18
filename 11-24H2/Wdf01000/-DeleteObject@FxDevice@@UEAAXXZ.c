/*
 * XREFs of ?DeleteObject@FxDevice@@UEAAXXZ @ 0x14004A4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1400412C8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x14004A860 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006DDA8 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 */

void __fastcall FxDevice::DeleteObject(FxDevice *this, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp *m_PkgPnp; // rdi
  char m_ObjectFlags; // al
  bool v6; // bp
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r8
  FxVerifierLock *v9; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  FxWmiIrpHandler *m_PkgWmi; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp && m_PkgPnp->m_Type == 4354 )
  {
    m_ObjectFlags = m_PkgPnp->m_ObjectFlags;
    v6 = 0;
    irql = 0;
    if ( m_ObjectFlags < 0 && (v9 = (FxVerifierLock *)m_PkgPnp[-1].m_DeviceSurpriseRemoval.__vftable) != 0LL )
    {
      FxVerifierLock::Lock(v9, &irql, a3);
      v7 = irql;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&m_PkgPnp->m_NPLock.m_Lock);
    }
    if ( BYTE1(m_PkgPnp[1].m_DisposeSingleEntry.Next) && !BYTE2(m_PkgPnp[1].m_DisposeSingleEntry.Next) )
      v6 = this->m_CurrentPnpState == WdfDevStatePnpInit;
    FxNonPagedObject::Unlock(m_PkgPnp, v7, v8);
    if ( v6 )
      FxDevice::DeleteDeviceFromFailedCreateNoDelete(this, 0xC0000001, 1u);
    goto LABEL_3;
  }
  if ( !this->m_Legacy || !this->m_PkgGeneral || !this->m_DeviceObject.m_DeviceObject )
    goto LABEL_3;
  FxVerifierCheckIrqlLevel(this->m_Globals, 0);
  m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
  this->m_DeviceObjectDeleted = 1;
  ObfReferenceObject(m_DeviceObject);
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
    FxWmiIrpHandler::Deregister(m_PkgWmi);
  IoDeleteDevice(this->m_DeviceObject.m_DeviceObject);
  if ( _InterlockedExchangeAdd(&this->m_PkgGeneral->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
LABEL_3:
    FxObject::DeleteObject(this);
}
