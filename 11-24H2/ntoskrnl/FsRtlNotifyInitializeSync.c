/*
 * XREFs of FsRtlNotifyInitializeSync @ 0x140A02340
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A01520 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A01C00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void __stdcall FsRtlNotifyInitializeSync(PNOTIFY_SYNC *NotifySync)
{
  __int64 Pool2; // rbx

  *NotifySync = 0LL;
  Pool2 = ExAllocatePool2(0x62uLL);
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  *(_DWORD *)Pool2 = 1;
  KeInitializeEvent((PRKEVENT)(Pool2 + 24), SynchronizationEvent, 0);
  *(_QWORD *)(Pool2 + 56) = 0LL;
  *(_DWORD *)(Pool2 + 64) = 0;
  *NotifySync = (PNOTIFY_SYNC)Pool2;
}
