/*
 * XREFs of RtlpAcquireDescriptorPseudoGlobalLockEx @ 0x180141DD8
 * Callers:
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18000322C (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x1801427F0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 *     RtlpLockHeapForClone @ 0x180142A28 (RtlpLockHeapForClone.c)
 * Callees:
 *     RtlTryAcquireSRWLockExclusive @ 0x18001B950 (RtlTryAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpAcquireDescriptorPseudoGlobalLockEx(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  char v4; // di
  void *UniqueThread; // rsi
  volatile signed __int32 *v6; // rcx

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    if ( (_DWORD)UniqueThread != *(_DWORD *)(a1 + 36) )
    {
      v6 = (volatile signed __int32 *)(a1 + 40);
      if ( (_BYTE)a2 )
      {
        if ( !RtlTryAcquireSRWLockExclusive(v6) )
          return 0;
      }
      else
      {
        RtlAcquireSRWLockExclusive(v6, a2, a3);
      }
      *(_DWORD *)(a1 + 32) = 1;
      *(_DWORD *)(a1 + 36) = (_DWORD)UniqueThread;
      return v4;
    }
    ++*(_DWORD *)(a1 + 32);
  }
  return v4;
}
