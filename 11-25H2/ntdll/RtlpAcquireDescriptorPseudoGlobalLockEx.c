/*
 * XREFs of RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x1801434C8
 * Callers:
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18011008C (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x180143EE0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlpLockHeapForClone @ 0x180144118 (RtlpLockHeapForClone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockExclusive @ 0x180047570 (RtlTryAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpAcquireDescriptorPseudoGlobalLockEx(__int64 a1, char a2)
{
  char v3; // di
  void *UniqueThread; // rsi
  _RTL_SRWLOCK *v5; // rcx

  v3 = 1;
  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    if ( (_DWORD)UniqueThread != *(_DWORD *)(a1 + 36) )
    {
      v5 = (_RTL_SRWLOCK *)(a1 + 40);
      if ( a2 )
      {
        if ( !RtlTryAcquireSRWLockExclusive(v5) )
          return 0;
      }
      else
      {
        RtlAcquireSRWLockExclusive(v5);
      }
      *(_DWORD *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 36) = (_DWORD)UniqueThread;
      return v3;
    }
    ++*(_DWORD *)(a1 + 32);
  }
  return v3;
}
