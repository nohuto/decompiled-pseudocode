/*
 * XREFs of HalpProcessSecondarySignalList @ 0x140553420
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 */

__int64 HalpProcessSecondarySignalList()
{
  unsigned __int8 i; // al
  __int64 v1; // rbx
  unsigned __int8 v2; // dl
  __int64 v3; // rax

  for ( i = HalpAcquireHighLevelLock(&SecondarySignalListLock); ; i = HalpAcquireHighLevelLock(&SecondarySignalListLock) )
  {
    v1 = SecondarySignalList;
    v2 = i;
    if ( (__int64 *)SecondarySignalList == &SecondarySignalList )
      break;
    if ( *(__int64 **)(SecondarySignalList + 8) != &SecondarySignalList
      || (v3 = *(_QWORD *)SecondarySignalList, *(_QWORD *)(*(_QWORD *)SecondarySignalList + 8LL) != SecondarySignalList) )
    {
      __fastfail(3u);
    }
    SecondarySignalList = *(_QWORD *)SecondarySignalList;
    *(_QWORD *)(v3 + 8) = &SecondarySignalList;
    HalpReleaseHighLevelLock((__int64)&SecondarySignalListLock, v2);
    KeSetEvent((PRKEVENT)(v1 - 24), 0, 0);
  }
  SecondarySignalDpcRunning = 0;
  return HalpReleaseHighLevelLock((__int64)&SecondarySignalListLock, i);
}
