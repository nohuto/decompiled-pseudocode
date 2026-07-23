/*
 * XREFs of MiCommitInitialVadMetadataBits @ 0x14091C25C
 * Callers:
 *     MiMapProcessExecutable @ 0x14091B024 (MiMapProcessExecutable.c)
 * Callees:
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetFirstVad @ 0x1403C6358 (MiGetFirstVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     MiCommitVadMetadataBits @ 0x14091D290 (MiCommitVadMetadataBits.c)
 */

__int64 MiCommitInitialVadMetadataBits()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // r14d
  int v5; // ebp
  __int64 i; // rax
  void *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = PdcCreateWatchdogAroundClientCall();
  v4 = v3 | 4;
  if ( !v2 )
    v4 = v3;
  if ( !v4 )
    return 0LL;
  v5 = 0;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  for ( i = (__int64)MiGetFirstVad(Process); ; i = MiGetNextVad((unsigned __int64)v7) )
  {
    v7 = (void *)i;
    if ( !i )
      break;
    if ( (*(_DWORD *)(i + 48) & 0x70) == 0x20 )
    {
      MiReferenceVad(i);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
      MiLockVad((__int64)CurrentThread, (__int64)v7);
      v5 = MiCommitVadMetadataBits(v7, 0LL, v4);
      MiUnlockAndDereferenceVad(v7);
      if ( v5 < 0 )
        return (unsigned int)v5;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return (unsigned int)v5;
}
