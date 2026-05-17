/*
 * XREFs of RtlpReleaseDescriptorPseudoGlobalLock @ 0x180093A38
 * Callers:
 *     RtlUnlockHeap @ 0x1800938E0 (RtlUnlockHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800950E0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x180143EE0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlpUnlockHeapForClone @ 0x1801442FC (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlWakeAddressAll @ 0x1800044C0 (RtlWakeAddressAll.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     ZwFlushProcessWriteBuffers @ 0x180165070 (ZwFlushProcessWriteBuffers.c)
 */

void *__fastcall RtlpReleaseDescriptorPseudoGlobalLock(__int64 a1, int a2)
{
  int v3; // ecx
  void *result; // rax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx

  v3 = *(_DWORD *)(a1 + 24);
  if ( (v3 & 2) == 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 32) = 1;
      result = NtCurrentTeb()->ClientId.UniqueThread;
      *(_DWORD *)(a1 + 36) = (_DWORD)result;
      *(_QWORD *)(a1 + 40) = 1LL;
    }
    if ( (*(_DWORD *)(a1 + 32))-- == 1 )
    {
      if ( (v3 & 4) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(v6 + 224) = 0;
        v7 = (volatile signed __int32 *)(v6 + 20);
        ZwFlushProcessWriteBuffers();
        _InterlockedAnd(v7, 0xFFFFFFEF);
        RtlWakeAddressAll((__int64)v7, v8);
        *(_DWORD *)(a1 + 24) &= ~4u;
      }
      *(_DWORD *)(a1 + 36) = 0;
      return (void *)RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
    }
  }
  return result;
}
