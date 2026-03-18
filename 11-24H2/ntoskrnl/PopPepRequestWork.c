/*
 * XREFs of PopPepRequestWork @ 0x1403170D0
 * Callers:
 *     PopPepCompleteComponentIdleState @ 0x1403110AC (PopPepCompleteComponentIdleState.c)
 *     PopPepSurprisePowerOn @ 0x1403112AC (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1403128A0 (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x1403169B8 (PopPepComponentSetLatency.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 *     PopPepIdleTimeoutRoutine @ 0x140452AB0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetResidency @ 0x1405DB904 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405DBA00 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402A0DCC (ExpTryQueueWorkItem.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 */

char __fastcall PopPepRequestWork(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // ebx

  v3 = *(_QWORD *)(a1 + 24) & 0x20LL;
  if ( a3 > a2 )
  {
    v4 = a3 - a2;
    if ( v4 )
    {
      v5 = v4;
      if ( v3 )
      {
        do
        {
          KeReleaseSemaphore(&stru_140F0D880, 0, 1, 0);
          v8 = 0LL;
          v9 = 1;
          do
          {
            _m_prefetchw(&dword_140F0D8A0);
            LODWORD(v3) = _InterlockedOr(&dword_140F0D8A0, v9);
            if ( ((unsigned int)v3 & v9) == 0 )
            {
              LOBYTE(v3) = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), &qword_140F0D8B0[5 * v8], 48, 0);
              if ( (_BYTE)v3 )
                break;
              LOBYTE(v3) = ~(_BYTE)v9;
              _InterlockedAnd(&dword_140F0D8A0, ~v9);
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
            _m_prefetchw(&dword_140F0D540);
            LODWORD(v3) = _InterlockedOr(&dword_140F0D540, v7);
            if ( ((unsigned int)v3 & v7) == 0 )
            {
              LOBYTE(v3) = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), &qword_140F0D550[5 * v6], 48, 0);
              if ( (_BYTE)v3 )
                break;
              LOBYTE(v3) = ~(_BYTE)v7;
              _InterlockedAnd(&dword_140F0D540, ~v7);
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
  return v3;
}
