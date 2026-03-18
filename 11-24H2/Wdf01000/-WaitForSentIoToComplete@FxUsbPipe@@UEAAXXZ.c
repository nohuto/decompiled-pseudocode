/*
 * XREFs of ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x14002EB70
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x140006D40 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 */

void __fastcall FxUsbPipe::WaitForSentIoToComplete(FxUsbPipe *this)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // rsi
  unsigned __int16 *p_m_ObjectSize; // rdi
  const void *_a1; // rdx
  const void *v5; // rdx
  const void *v6; // r10

  p_m_Globals = &this->m_Globals;
  p_m_ObjectSize = &this->m_ObjectSize;
  if ( this->m_Reader )
  {
    if ( (*p_m_Globals)->FxVerboseOn )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*p_m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(*p_m_Globals, 5u, 0xEu, 0x19u, WPP_FxUsbPipe_cpp_Traceguids, _a1);
    }
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_Reader->m_WorkItem->m_WorkItemCompleted);
    if ( (*p_m_Globals)->FxVerboseOn )
    {
      v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*p_m_ObjectSize )
        v5 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 5u, 0xEu, 0x1Au, WPP_FxUsbPipe_cpp_Traceguids, v5, this->m_Reader->m_NumReaders);
    }
    FxUsbPipeContinuousReader::CancelRepeaters(this->m_Reader);
  }
  if ( (*p_m_Globals)->FxVerboseOn )
  {
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*p_m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_q(*p_m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxUsbPipe_cpp_Traceguids, v6);
  }
  FxCREvent::EnterCRAndWaitAndLeave(&this->m_SentIoEvent);
}
