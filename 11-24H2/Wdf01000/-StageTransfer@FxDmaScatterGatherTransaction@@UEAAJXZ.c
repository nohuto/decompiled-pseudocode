/*
 * XREFs of ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x140059D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqdid @ 0x14005A1AC (WPP_IFR_SF_qqdid.c)
 *     ?GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z5@Z @ 0x1400884B4 (-GetScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@P.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaScatterGatherTransaction::StageTransfer(FxDmaScatterGatherTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int16 m_ObjectSize; // dx
  unsigned int v3; // ebp
  unsigned int level; // r13d
  unsigned __int64 v6; // rcx
  const void *_a4; // r12
  _MDL *globals; // r8
  unsigned __int64 *p_m_CurrentFragmentLength; // rdi
  unsigned __int64 m_CurrentFragmentOffset; // rcx
  unsigned __int64 m_CurrentFragmentLength_low; // rdx
  unsigned __int64 ByteCount; // rax
  unsigned __int64 m_Remaining; // r15
  unsigned __int64 m_MaxFragmentLength; // rax
  _MDL *v15; // rcx
  int ByteOffset; // r9d
  unsigned int v17; // r14d
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  unsigned int v20; // edx
  FxDmaEnabler *m_DmaEnabler; // rax
  unsigned __int64 v22; // r15
  FxDmaEnabler *v23; // rax
  unsigned int m_CurrentFragmentLength; // ebp
  unsigned __int64 v25; // r14
  _MDL *m_CurrentFragmentMdl; // rdi
  unsigned int m_SgListBufferSize; // r13d
  KIRQL v28; // r15
  FxDmaEnabler *v29; // r10
  _DMA_ADAPTER *AdapterObject; // r11
  _DMA_OPERATIONS *DmaOperations; // rax
  unsigned int m_Flags; // r9d
  _WDF_BIND_INFO *WdfBindInfo; // rdx
  int v34; // eax
  int ScatterGatherList; // edi
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  const void *v40; // rax
  void (__fastcall *traceGuid)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *); // [rsp+20h] [rbp-98h]
  int v42; // [rsp+48h] [rbp-70h]
  void *m_SGListBuffer; // [rsp+C0h] [rbp+8h]
  unsigned int v44; // [rsp+C8h] [rbp+10h]

  m_Globals = this->m_Globals;
  m_ObjectSize = this->m_ObjectSize;
  v3 = 0;
  level = -1;
  v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  _a4 = (const void *)v6;
  if ( !m_ObjectSize )
    _a4 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    v40 = 0LL;
    if ( m_ObjectSize )
      v40 = (const void *)v6;
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xEu, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, v40);
  }
  globals = this->m_CurrentFragmentMdl;
  p_m_CurrentFragmentLength = &this->m_CurrentFragmentLength;
  m_CurrentFragmentOffset = this->m_CurrentFragmentOffset;
  m_CurrentFragmentLength_low = LODWORD(this->m_CurrentFragmentLength);
  ByteCount = globals->ByteCount - m_CurrentFragmentOffset;
  if ( m_CurrentFragmentLength_low >= ByteCount )
  {
    do
    {
      globals = globals->Next;
      m_CurrentFragmentLength_low -= ByteCount;
      ByteCount = globals->ByteCount;
    }
    while ( m_CurrentFragmentLength_low >= ByteCount );
  }
  else
  {
    m_CurrentFragmentLength_low += m_CurrentFragmentOffset;
  }
  this->m_CurrentFragmentMdl = globals;
  this->m_CurrentFragmentOffset = m_CurrentFragmentLength_low;
  m_Remaining = this->m_Remaining;
  m_MaxFragmentLength = m_Remaining;
  if ( m_Remaining >= this->m_MaxFragmentLength )
    m_MaxFragmentLength = this->m_MaxFragmentLength;
  *p_m_CurrentFragmentLength = m_MaxFragmentLength;
  if ( this->m_RequireSingleTransfer )
    goto LABEL_17;
  v15 = globals;
  ByteOffset = ((_WORD)m_CurrentFragmentLength_low + LOWORD(globals->StartVa) + LOWORD(globals->ByteOffset)) & 0xFFF;
  v17 = *(_DWORD *)p_m_CurrentFragmentLength;
  v18 = globals->ByteCount - m_CurrentFragmentLength_low;
  v19 = v18;
  v20 = 0;
  if ( v18 < *(_DWORD *)p_m_CurrentFragmentLength )
  {
    do
    {
      v15 = v15->Next;
      v44 = v18;
      if ( !v15 )
        break;
      v37 = v19 + 4095;
      v19 = v15->ByteCount;
      v38 = ByteOffset + v37;
      v18 += v19;
      ByteOffset = v15->ByteOffset;
      v20 += v38 >> 12;
      v39 = v44;
      if ( v20 > this->m_AdapterInfo->NumberOfMapRegisters )
        v39 = v3;
      v3 = v39;
    }
    while ( v18 < v17 );
    p_m_CurrentFragmentLength = &this->m_CurrentFragmentLength;
  }
  if ( v18 + 4096 >= ByteOffset + v17 )
  {
    v20 += (v17 + v19 + ByteOffset - v18 + 4095) >> 12;
    if ( v20 <= this->m_AdapterInfo->NumberOfMapRegisters )
      v3 += v17 + v19 - v18;
    if ( p_m_CurrentFragmentLength )
      *(_DWORD *)p_m_CurrentFragmentLength = v3;
    level = v20;
  }
  m_DmaEnabler = this->m_DmaEnabler;
  if ( level <= m_DmaEnabler->m_MaxSGElements )
  {
LABEL_17:
    v22 = m_Remaining - *p_m_CurrentFragmentLength;
    v23 = this->m_DmaEnabler;
    m_CurrentFragmentLength = this->m_CurrentFragmentLength;
    v25 = this->m_CurrentFragmentOffset;
    m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
    this->m_Remaining = v22;
    if ( (*((_BYTE *)v23 + 380) & 0x20) != 0 )
    {
      m_SgListBufferSize = this->m_SgListBufferSize;
      m_SGListBuffer = this->m_SGListBuffer;
      v28 = KfRaiseIrql(2u);
      v29 = this->m_DmaEnabler;
      AdapterObject = this->m_AdapterInfo->AdapterObject;
      DmaOperations = AdapterObject->DmaOperations;
      if ( v29->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
      {
        m_Flags = 0;
        WdfBindInfo = this->m_Globals->WdfBindInfo;
        if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xF )
          m_Flags = this->m_Flags;
        v34 = DmaOperations->BuildScatterGatherListEx(
                AdapterObject,
                v29->m_FDO,
                this->m_TransferContext,
                m_CurrentFragmentMdl,
                v25,
                m_CurrentFragmentLength,
                m_Flags,
                FxDmaScatterGatherTransaction::_AdapterListControl,
                this,
                this->m_DmaDirection,
                m_SGListBuffer,
                m_SgListBufferSize,
                0LL,
                0LL,
                0LL);
      }
      else
      {
        v34 = DmaOperations->BuildScatterGatherList(
                AdapterObject,
                v29->m_FDO,
                m_CurrentFragmentMdl,
                (char *)m_CurrentFragmentMdl->StartVa + m_CurrentFragmentMdl->ByteOffset + v25,
                m_CurrentFragmentLength,
                FxDmaScatterGatherTransaction::_AdapterListControl,
                this,
                this->m_DmaDirection,
                m_SGListBuffer,
                m_SgListBufferSize);
      }
      ScatterGatherList = v34;
      KeLowerIrql(v28);
    }
    else
    {
      ScatterGatherList = FxDmaScatterGatherTransaction::GetScatterGatherList(
                            this,
                            m_CurrentFragmentMdl,
                            v25,
                            m_CurrentFragmentLength,
                            traceGuid,
                            this);
    }
    if ( ScatterGatherList < 0 )
    {
      WPP_IFR_SF_qd(
        m_Globals,
        2u,
        0xFu,
        0x10u,
        WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
        _a4,
        ScatterGatherList);
      this->m_Remaining += this->m_CurrentFragmentLength;
    }
    else if ( m_Globals->FxVerifierOn )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qd(
          m_Globals,
          5u,
          0xFu,
          0x11u,
          WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
          _a4,
          ScatterGatherList);
    }
    return (unsigned int)ScatterGatherList;
  }
  else
  {
    WPP_IFR_SF_qqdid(
      m_Globals,
      v20,
      (unsigned int)globals,
      0xFu,
      (const _GUID *)traceGuid,
      _a4,
      globals,
      level,
      m_DmaEnabler->m_MaxSGElements,
      v42);
    return 3223323146LL;
  }
}
