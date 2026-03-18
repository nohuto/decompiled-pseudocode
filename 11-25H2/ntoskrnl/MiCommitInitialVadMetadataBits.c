/*
 * XREFs of MiCommitInitialVadMetadataBits @ 0x140906C50
 * Callers:
 *     MiMapProcessExecutable @ 0x1409051BC (MiMapProcessExecutable.c)
 * Callees:
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403D88FC (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetFirstVad @ 0x14047FEF0 (MiGetFirstVad.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiCommitVadMetadataBits @ 0x140906D54 (MiCommitVadMetadataBits.c)
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
  char *v7; // rbx

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
    v7 = (char *)i;
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
