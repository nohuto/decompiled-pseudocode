/*
 * XREFs of ExpTimeZoneInitSiloState @ 0x1407B6A30
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772C80 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     ZwSetSystemTime @ 0x1406A9BD0 (ZwSetSystemTime.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExpReadTimeZoneInformation @ 0x1407B67D8 (ExpReadTimeZoneInformation.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409B1FC0 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409B2024 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpTimeZoneInitSiloState(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rdi
  void *Pool2; // rax
  __int64 v6; // rcx

  v1 = 0;
  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  ServerSiloGlobals[153] = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x3F0uLL);
    *(_DWORD *)(ServerSiloGlobals[153] + 432LL) = -1;
    ExpReadTimeZoneInformation((__int64)L"ActiveTimeBias", -1, ServerSiloGlobals[153] + 436LL);
    ExAcquireTimeRefreshLockExclusive();
    LOBYTE(v6) = 1;
    ExpRefreshTimeZoneInformation(v6);
    ExReleaseTimeRefreshLockExclusive();
    ZwSetSystemTime(0LL, 0LL);
  }
  else
  {
    v1 = -1073741670;
  }
  PsDetachSiloFromCurrentThread(v4);
  return v1;
}
