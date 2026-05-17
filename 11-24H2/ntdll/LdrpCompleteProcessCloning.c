/*
 * XREFs of LdrpCompleteProcessCloning @ 0x180160B48
 * Callers:
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpCreateLoaderEvents @ 0x1801072EC (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 */

__int64 __fastcall LdrpCompleteProcessCloning(int a1)
{
  void *UniqueThread; // rcx
  void *v2; // rcx
  int LoaderEvents; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801D26B8 = 0LL;
    qword_1801D26B0 = (__int64)UniqueThread;
    dword_1801D26AC = 1;
    dword_1801D26A8 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801CC8B0 = 0LL;
    qword_1801CC8A8 = (__int64)v2;
    dword_1801CC8A0 = -2;
    dword_1801CC8A4 = 1;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess(-1LL, (unsigned int)LoaderEvents);
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v4, 0xDu, 0);
  return LdrpDropLastInProgressCount();
}
