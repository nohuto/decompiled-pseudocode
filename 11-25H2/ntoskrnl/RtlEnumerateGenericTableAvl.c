/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1403E0EB0
 * Callers:
 *     DifEnumeratePluginData @ 0x1406045C0 (DifEnumeratePluginData.c)
 *     CarDeleteDriverRuleViolations @ 0x14060D3BC (CarDeleteDriverRuleViolations.c)
 *     CarDeletePluginRuleViolations @ 0x14060D470 (CarDeletePluginRuleViolations.c)
 *     CarDeleteRuleViolationDB @ 0x14060D500 (CarDeleteRuleViolationDB.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14060D658 (CarWriteEarlyRuleViolationEvents.c)
 *     PiDmObjectManagerPopulate @ 0x14071B1B8 (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14079FD90 (EtwpFreeKeyNameList.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140B73BCC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140B73C44 (VfAvlEnumerateNodes.c)
 *     VfPtGenerateTraceInformation @ 0x140B7BF8C (VfPtGenerateTraceInformation.c)
 *     ViPtDeleteAvlTrees @ 0x140B7C760 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RealSuccessor @ 0x1403E0F20 (RealSuccessor.c)
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
