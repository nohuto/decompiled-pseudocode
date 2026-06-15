/*
 * XREFs of ?OnServiceShutdown@@YAXPEAXE@Z @ 0x180144E80
 * Callers:
 *     <none>
 * Callees:
 *     ?MyServiceTerminate@@YAXXZ @ 0x180145834 (-MyServiceTerminate@@YAXXZ.c)
 */

void __fastcall OnServiceShutdown(void *a1)
{
  char *v1; // rbx
  __int64 v2; // r9
  char *v3; // rcx
  DWORD ThreadId; // [rsp+50h] [rbp+18h] BYREF

  if ( (char *)hServiceStartThread - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    WaitForSingleObject(hServiceStartThread, 0xFFFFFFFF);
    CloseHandle(hServiceStartThread);
    hServiceStartThread = 0LL;
  }
  v1 = 0LL;
  hEventShutdownComplete = CreateEventW(0LL, 1, 0, 0LL);
  if ( hEventShutdownComplete )
  {
    ThreadId = 0;
    v1 = (char *)CreateThread(0LL, 0LL, ShutdownKeepaliveThread, 0LL, 0, &ThreadId);
  }
  MyServiceTerminate();
  if ( hEventShutdownWait )
    UnregisterWaitEx(hEventShutdownWait, 0LL);
  if ( hEventShutdown )
    CloseHandle(hEventShutdown);
  v3 = (char *)hEventShutdownComplete;
  if ( hEventShutdownComplete )
  {
    SetEvent(hEventShutdownComplete);
    v3 = (char *)hEventShutdownComplete;
  }
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    WaitForSingleObject(v1, 0xFFFFFFFF);
    CloseHandle(v1);
    v3 = (char *)hEventShutdownComplete;
  }
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    hEventShutdownComplete = 0LL;
  }
  ReportStatusToSCMgr(1LL, dwServiceError, 0LL, v2);
}
