/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x18010D324
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180044BF0 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x18010D3C0 (EtwpAcquireGuidEntryExclusive.c)
 */

LOGICAL __fastcall EtwpDereferenceUmGuidEntry(PRTL_BALANCED_NODE Node)
{
  LOGICAL result; // eax
  _RTL_BALANCED_NODE *v3; // r8

  result = _InterlockedExchangeAdd((volatile signed __int32 *)&Node[2].Left + 1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(Node);
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode(&EtwpGuidEntryTable, Node);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    LODWORD(Node[2].Children[0]) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&Node[1].16);
    v3 = Node[7].Children[0];
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Node);
  }
  return result;
}
