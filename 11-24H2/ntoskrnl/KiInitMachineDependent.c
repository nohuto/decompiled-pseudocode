/*
 * XREFs of KiInitMachineDependent @ 0x1405C0470
 * Callers:
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405C30E8 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     KiInitializeMTRR @ 0x140C2984C (KiInitializeMTRR.c)
 *     KiInitializeCacheErrataSupport @ 0x140C29F00 (KiInitializeCacheErrataSupport.c)
 */

char KiInitMachineDependent()
{
  int v0; // eax
  int v1; // ebp
  char v2; // si
  unsigned int i; // edi
  __int64 v4; // rcx
  char result; // al
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  if ( (KiCacheErrataMonitor & 3) != 0 )
  {
    if ( (KiCacheErrataMonitor & 2) != 0 )
    {
      v0 = 2;
    }
    else if ( MEMORY[0xFFFFF780000002EC] )
    {
      v0 = 1;
    }
    else
    {
      v0 = KiTLBCOverride & 1;
    }
    KiTLBCOverride = v0;
  }
  else
  {
    KiTLBCOverride = 0;
  }
  v1 = 0;
  v2 = 0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    if ( v1 )
    {
      KiSetSystemAffinityThreadToProcessor(i, 0LL);
    }
    else
    {
      KiSetSystemAffinityThreadToProcessor(i, &PreviousAffinity);
      v1 = 1;
    }
    if ( i == (_DWORD)KeNumberProcessors_0 - 1 )
      v2 = 1;
    if ( (KiCacheErrataMonitor & 3) != 0 )
    {
      LOBYTE(v4) = v2;
      if ( !(unsigned __int8)KiInitializeCacheErrataSupport(v4) )
        return 0;
    }
    LOBYTE(v4) = v2;
    KiInitializeMTRR(v4);
    if ( (KeFeatureBits & 0x400000) != 0 )
      __writemsr(0x1A0u, __readmsr(0x1A0u) | 0x8000000);
  }
  if ( KeGetCurrentPrcb()->CpuVendor == 2 )
    KiIa32MiscEnable = __readmsr(0x1A0u);
  if ( v1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  KiUserCodePatchMutex.Count = 1;
  KiUserCodePatchMutex.Owner = 0LL;
  KiUserCodePatchMutex.Contention = 0;
  LOWORD(KiUserCodePatchMutex.Event.Header.Lock) = 1;
  KiUserCodePatchMutex.Event.Header.Size = 6;
  KiUserCodePatchMutex.Event.Header.SignalState = 0;
  KiUserCodePatchMutex.Event.Header.WaitListHead.Blink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
  KiUserCodePatchMutex.Event.Header.WaitListHead.Flink = &KiUserCodePatchMutex.Event.Header.WaitListHead;
  memset_0(&KiAltContextWorkQueue, 0, 0x80uLL);
  KiAltContextWorkQueue.Blink = &KiAltContextWorkQueue;
  stru_140F0F8F8.DeferredRoutine = (PKDEFERRED_ROUTINE)KiAltReturnDpcRoutine;
  result = 1;
  KiAltContextWorkQueue.Flink = &KiAltContextWorkQueue;
  stru_140F0F938.WorkerRoutine = (void (__fastcall *)(void *))KiAltReturnWorkerRoutine;
  qword_140F0F958 = (__int64)KiAltContextProcessMcheckAltReturn;
  Lock = 0LL;
  stru_140F0F8F8.TargetInfoAsUlong = 275;
  stru_140F0F8F8.DeferredContext = &KiAltContextWorkQueue;
  stru_140F0F8F8.DpcData = 0LL;
  stru_140F0F8F8.ProcessorHistory = 0LL;
  stru_140F0F938.Parameter = &KiAltContextWorkQueue;
  stru_140F0F938.List.Flink = 0LL;
  KiAltReturnInitialized = 1;
  return result;
}
