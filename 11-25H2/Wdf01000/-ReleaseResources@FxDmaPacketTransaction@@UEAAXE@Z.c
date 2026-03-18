/*
 * XREFs of ?ReleaseResources@FxDmaPacketTransaction@@UEAAXE@Z @ 0x140076EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14004442C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaPacketTransaction::ReleaseResources(FxDmaPacketTransaction *this, __int64 ForceRelease)
{
  FxDmaEnabler *m_DmaEnabler; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( this->m_MapRegisterBaseSet && (!this->m_MapRegistersReserved || (_BYTE)ForceRelease) )
  {
    ((void (__fastcall *)(FxDmaPacketTransaction *, __int64))this->FreeMapRegistersAndAdapter)(this, ForceRelease);
    m_DmaEnabler = this->m_DmaEnabler;
    this->m_MapRegisterBaseSet = 0;
    if ( FxDmaEnabler::GetDmaDescription(m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v5 + 96) + 192LL), 0);
    this->m_AdapterInfo = (_FxDmaDescription *)((__int64)this->m_AdapterInfo & v4);
    this->m_MapRegistersReserved &= v4;
  }
}
