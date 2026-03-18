/*
 * XREFs of ldevUnloadImage @ 0x1C0017800
 * Callers:
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00171B4 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadDriver @ 0x1C0017300 (ldevLoadDriver.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00A9B3C (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(_QWORD *a1)
{
  __int64 v2; // rdi
  void (*v4)(void); // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  struct _ERESOURCE *v10; // rcx
  void *v11; // rdx
  void *v12; // rdx

  v2 = *(_QWORD *)(SGDGetSessionState() + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16LL);
  if ( (*((_DWORD *)a1 + 7))-- == 1 )
  {
    WdLogSingleEntry0(5LL);
    v4 = (void (*)(void))a1[16];
    if ( v4 )
      v4();
    v5 = a1[2];
    if ( v5 && (a1[4] & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v5 + 24), 8uLL);
    if ( *a1 )
      *(_QWORD *)(*a1 + 8LL) = a1[1];
    v6 = (_QWORD *)a1[1];
    v7 = *a1;
    if ( v6 )
      *v6 = v7;
    else
      *(_QWORD *)(v2 + 1888) = v7;
    v8 = a1[2];
    if ( v8 )
    {
      v11 = *(void **)(v8 + 8);
      if ( v11 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
      v12 = (void *)a1[2];
      if ( v12 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v12);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  }
  else
  {
    WdLogSingleEntry0(5LL);
  }
  result = EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
  v10 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v10 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    return PsLeavePriorityRegion();
  }
  return result;
}
