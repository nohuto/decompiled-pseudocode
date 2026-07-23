/*
 * XREFs of FsRtlNotifyInitializeSync @ 0x1409FF310
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1409FE4F0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1409FEBD0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __stdcall FsRtlNotifyInitializeSync(PNOTIFY_SYNC *NotifySync)
{
  __int64 Pool2; // rbx

  *NotifySync = 0LL;
  Pool2 = ExAllocatePool2(0x62uLL, 0x48uLL, 0x4E725346u);
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  *(_DWORD *)Pool2 = 1;
  KeInitializeEvent((PRKEVENT)(Pool2 + 24), SynchronizationEvent, 0);
  *(_QWORD *)(Pool2 + 56) = 0LL;
  *(_DWORD *)(Pool2 + 64) = 0;
  *NotifySync = (PNOTIFY_SYNC)Pool2;
}
