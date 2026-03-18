/*
 * XREFs of ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x140014F84
 * Callers:
 *     ?Dispose@FxTimer@@UEAAEXZ @ 0x140016850 (-Dispose@FxTimer@@UEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x140015084 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxTimer::FlushAndRundown(FxTimer *this)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxObject *m_Object; // rcx
  const void *_a1; // rdx
  bool v5; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _KTHREAD *volatile _a2; // [rsp+30h] [rbp-18h]

  if ( this->m_CallbackThread == KeGetCurrentThread() )
  {
    _a2 = this->m_CallbackThread;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v5 = this->m_ObjectSize == 0;
    m_Globals = this->m_Globals;
    if ( v5 )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxTimer_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  FxTimer::Stop(this, 1u);
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 547, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
  }
  this->Release(this, this, 553, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
}
