/*
 * XREFs of ?TransferCompleted@FxDmaPacketTransaction@@UEAAJXZ @ 0x140072300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14004442C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqii @ 0x140087E80 (WPP_IFR_SF_qqii.c)
 *     WPP_IFR_SF_qqiid @ 0x140087F88 (WPP_IFR_SF_qqiid.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaPacketTransaction::TransferCompleted(
        FxDmaPacketTransaction *this,
        unsigned __int8 a2,
        unsigned int a3)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DMA_OPERATIONS *DmaOperations; // rdi
  $606C41BA9BCC3D85D2F60B9807CEBB34 *DmaDescription; // rax
  _MDL **p_m_CurrentFragmentMdl; // r12
  _MDL *m_CurrentFragmentMdl; // rdx
  __int64 *p_m_CurrentFragmentLength; // r15
  __int64 *p_m_CurrentFragmentOffset; // r13
  _DMA_ADAPTER *AdapterObject; // rcx
  int id; // edi
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  unsigned __int16 *p_m_ObjectSize; // rbp
  const void *v18; // rbx
  const void *_a5; // rdx
  const void *v20; // rcx
  const _GUID *_a4; // [rsp+20h] [rbp-58h]

  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  DmaOperations = this->m_AdapterInfo->AdapterObject->DmaOperations;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v20 = 0LL;
    WPP_IFR_SF_qqii(
      m_Globals,
      a2,
      a3,
      0xFu,
      WPP_FxDmaTransactionPacket_hpp_Traceguids,
      v20,
      this->m_CurrentFragmentMdl,
      this->m_CurrentFragmentOffset,
      this->m_CurrentFragmentLength);
  }
  DmaDescription = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice);
  p_m_CurrentFragmentMdl = &this->m_CurrentFragmentMdl;
  m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentLength = (__int64 *)&this->m_CurrentFragmentLength;
  p_m_CurrentFragmentOffset = (__int64 *)&this->m_CurrentFragmentOffset;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  if ( DmaDescription->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    LODWORD(_a4) = *(_DWORD *)p_m_CurrentFragmentLength;
    id = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, __int64))DmaOperations->FlushAdapterBuffersEx)(
           AdapterObject,
           m_CurrentFragmentMdl,
           this->m_MapRegisterBase,
           *p_m_CurrentFragmentOffset);
    if ( id >= 0 )
      return (unsigned int)id;
  }
  else
  {
    LODWORD(_a4) = *(_DWORD *)p_m_CurrentFragmentLength;
    if ( ((unsigned __int8 (__fastcall *)(_DMA_ADAPTER *, _MDL *, void *, char *))DmaOperations->FlushAdapterBuffers)(
           AdapterObject,
           m_CurrentFragmentMdl,
           this->m_MapRegisterBase,
           (char *)m_CurrentFragmentMdl->StartVa + m_CurrentFragmentMdl->ByteOffset + *p_m_CurrentFragmentOffset) )
    {
      return 0;
    }
    id = -1073741823;
  }
  p_m_ObjectSize = &this->m_ObjectSize;
  v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a5 = v18;
  if ( !*p_m_ObjectSize )
    _a5 = 0LL;
  WPP_IFR_SF_qqiid(
    *p_m_Globals,
    (unsigned __int8)_a5,
    v14,
    v15,
    _a4,
    _a5,
    *p_m_CurrentFragmentMdl,
    *p_m_CurrentFragmentOffset,
    *p_m_CurrentFragmentLength,
    id);
  if ( !*p_m_ObjectSize )
    v18 = 0LL;
  WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x20u, WPP_FxDmaTransactionPacket_cpp_Traceguids, v18, id);
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)id;
}
