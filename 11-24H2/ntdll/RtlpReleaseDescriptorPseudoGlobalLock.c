/*
 * XREFs of RtlpReleaseDescriptorPseudoGlobalLock @ 0x180040048
 * Callers:
 *     RtlUnlockHeap @ 0x18003FEF0 (RtlUnlockHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800416F0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x1801427F0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlpUnlockHeapForClone @ 0x180142C0C (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlWakeAddressAll @ 0x180098E50 (RtlWakeAddressAll.c)
 *     ZwFlushProcessWriteBuffers @ 0x180163AE0 (ZwFlushProcessWriteBuffers.c)
 */

void *__fastcall RtlpReleaseDescriptorPseudoGlobalLock(__int64 a1, int a2)
{
  int v3; // ecx
  void *result; // rax
  __int64 v6; // rax
  volatile signed __int32 *v7; // rbx

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
        RtlWakeAddressAll(v7);
        *(_DWORD *)(a1 + 24) &= ~4u;
      }
      *(_DWORD *)(a1 + 36) = 0;
      return (void *)RtlReleaseSRWLockExclusive(a1 + 40);
    }
  }
  return result;
}
