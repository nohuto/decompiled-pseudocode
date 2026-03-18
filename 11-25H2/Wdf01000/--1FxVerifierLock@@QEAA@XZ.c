/*
 * XREFs of ??1FxVerifierLock@@QEAA@XZ @ 0x140083B60
 * Callers:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x140032A20 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x14007EB90 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x14004D358 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxVerifierLock::~FxVerifierLock(FxVerifierLock *this)
{
  _KTHREAD *m_OwningThread; // rcx

  m_OwningThread = this->m_OwningThread;
  if ( m_OwningThread )
  {
    WPP_IFR_SF_qqq(
      this->m_Globals,
      2u,
      0x12u,
      0xDu,
      WPP_FxVerifierLock_hpp_Traceguids_0,
      this,
      m_OwningThread,
      this->m_ParentObject);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_Mutex.m_DbgFlagIsInitialized = 0;
  this->m_Lock.m_DbgFlagIsInitialized = 0;
}
