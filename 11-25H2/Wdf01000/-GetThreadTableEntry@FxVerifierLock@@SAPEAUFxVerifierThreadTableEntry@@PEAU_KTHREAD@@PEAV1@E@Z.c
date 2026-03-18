/*
 * XREFs of ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x140074834
 * Callers:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

_LIST_ENTRY **__fastcall FxVerifierLock::GetThreadTableEntry(
        _KTHREAD *curThread,
        FxVerifierLock *pLock,
        unsigned __int8 LookupOnly)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _LIST_ENTRY *ThreadTable; // r9
  _LIST_ENTRY *v6; // rax
  _LIST_ENTRY *i; // rcx
  FxVerifierThreadTableEntry *p_m_ThreadTableEntry; // r8
  _LIST_ENTRY *p_HashChain; // rcx
  _LIST_ENTRY *Blink; // rdx

  m_Globals = pLock->m_Globals;
  ThreadTable = pLock->m_Globals->ThreadTable;
  if ( !ThreadTable )
    return 0LL;
  v6 = &ThreadTable[((unsigned __int8)((unsigned __int64)curThread >> 4) ^ (unsigned __int8)((unsigned __int64)curThread >> 20)) & 0x3F];
  for ( i = v6->Flink; i != v6; i = i->Flink )
  {
    if ( (_KTHREAD *)i[-2].Blink == curThread )
      return &i[-2].Blink;
  }
  if ( LookupOnly )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x14u, WPP_FxVerifierLock_cpp_Traceguids, curThread);
    FxVerifierDbgBreakPoint(m_Globals);
    return 0LL;
  }
  pLock->m_ThreadTableEntry.PerThreadPassiveLockList = 0LL;
  p_m_ThreadTableEntry = &pLock->m_ThreadTableEntry;
  pLock->m_ThreadTableEntry.PerThreadDispatchLockList = 0LL;
  p_HashChain = &pLock->m_ThreadTableEntry.HashChain;
  pLock->m_ThreadTableEntry.Thread = curThread;
  Blink = v6->Blink;
  if ( Blink->Flink != v6 )
    __fastfail(3u);
  p_HashChain->Flink = v6;
  p_HashChain->Blink = Blink;
  Blink->Flink = p_HashChain;
  v6->Blink = p_HashChain;
  return (_LIST_ENTRY **)p_m_ThreadTableEntry;
}
