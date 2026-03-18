/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x1403D8D10
 * Callers:
 *     MiFlushAllPages @ 0x1404C7844 (MiFlushAllPages.c)
 *     MmProcessWorkingSetControl @ 0x140A4A36C (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x140239D80 (MiVadSupportsPrivateCommit.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403D88FC (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403D9338 (MiEmptyWorkingSetInitiate.c)
 *     MiGetFirstVad @ 0x14047FEF0 (MiGetFirstVad.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  unsigned int v6; // edi
  unsigned __int64 FirstVad; // rax
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
    FirstVad = MiGetFirstVad(Process);
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
      MiUnlockVad((__int64)CurrentThread, v9);
      FirstVad = MiGetNextVad(v9);
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v6;
}
