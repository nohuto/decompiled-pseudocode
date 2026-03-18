/*
 * XREFs of ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x140049D40
 * Callers:
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x140049250 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x140049CCC (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_dqd @ 0x14005EF2C (WPP_IFR_SF_dqd.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x14006F2F0 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     WPP_IFR_SF_dq @ 0x140080380 (WPP_IFR_SF_dq.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaPacketTransaction::AllocateAdapterChannel(
        FxDmaPacketTransaction *this,
        unsigned __int8 MapRegistersReserved)
{
  KIRQL v4; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  KIRQL v6; // si
  _IRP *v7; // rdx
  __int64 v8; // r11
  int v9; // eax
  int _a3; // edi
  unsigned int _a1; // eax
  const void *_a2; // rdx
  const void *v14; // rcx
  const void *v15; // rcx

  v4 = KfRaiseIrql(2u);
  m_Globals = this->m_Globals;
  v6 = v4;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    _a1 = this->m_MapRegistersNeeded;
    if ( MapRegistersReserved )
    {
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_dq(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionPacket_hpp_Traceguids, _a1, v14);
    }
    else
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dq(m_Globals, 5u, 0xFu, 0xAu, WPP_FxDmaTransactionPacket_hpp_Traceguids, _a1, _a2);
    }
  }
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
  {
    v9 = this->m_AdapterInfo->AdapterObject->DmaOperations->AllocateAdapterChannel(
           this->m_AdapterInfo->AdapterObject,
           *(_DEVICE_OBJECT **)(v8 + 168),
           this->m_MapRegistersNeeded,
           FxDmaPacketTransaction::_AdapterControl,
           this);
    goto LABEL_5;
  }
  if ( !MapRegistersReserved )
  {
    v9 = this->m_AdapterInfo->AdapterObject->DmaOperations->AllocateAdapterChannelEx(
           this->m_AdapterInfo->AdapterObject,
           *(_DEVICE_OBJECT **)(v8 + 168),
           this->m_TransferContext,
           this->m_MapRegistersNeeded,
           this->m_Flags,
           FxDmaPacketTransaction::_AdapterControl,
           this,
           0LL);
LABEL_5:
    _a3 = v9;
    goto LABEL_6;
  }
  FxDmaPacketTransaction::_AdapterControl(*(_DEVICE_OBJECT **)(v8 + 168), v7, this->m_MapRegisterBase, this);
  _a3 = 0;
LABEL_6:
  KeLowerIrql(v6);
  if ( _a3 < 0 )
  {
    v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_dqd(
      this->m_Globals,
      2u,
      0xFu,
      0xCu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      this->m_MapRegistersNeeded,
      v15,
      _a3);
  }
  return (unsigned int)_a3;
}
