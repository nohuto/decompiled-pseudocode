/*
 * XREFs of MiInitializeSections @ 0x1407EBD78
 * Callers:
 *     MiInitializePartition @ 0x1407ECD28 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     KeInitializeTimerEx @ 0x1404449F0 (KeInitializeTimerEx.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 */

void __fastcall MiInitializeSections(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // al

  v2 = a1 + 1904;
  *(_QWORD *)(v2 + 32) = v2 + 24;
  *(_QWORD *)(v2 + 24) = v2 + 24;
  *(_QWORD *)(v2 + 48) = v2 + 40;
  *(_QWORD *)(v2 + 40) = v2 + 40;
  *(_QWORD *)(v2 + 64) = v2 + 56;
  *(_QWORD *)(v2 + 56) = v2 + 56;
  KeInitializeEvent((PRKEVENT)v2, SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 1984) = a1 + 1976;
  *(_QWORD *)(a1 + 1976) = a1 + 1976;
  *(_QWORD *)(a1 + 2000) = a1 + 1992;
  *(_QWORD *)(a1 + 1992) = a1 + 1992;
  *(_QWORD *)(a1 + 2104) = a1 + 2096;
  *(_QWORD *)(a1 + 2096) = a1 + 2096;
  KeInitializeEvent((PRKEVENT)(a1 + 1784), NotificationEvent, 0);
  *(_QWORD *)(a1 + 2120) = a1 + 2112;
  *(_QWORD *)(a1 + 2112) = a1 + 2112;
  KeInitializeEvent((PRKEVENT)(a1 + 1760), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 2128), SynchronizationEvent, 0);
  KeInitializeTimerEx((PKTIMER)(a1 + 2008), SynchronizationTimer);
  KeInitializeEvent((PRKEVENT)(a1 + 2352), SynchronizationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 2384));
  KeInitializeEvent((PRKEVENT)(a1 + 2416), NotificationEvent, 0);
  *(_QWORD *)(a1 + 1848) = 1LL;
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_DWORD *)(a1 + 1888) = 0;
  v3 = *(_BYTE *)(a1 + 1895) & 0xFD;
  *(_QWORD *)(a1 + 1840) = a1;
  *(_BYTE *)(a1 + 1892) = -1;
  *(_BYTE *)(a1 + 1895) = v3 | 4;
  KeInitializeEvent((PRKEVENT)(a1 + 1864), NotificationEvent, 0);
}
