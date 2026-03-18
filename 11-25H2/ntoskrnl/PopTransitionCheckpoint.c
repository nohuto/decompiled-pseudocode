/*
 * XREFs of PopTransitionCheckpoint @ 0x140A1C604
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140748030 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

char __fastcall PopTransitionCheckpoint(int a1, int a2)
{
  unsigned __int64 CurrentServerSilo; // rax
  char result; // al
  __int64 Pool2; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  result = PsIsHostSilo(CurrentServerSilo);
  if ( result )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopTransitionCheckpointLock);
    if ( PopTransitionCheckpoints != &PopTransitionCheckpoints || a1 == 1 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v7 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = PopTransitionCheckpointsSequenceNumber;
        *(_DWORD *)(Pool2 + 20) = a1;
        *(_DWORD *)(Pool2 + 24) = a2;
        *(_QWORD *)(Pool2 + 32) = MEMORY[0xFFFFF78000000008];
        v8 = (_QWORD *)qword_140F0DBA8;
        if ( *(PVOID **)qword_140F0DBA8 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v7 = &PopTransitionCheckpoints;
        v7[1] = v8;
        *v8 = v7;
        qword_140F0DBA8 = (__int64)v7;
      }
      PopBsdTransitionLatestCheckpointSeqNumber = PopTransitionCheckpointsSequenceNumber++;
      PopBsdTransitionLatestCheckpointId = a1;
      PopBsdTransitionLatestCheckpointType = a2;
    }
    return PopReleaseRwLock(&PopTransitionCheckpointLock);
  }
  return result;
}
