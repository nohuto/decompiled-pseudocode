/*
 * XREFs of PspInitializeSessionGlobals @ 0x1406EBD14
 * Callers:
 *     PsSessionCreate @ 0x1406EBB94 (PsSessionCreate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
 *     PspIsSessionLeaderProcess @ 0x140A753A8 (PspIsSessionLeaderProcess.c)
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
