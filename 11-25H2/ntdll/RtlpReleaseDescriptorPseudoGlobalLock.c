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

void __fastcall RtlpReleaseDescriptorPseudoGlobalLock(__int64 a1, int a2)
{
  int v3; // ecx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx

  v3 = *(_DWORD *)(a1 + 24);
  if ( (v3 & 2) == 0 )
  {
    if ( a2 )
    {
      *(_DWORD *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 36) = NtCurrentTeb()->ClientId.UniqueThread;
      *(_QWORD *)(a1 + 40) = 1LL;
    }
    if ( (*(_DWORD *)(a1 + 32))-- == 1 )
    {
      if ( (v3 & 4) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(v5 + 224) = 0;
        v6 = (volatile signed __int32 *)(v5 + 20);
        ZwFlushProcessWriteBuffers();
        _InterlockedAnd(v6, 0xFFFFFFEF);
        RtlWakeAddressAll((PVOID)v6);
        *(_DWORD *)(a1 + 24) &= ~4u;
      }
      *(_DWORD *)(a1 + 36) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
    }
  }
}
