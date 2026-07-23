/*
 * XREFs of RtlpReleaseDescriptorPseudoGlobalLock @ 0x180020978
 * Callers:
 *     RtlUnlockHeap @ 0x180020820 (RtlUnlockHeap.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800ACAD4 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x1801409A0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlpUnlockHeapForClone @ 0x180140FBC (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlWakeAddressAll @ 0x18002DCA0 (RtlWakeAddressAll.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     ZwFlushProcessWriteBuffers @ 0x180161EA0 (ZwFlushProcessWriteBuffers.c)
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
