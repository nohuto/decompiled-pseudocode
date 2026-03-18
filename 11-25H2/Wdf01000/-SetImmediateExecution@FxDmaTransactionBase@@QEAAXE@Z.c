/*
 * XREFs of ?SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z @ 0x140088E38
 * Callers:
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x140086FD0 (imp_WdfDmaTransactionSetImmediateExecution.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086664 (WPP_IFR_SF_ql.c)
 */

void __fastcall FxDmaTransactionBase::SetImmediateExecution(FxDmaTransactionBase *this, unsigned __int8 Value)
{
  FxDmaTransactionState _a2; // r8d
  const void *_a1; // rcx
  unsigned int v6; // ecx

  _a2 = this->m_State;
  if ( ((_a2 - 1) & 0xFFFFFFF9) != 0 || _a2 == FxDmaTransactionStateTransferCompleted )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_ql(this->m_Globals, 2u, 0xFu, 0x1Eu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  v6 = this->m_Flags | 1;
  if ( !Value )
    v6 = this->m_Flags & 0xFFFFFFFE;
  this->m_Flags = v6;
}
