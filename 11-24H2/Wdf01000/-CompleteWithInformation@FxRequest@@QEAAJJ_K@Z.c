/*
 * XREFs of ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x14003D0CC
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140015A20 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140023300 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14003CEFC (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x14003E240 (-InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_qiid @ 0x1400028A4 (WPP_IFR_SF_qiid.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1400258C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 */

__int64 __fastcall FxRequest::CompleteWithInformation(
        FxRequest *this,
        unsigned int Status,
        unsigned __int64 Information)
{
  FxDeviceBase *m_DeviceBase; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  char m_Globals_high; // di
  const void *_a1; // rdx

  this->m_Irp.m_Irp->IoStatus.Information = Information;
  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_Globals_high = 0;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qiid(
      m_Globals,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      Status);
  }
  if ( m_DeviceBase )
    m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
  this->m_PriorityBoost = m_Globals_high;
  return FxRequest::CompleteInternal(this, Status, Information);
}
