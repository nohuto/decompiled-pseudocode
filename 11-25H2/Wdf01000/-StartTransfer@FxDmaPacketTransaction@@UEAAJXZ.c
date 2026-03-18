/*
 * XREFs of ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1400439B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14004442C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1400444A0 (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqii @ 0x140087E80 (WPP_IFR_SF_qqii.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StartTransfer(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rsi
  __int64 v4; // rcx
  signed __int32 v5; // eax
  unsigned int v6; // ebp
  unsigned __int64 m_MaxFragmentLength; // rax
  unsigned __int64 m_Remaining; // r8
  unsigned __int64 m_StartOffset; // r9
  unsigned __int64 v10; // rdx
  bool v11; // zf
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // dl
  int AdapterChannel; // eax
  unsigned __int8 v16; // dl
  unsigned int v17; // r8d
  FxDmaEnabler *m_DmaEnabler; // r10
  unsigned __int16 m_ObjectSize; // dx
  const void *v20; // r10
  __int16 v21; // cx
  __int64 v22; // rcx

  m_Globals = this->m_Globals;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerboseOn )
    {
      WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x13u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qqii(
          m_Globals,
          v16,
          v17,
          0x14u,
          WPP_FxDmaTransactionPacket_cpp_Traceguids,
          _a1,
          this->m_StartMdl,
          this->m_StartOffset,
          this->m_TransactionLength);
    }
  }
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->DeviceDescription.Version != 3
    && (v5 = -_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v4 + 96) + 192LL), 1, 0),
        v6 = v5 != 0 ? 0xC0200204 : 0,
        v5) )
  {
    m_DmaEnabler = this->m_DmaEnabler;
    m_ObjectSize = m_DmaEnabler->m_ObjectSize;
    v20 = (const void *)((unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v20 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v20, v6);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    m_MaxFragmentLength = this->m_MaxFragmentLength;
    m_Remaining = this->m_Remaining;
    m_StartOffset = this->m_StartOffset;
    v10 = m_Remaining;
    this->m_CurrentFragmentOffset = m_StartOffset;
    if ( m_Remaining >= m_MaxFragmentLength )
      v10 = m_MaxFragmentLength;
    v11 = this->m_State == FxDmaTransactionStateReserved;
    this->m_CurrentFragmentLength = v10;
    if ( v11 )
    {
      v13 = 0;
      this->m_MapRegistersNeeded = this->m_MapRegistersReserved;
    }
    else
    {
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 4) != 0 )
      {
        if ( v10 == m_Remaining )
          v21 = m_StartOffset + LOWORD(this->m_CurrentFragmentMdl->StartVa) + this->m_CurrentFragmentMdl->ByteOffset;
        else
          v21 = 4095;
        v12 = (v10 + (v21 & 0xFFF) + 4095LL) >> 12;
      }
      else
      {
        LODWORD(v12) = this->m_AdapterInfo->NumberOfMapRegisters;
      }
      this->m_MapRegistersNeeded = v12;
      v13 = this->m_MapRegistersReserved != 0;
    }
    AdapterChannel = FxDmaPacketTransaction::AllocateAdapterChannel(this, v13);
    v6 = AdapterChannel;
    if ( AdapterChannel < 0 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1, AdapterChannel);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->DeviceDescription.Version != 3 )
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v22 + 96) + 192LL), 0);
    }
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x17u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1, v6);
  }
  return v6;
}
