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

__int64 __fastcall EtwpDereferenceUmGuidEntry(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(a1);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&EtwpProvLock);
    RtlRbRemoveNode((unsigned __int64)&EtwpGuidEntryTable, (unsigned __int64 *)a1);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
    v4 = *(_QWORD *)(a1 + 168);
    if ( v4 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, v3);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, v3);
  }
  return result;
}
