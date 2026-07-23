/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1403D9CC0
 * Callers:
 *     DifEnumeratePluginData @ 0x14060EB40 (DifEnumeratePluginData.c)
 *     CarDeleteDriverRuleViolations @ 0x14061793C (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x1406179F0 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x140617A80 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140617BD8 (CarWriteEarlyRuleViolationEvents.c)
 *     PiDmObjectManagerPopulate @ 0x140724CC8 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x1407AF5B0 (EtwpFreeKeyNameList.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B85BAC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B85C24 (VfAvlEnumerateNodes.c)
 *     VfPtGenerateTraceInformation @ 0x140B8DF6C (VfPtGenerateTraceInformation.c)
 *     ViPtDeleteAvlTrees @ 0x140B8E740 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RealSuccessor @ 0x1403D9D30 (RealSuccessor.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  void *v2; // r8
  _RTL_BALANCED_LINKS **p_RestartKey; // r9
  _RTL_BALANCED_LINKS *RightChild; // rax
  _RTL_BALANCED_LINKS *v5; // rcx
  _RTL_BALANCED_LINKS *i; // rcx

  v2 = 0LL;
  p_RestartKey = &Table->RestartKey;
  if ( Restart )
    *p_RestartKey = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    if ( !*p_RestartKey )
    {
      RightChild = Table->BalancedRoot.RightChild;
      for ( i = RightChild->LeftChild; i; i = i->LeftChild )
        RightChild = i;
      v5 = RightChild;
      goto LABEL_6;
    }
    RightChild = (_RTL_BALANCED_LINKS *)RealSuccessor(*p_RestartKey);
    v5 = RightChild;
    if ( RightChild )
    {
LABEL_6:
      *p_RestartKey = v5;
      return &RightChild[1];
    }
  }
  return v2;
}
