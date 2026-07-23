/*
 * XREFs of NtGetCurrentProcessorNumber @ 0x140A7B5E0
 * Callers:
 *     <none>
 * Callees:
 *     KeFindBiasedSetMember @ 0x140405320 (KeFindBiasedSetMember.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     KeQueryPrimaryGroupAffinityThread @ 0x1404AB900 (KeQueryPrimaryGroupAffinityThread.c)
 */

ULONG NtGetCurrentProcessorNumber(void)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 GroupIndex; // rbx
  __int64 v2; // rcx
  PEPROCESS v3; // rax
  __int16 v5; // ax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  GroupIndex = KeGetCurrentPrcb()->GroupIndex;
  KeQueryPrimaryGroupAffinityThread((__int64)CurrentThread, (__int64)&v6);
  v2 = v6;
  if ( !_bittest64(&v2, GroupIndex) )
    LODWORD(GroupIndex) = KeFindBiasedSetMember(v6, GroupIndex);
  v3 = IoThreadToProcess(CurrentThread);
  if ( v3[1].ReadyTime )
  {
    v5 = WORD2(v3[3].PerProcessorCycleTimes);
    if ( v5 == 332 || v5 == 452 )
      LODWORD(GroupIndex) = GroupIndex & 0x1F;
  }
  return GroupIndex;
}
