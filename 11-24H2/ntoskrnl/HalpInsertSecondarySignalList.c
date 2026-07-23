/*
 * XREFs of HalpInsertSecondarySignalList @ 0x1405533FC
 * Callers:
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14037229C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpReleaseSecondaryIcEntryShared @ 0x1403754EC (HalpReleaseSecondaryIcEntryShared.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 */

__int64 __fastcall HalpInsertSecondarySignalList(__int64 a1)
{
  unsigned __int8 v2; // al
  _QWORD *v3; // rcx
  unsigned __int8 v4; // di
  _QWORD *v5; // rbx
  bool v6; // zf

  v2 = HalpAcquireHighLevelLock(&SecondarySignalListLock);
  v3 = (_QWORD *)qword_140F8FE98;
  v4 = v2;
  v5 = (_QWORD *)(a1 + 144);
  if ( *(__int64 **)qword_140F8FE98 != &SecondarySignalList )
    __fastfail(3u);
  v6 = SecondarySignalDpcRunning == 0;
  *v5 = &SecondarySignalList;
  v5[1] = v3;
  *v3 = v5;
  qword_140F8FE98 = (__int64)v5;
  if ( v6 )
  {
    SecondarySignalDpcRunning = 1;
    KeInsertQueueDpc(&SecondarySignalDpc, 0LL, 0LL);
  }
  return HalpReleaseHighLevelLock((volatile signed __int64 *)&SecondarySignalListLock, v4);
}
