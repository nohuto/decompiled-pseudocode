/*
 * XREFs of PpmIdleStartCsVetoAccounting @ 0x1404B6580
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1403A5F7C (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

void PpmIdleStartCsVetoAccounting()
{
  KIRQL v0; // al
  __int64 v1; // r8
  unsigned int v2; // ebx
  KIRQL i; // di
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rcx

  if ( PpmPlatformStates )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v1 = PpmPlatformStates;
    v2 = 0;
    for ( i = v0; v2 < *(_DWORD *)PpmPlatformStates; ++v2 )
    {
      v4 = 0;
      v5 = v1 + 448LL * v2;
      if ( *(_DWORD *)(v5 + 108) )
      {
        do
        {
          v6 = v4++;
          *(_QWORD *)((v6 << 6) + *(_QWORD *)(v5 + 112) + 56) = 0LL;
        }
        while ( v4 < *(_DWORD *)(v5 + 108) );
      }
      PpmIdleCsVetoAccountingUpdateBlock(v5 + 80, 4, 1);
      v1 = PpmPlatformStates;
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, i);
  }
}
