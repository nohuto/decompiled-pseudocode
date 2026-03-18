/*
 * XREFs of KeInitializeSecondaryInterruptServices @ 0x140730300
 * Callers:
 *     HalpAllocateGsivForSecondaryInterrupt @ 0x140552FA0 (HalpAllocateGsivForSecondaryInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 KeInitializeSecondaryInterruptServices()
{
  __int64 Pool2; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  struct _KEVENT *v3; // rsi
  __int64 v4; // rbp

  Pool2 = ExAllocatePool2(0x40uLL);
  v1 = 0;
  KiGlobalSecondaryIDT = Pool2;
  v2 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v3 = (struct _KEVENT *)(Pool2 + 8);
    v4 = 256LL;
    do
    {
      *v2 = 0LL;
      KeInitializeEvent(v3, SynchronizationEvent, 1u);
      v3 += 2;
      v2 += 6;
      --v4;
    }
    while ( v4 );
    qword_140F0FB08 = (__int64)&KiSecondarySignalList;
    KiSecondarySignalList = (__int64)&KiSecondarySignalList;
    KeInitializeDpc(&KiSecondarySignalDpc, (PKDEFERRED_ROUTINE)KiProcessSecondarySignalList, 0LL);
    KiSecondarySignalListLock = 0LL;
    KiSecondarySignalDpcRunning = 0;
    KiSecondaryInterruptServicesEnabled = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
