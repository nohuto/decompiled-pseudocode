/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x18010ABC0
 * Callers:
 *     EtwNotificationUnregister @ 0x18001D140 (EtwNotificationUnregister.c)
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18001E990 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlRbRemoveNode @ 0x180051DA0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x18010AC5C (EtwpAcquireGuidEntryExclusive.c)
 */

__int64 __fastcall EtwpDereferenceUmGuidEntry(unsigned __int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 **v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(a1);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&EtwpProvLock, v3, v4);
    RtlRbRemoveNode((unsigned __int64)&EtwpGuidEntryTable, (unsigned __int64 *)a1);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
    v5 = *(_QWORD *)(a1 + 168);
    if ( v5 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
