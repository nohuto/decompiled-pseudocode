/*
 * XREFs of ?InitializeResources@FxDmaEnabler@@AEAAJPEAU_FxDmaDescription@@@Z @ 0x14008A0E8
 * Callers:
 *     ?ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1400898C4 (-ConfigureDmaAdapter@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@W4_WDF_DMA_DIRECTION@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qLqdi @ 0x14008A478 (WPP_IFR_SF_qLqdi.c)
 *     WPP_IFR_SF_qii @ 0x14008A674 (WPP_IFR_SF_qii.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaEnabler::InitializeResources(FxDmaEnabler *this, _FxDmaDescription *AdapterInfo)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r15
  unsigned int *p_NumberOfMapRegisters; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DMA_ADAPTER *DmaAdapter; // rax
  unsigned __int16 v8; // r9
  _DMA_ADAPTER *v9; // rcx
  __int64 m_ObjectSize; // rax
  const void *_a1; // rbx
  char v13; // al
  unsigned __int64 *p_PreallocatedSGListSize; // rdx
  int _a2; // eax
  unsigned int v16; // ebp
  unsigned __int16 v17; // dx
  const void *v18; // rbx
  unsigned __int64 id; // rdx
  unsigned int flags; // r8d
  const void *v21; // rcx
  unsigned __int64 m_MaximumLength; // rcx
  unsigned __int16 v23; // ax
  const void *v24; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]

  p_m_Globals = &this->m_Globals;
  p_NumberOfMapRegisters = &AdapterInfo->NumberOfMapRegisters;
  m_Globals = this->m_Globals;
  DmaAdapter = IoGetDmaAdapter(this->m_PDO, &AdapterInfo->DeviceDescription, &AdapterInfo->NumberOfMapRegisters);
  AdapterInfo->AdapterObject = DmaAdapter;
  v9 = DmaAdapter;
  if ( !DmaAdapter )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(_WORD)m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaEnabler_cpp_Traceguids, _a1, -1073741823);
    return 3221225473LL;
  }
  v13 = *((_BYTE *)this + 380);
  p_PreallocatedSGListSize = &AdapterInfo->PreallocatedSGListSize;
  if ( (v13 & 8) != 0 )
  {
    traceGuid = (const _GUID *)&AdapterInfo->PreallocatedSGListSize;
    _a2 = ((__int64 (__fastcall *)(_DMA_ADAPTER *, _QWORD, _QWORD, _QWORD))v9->DmaOperations->CalculateScatterGatherList)(
            v9,
            0LL,
            0LL,
            *p_NumberOfMapRegisters << 12);
    v16 = _a2;
    if ( _a2 < 0 )
    {
      v17 = this->m_ObjectSize;
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v17 )
        v18 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xFu, 0x16u, WPP_FxDmaEnabler_cpp_Traceguids, v18, _a2);
      return v16;
    }
  }
  else if ( (v13 & 4) != 0 )
  {
    *p_PreallocatedSGListSize = 40LL;
  }
  else
  {
    *p_PreallocatedSGListSize = 24LL * *p_NumberOfMapRegisters + 16;
  }
  id = this->m_MaximumLength;
  flags = *p_NumberOfMapRegisters;
  if ( id >= (unsigned __int64)(*p_NumberOfMapRegisters - 1) << 12 )
    id = (unsigned __int64)(flags - 1) << 12;
  AdapterInfo->MaximumFragmentLength = id;
  if ( m_Globals->FxVerboseOn )
  {
    v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qLqdi(m_Globals, id, flags, v8, traceGuid, v21, this->m_Profile, AdapterInfo->AdapterObject, flags, id);
  }
  m_MaximumLength = this->m_MaximumLength;
  if ( AdapterInfo->MaximumFragmentLength < m_MaximumLength && m_Globals->FxVerboseOn )
  {
    v23 = this->m_ObjectSize;
    v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v23 )
      v24 = 0LL;
    WPP_IFR_SF_qii(
      m_Globals,
      5u,
      flags,
      0x18u,
      WPP_FxDmaEnabler_cpp_Traceguids,
      v24,
      m_MaximumLength,
      AdapterInfo->MaximumFragmentLength);
  }
  return 0LL;
}
