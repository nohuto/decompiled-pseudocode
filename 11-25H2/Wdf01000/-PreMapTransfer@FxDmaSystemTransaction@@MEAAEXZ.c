/*
 * XREFs of ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x14006FD60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x14004D358 (WPP_IFR_SF_qqq.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

char __fastcall FxDmaSystemTransaction::PreMapTransfer(FxDmaSystemTransaction *this)
{
  unsigned __int8 (__fastcall *Method)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // r10
  char v3; // di
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 m_CurrentFragmentOffset; // r11
  _MDL *m_CurrentFragmentMdl; // r9
  FxDeviceBase *m_DeviceBase; // rdx
  void *m_ConfigureChannelContext; // r8
  unsigned __int16 m_ObjectSize; // si
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  const void *_a3; // rdx
  void *_a1; // [rsp+28h] [rbp-20h]

  Method = this->m_ConfigureChannelFunction.Method;
  v3 = 1;
  if ( Method )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a3 = 0LL;
      WPP_IFR_SF_qqq(
        m_Globals,
        5u,
        0xFu,
        0xBu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        Method,
        this->m_ConfigureChannelContext,
        _a3);
      Method = this->m_ConfigureChannelFunction.Method;
    }
    m_CurrentFragmentOffset = this->m_CurrentFragmentOffset;
    m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
    m_DeviceBase = this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase;
    m_ConfigureChannelContext = this->m_ConfigureChannelContext;
    m_ObjectSize = this->m_ObjectSize;
    v10 = m_DeviceBase->m_ObjectSize;
    if ( Method )
    {
      v11 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      _a1 = (void *)this->m_CurrentFragmentLength;
      if ( !v10 )
        v11 = 0LL;
      v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v12 = 0LL;
      return Method(
               (WDFDMATRANSACTION__ *)v12,
               (WDFDEVICE__ *)v11,
               m_ConfigureChannelContext,
               m_CurrentFragmentMdl,
               m_CurrentFragmentOffset,
               (unsigned __int64)_a1);
    }
  }
  return v3;
}
