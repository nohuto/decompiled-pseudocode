/*
 * XREFs of ?SetNewSgListBuffer@FxDmaPacketTransaction@@MEAAXPEAXK@Z @ 0x1400879F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDmaPacketTransaction::SetNewSgListBuffer(
        FxDmaPacketTransaction *this,
        void *Buffer,
        unsigned int Size)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx

  m_Globals = this->m_Globals;
  m_ObjectSize = this->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x13u, WPP_FxDmaTransactionPacket_hpp_Traceguids, _a1);
  FxVerifierDbgBreakPoint(m_Globals);
}
