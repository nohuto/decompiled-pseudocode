/*
 * XREFs of LdrpCompleteProcessCloning @ 0x1801620DC
 * Callers:
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     LdrpCreateLoaderEvents @ 0x180109BFC (LdrpCreateLoaderEvents.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
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
    qword_1801D4718 = 0LL;
    qword_1801D4710 = (__int64)UniqueThread;
    dword_1801D470C = 1;
    dword_1801D4708 = -2;
    v2 = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801CE8B0 = 0LL;
    qword_1801CE8A8 = (__int64)v2;
    dword_1801CE8A0 = -2;
    dword_1801CE8A4 = 1;
    LoaderEvents = LdrpCreateLoaderEvents();
    if ( LoaderEvents < 0 )
      ZwTerminateProcess(-1LL, (unsigned int)LoaderEvents);
    LdrpMapAndSnapWork = 0LL;
  }
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpReleaseLoaderLock(v4, 13, 0);
  return LdrpDropLastInProgressCount();
}
