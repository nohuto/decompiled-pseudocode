/*
 * XREFs of RtlpEnsureSegHeapLockedForWalk @ 0x18005E200
 * Callers:
 *     RtlWalkHeap @ 0x18005E150 (RtlWalkHeap.c)
 *     RtlpWalkHeapInternal @ 0x18005E1A0 (RtlpWalkHeapInternal.c)
 *     RtlpHpTagDestroyHeap @ 0x18005E6D0 (RtlpHpTagDestroyHeap.c)
 * Callees:
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800D0AD4 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 */

void *__fastcall RtlpEnsureSegHeapLockedForWalk(__int64 a1)
{
  __int64 v1; // rbx
  void *result; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v1 + 24) & 4) == 0 )
  {
    result = (void *)*(unsigned int *)(v1 + 36);
    if ( (unsigned int)NtCurrentTeb()->ClientId.UniqueThread == (_DWORD)result )
    {
      RtlpHpEnvAcquireGlobalLockExclusive(a1 + 20);
      result = NtCurrentTeb()->ClientId.UniqueThread;
      *(_DWORD *)(a1 + 224) = (_DWORD)result;
      *(_DWORD *)(v1 + 24) |= 4u;
    }
  }
  return result;
}
