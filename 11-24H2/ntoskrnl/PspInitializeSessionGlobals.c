/*
 * XREFs of PspInitializeSessionGlobals @ 0x1406F5578
 * Callers:
 *     PsSessionCreate @ 0x1406F53F8 (PsSessionCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     PspIsSessionLeaderProcess @ 0x140A7194C (PspIsSessionLeaderProcess.c)
 */

__int64 PspInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *Process; // rdi

  CurrentThread = KeGetCurrentThread();
  Process = (struct _LIST_ENTRY *)CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( !(unsigned int)PspIsSessionLeaderProcess(CurrentThread->Process) )
  {
    if ( PspSessionLeaderProcess )
    {
      if ( PsIsCurrentThreadInServerSilo() )
      {
        PspLockProcessListExclusive((__int64)CurrentThread);
        if ( !PsGetCurrentServerSiloGlobals()[52].Blink )
        {
          PsGetCurrentServerSiloGlobals()[52].Blink = Process;
          ObfReferenceObjectWithTag(Process, 0x73536D4Du);
        }
        PspUnlockProcessListExclusive((__int64)CurrentThread);
      }
      if ( !(unsigned int)PspIsSessionLeaderProcess(Process) )
        return 3221225500LL;
    }
    else
    {
      PspLockProcessListExclusive((__int64)CurrentThread);
      if ( PspSessionLeaderProcess )
      {
        PspUnlockProcessListExclusive((__int64)CurrentThread);
        return Process != (struct _LIST_ENTRY *)PspSessionLeaderProcess ? 0xC000001C : 0;
      }
      PspSessionLeaderProcess = (__int64)Process;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 105) = Process;
      PspUnlockProcessListExclusive((__int64)CurrentThread);
      ObfReferenceObjectWithTag(Process, 0x73536D4Du);
    }
  }
  return 0LL;
}
