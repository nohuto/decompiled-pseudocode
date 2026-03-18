/*
 * XREFs of ?Vf_VerifyDispatchContext@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400DCDF8
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140028E00 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgIo::Vf_VerifyDispatchContext(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _LIST_ENTRY *DispatchContext)
{
  unsigned int v3; // ebx
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rcx
  _LIST_ENTRY *i; // rax

  v3 = 0;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  for ( i = p_m_DynamicDispatchInfoListHead->Flink; i != p_m_DynamicDispatchInfoListHead; i = i->Flink )
  {
    if ( DispatchContext == i )
      return v3;
  }
  if ( DispatchContext != p_m_DynamicDispatchInfoListHead )
  {
    v3 = -1073741811;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0xDu, WPP_FxPkgIo_cpp_Traceguids, DispatchContext, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  return v3;
}
