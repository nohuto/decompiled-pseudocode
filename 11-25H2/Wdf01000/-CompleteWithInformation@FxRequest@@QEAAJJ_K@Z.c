/*
 * XREFs of ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x1400487EC
 * Callers:
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x14000ABD0 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140025360 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140047420 (-InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004861C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x14000D190 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qiid @ 0x1400560A4 (WPP_IFR_SF_qiid.c)
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
