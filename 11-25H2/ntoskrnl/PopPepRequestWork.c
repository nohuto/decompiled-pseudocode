/*
 * XREFs of PopPepRequestWork @ 0x1402C126C
 * Callers:
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1402C0F08 (PopPepComponentSetLatency.c)
 *     PopPepUpdateConstraints @ 0x140357F10 (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x1403A5D50 (PopPepIdleTimeoutRoutine.c)
 *     PopPepSurprisePowerOn @ 0x14048CA9C (PopPepSurprisePowerOn.c)
 *     PopPepCompleteComponentIdleState @ 0x1404CBFBC (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x1405D6724 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D6820 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     ExpTryQueueWorkItem @ 0x14028214C (ExpTryQueueWorkItem.c)
 */

void __fastcall PopPepRequestWork(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r8d
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi

  if ( a3 > a2 )
  {
    v3 = a3 - a2;
    if ( v3 )
    {
      v4 = v3;
      if ( (*(_QWORD *)(a1 + 24) & 0x20LL) != 0 )
      {
        do
        {
          KeReleaseSemaphore(&Semaphore, 0, 1, 0);
          v6 = 0LL;
          do
          {
            _m_prefetchw(&dword_140F0CF60);
            if ( (_InterlockedOr(&dword_140F0CF60, 1 << v6) & (1 << v6)) == 0 )
            {
              if ( ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), &qword_140F0CF70[5 * v6], 48, 0) )
                break;
              _InterlockedAnd(&dword_140F0CF60, ~(1 << v6));
            }
            v6 = (unsigned int)(v6 + 1);
          }
          while ( (unsigned int)v6 < 4 );
          --v4;
        }
        while ( v4 );
      }
      else
      {
        do
        {
          KeReleaseSemaphore(&stru_140F0D200, 0, 1, 0);
          v5 = 0LL;
          do
          {
            _m_prefetchw(&dword_140F0D220);
            if ( (_InterlockedOr(&dword_140F0D220, 1 << v5) & (1 << v5)) == 0 )
            {
              if ( ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), &qword_140F0D230[5 * v5], 48, 0) )
                break;
              _InterlockedAnd(&dword_140F0D220, ~(1 << v5));
            }
            v5 = (unsigned int)(v5 + 1);
          }
          while ( (unsigned int)v5 < 4 );
          --v4;
        }
        while ( v4 );
      }
    }
  }
}
