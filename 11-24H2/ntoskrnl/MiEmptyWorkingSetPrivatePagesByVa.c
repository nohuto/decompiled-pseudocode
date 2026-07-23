/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C752C
 * Callers:
 *     MiFlushAllPages @ 0x1402653D4 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x140A434A4 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1403455B0 (MiVadSupportsPrivateCommit.c)
 *     MiGetFirstVad @ 0x1403C6358 (MiGetFirstVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C9030 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  unsigned int v6; // edi
  __int64 FirstVad; // rax
  unsigned __int64 v9; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 500) & 0x20) != 0 )
  {
    v6 = -1073741558;
  }
  else
  {
    FirstVad = (__int64)MiGetFirstVad(Process);
    v6 = 0;
    while ( 1 )
    {
      v9 = FirstVad;
      if ( !FirstVad )
        break;
      MiLockVad((__int64)CurrentThread, FirstVad);
      if ( (*(_DWORD *)(v9 + 48) & 4) == 0
        && (unsigned int)MiVadSupportsPrivateCommit(v9)
        && !(unsigned int)MiVadMapsLargeImage(v9) )
      {
        MiEmptyWorkingSetInitiate(
          a1,
          a2 | 2u,
          (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32)) << 12,
          ((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12) | 0xFFF);
      }
      MiUnlockVad(CurrentThread, v9);
      FirstVad = MiGetNextVad(v9);
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v6;
}
