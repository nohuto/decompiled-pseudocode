/*
 * XREFs of ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x14001CF04
 * Callers:
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x14001C510 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14001CA30 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14004FC24 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x140050A64 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1400216BC (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140056F18 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxRequestBase::ClearFieldsForReuse(FxRequestBase *this)
{
  _MDL *m_AllocatedMdl; // rdx
  FxRequestTimer *m_Timer; // rcx

  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    FxMdlFree(this->m_Globals, m_AllocatedMdl);
    this->m_AllocatedMdl = 0LL;
  }
  m_Timer = this->m_Timer;
  *(_WORD *)&this->m_RequestBaseFlags = 0;
  this->m_VerifierFlags = 0;
  *(_WORD *)&this->m_Completed = 0;
  this->m_PriorityBoost = 0;
  this->m_NextStackLocationFormatted = 0;
  if ( m_Timer )
  {
    FxRequestTimer::`scalar deleting destructor'(m_Timer, (unsigned int)m_AllocatedMdl);
    this->m_Timer = 0LL;
  }
  this->m_Target = 0LL;
  this->m_TargetFlags = 0;
  this->m_TargetCompletionContext = 0LL;
  this->m_CsqContext.Irp = (_IRP *)&this->120;
  this->m_ListEntry.Flink = (_LIST_ENTRY *)&this->120;
  this->m_DrainSingleEntry.Next = 0LL;
  this->m_IrpCompletionReferenceCount = 0;
  this->m_CompletionState = 0;
}
