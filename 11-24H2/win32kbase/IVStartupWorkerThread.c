/*
 * XREFs of IVStartupWorkerThread @ 0x1400D04C8
 * Callers:
 *     _RegisterLogonProcess @ 0x140167C90 (_RegisterLogonProcess.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     isInputVirtualizationEnabled @ 0x1400D07E4 (isInputVirtualizationEnabled.c)
 *     CreateKernelEvent @ 0x140131DB0 (CreateKernelEvent.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1402168C4 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 */

__int64 IVStartupWorkerThread()
{
  __int64 v0; // rcx
  __int64 KernelEvent; // rbx
  __int64 v2; // rax
  char *v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned __int8)isInputVirtualizationEnabled() && !*(_QWORD *)(W32GetUserSessionState(v0) + 19424) )
  {
    KernelEvent = CreateKernelEvent(SynchronizationEvent);
    v2 = CreateKernelEvent(SynchronizationEvent);
    if ( KernelEvent )
    {
      if ( v2 )
      {
        v5[0] = KernelEvent;
        v5[1] = v2;
        return SendIVWorkerThreadRequest((struct _IVWORKER_INIT *)v5);
      }
      v3 = (char *)KernelEvent;
    }
    else
    {
      if ( !v2 )
        return 3221225495LL;
      v3 = (char *)v2;
    }
    GreDeleteFastMutex(v3);
    return 3221225495LL;
  }
  return 0LL;
}
