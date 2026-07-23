/*
 * XREFs of PopPowerAggregatorNotifyPdcSleepTransition @ 0x140A96860
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D5CC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409A0BFC (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x140A9692C (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyPdcSleepTransition(char a1, int a2, int a3)
{
  int v6; // ecx
  unsigned int v7; // edi

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F08C98 == 1 )
  {
    v7 = 0;
    if ( a1 )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( (_DWORD)xmmword_140F08C98 == 4 )
  {
    v7 = 0;
    if ( !a1 )
    {
LABEL_5:
      LOBYTE(xmmword_140F08CA8) = 0;
      *(_QWORD *)((char *)&xmmword_140F08CA8 + 4) = 0LL;
      goto LABEL_8;
    }
LABEL_7:
    DWORD2(xmmword_140F08CA8) = a3;
    v7 = 259;
    DWORD1(xmmword_140F08CA8) = a2;
    LOBYTE(xmmword_140F08CA8) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
    goto LABEL_8;
  }
  v7 = -1073741811;
LABEL_8:
  LOBYTE(v6) = a1;
  PopPowerAggregatorDiagTracePdcSleepTransition(
    v6,
    a2,
    (unsigned int)&xmmword_140F08C70,
    (unsigned int)&xmmword_140F08C98,
    v7);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return v7;
}
