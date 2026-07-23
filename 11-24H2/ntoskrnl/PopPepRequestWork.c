/*
 * XREFs of PopPepRequestWork @ 0x1402BFC80
 * Callers:
 *     PopPepComponentSetLatency @ 0x1402BF568 (PopPepComponentSetLatency.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x1403A60EC (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x140447B60 (PopPepIdleTimeoutRoutine.c)
 *     PopPepCompleteComponentIdleState @ 0x1404C8510 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x1405D87D4 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D88D0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     ExpTryQueueWorkItem @ 0x1403AB6FC (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall PopPepRequestWork(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // r8d
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // ebx

  result = *(_QWORD *)(a1 + 24) & 0x20LL;
  if ( a3 > a2 )
  {
    v4 = a3 - a2;
    if ( v4 )
    {
      v5 = v4;
      if ( result )
      {
        do
        {
          KeReleaseSemaphore(&stru_140F0DA00, 0, 1, 0);
          v8 = 0LL;
          v9 = 1;
          do
          {
            _m_prefetchw(&dword_140F0DA20);
            result = (unsigned int)_InterlockedOr(&dword_140F0DA20, v9);
            if ( ((unsigned int)result & v9) == 0 )
            {
              result = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), (char *)&unk_140F0DA30 + 40 * v8, 48LL);
              if ( (_BYTE)result )
                break;
              result = ~v9;
              _InterlockedAnd(&dword_140F0DA20, result);
            }
            v8 = (unsigned int)(v8 + 1);
            v9 = __ROL4__(v9, 1);
          }
          while ( (unsigned int)v8 < 4 );
          --v5;
        }
        while ( v5 );
      }
      else
      {
        do
        {
          KeReleaseSemaphore(&Semaphore, 0, 1, 0);
          v6 = 0LL;
          v7 = 1;
          do
          {
            _m_prefetchw(&dword_140F0D840);
            result = (unsigned int)_InterlockedOr(&dword_140F0D840, v7);
            if ( ((unsigned int)result & v7) == 0 )
            {
              result = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), (char *)&unk_140F0D850 + 40 * v6, 48LL);
              if ( (_BYTE)result )
                break;
              result = ~v7;
              _InterlockedAnd(&dword_140F0D840, result);
            }
            v6 = (unsigned int)(v6 + 1);
            v7 = __ROL4__(v7, 1);
          }
          while ( (unsigned int)v6 < 4 );
          --v5;
        }
        while ( v5 );
      }
    }
  }
  return result;
}
