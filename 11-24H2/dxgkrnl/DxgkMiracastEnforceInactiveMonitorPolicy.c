/*
 * XREFs of DxgkMiracastEnforceInactiveMonitorPolicy @ 0x140041860
 * Callers:
 *     DxgkCompleteTopologyTransition @ 0x14038E140 (DxgkCompleteTopologyTransition.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14007F8A0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007FAF0 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DxgkMiracastEnforceInactiveMonitorPolicy(_DWORD *a1)
{
  void *v1; // rbp
  __int64 i; // rbx
  __int64 v4; // rcx
  void *v5; // rdi

  v1 = 0LL;
  AcquireMiniportListMutex();
  for ( i = qword_1401611C0; (__int64 *)i != &qword_1401611C0; i = *(_QWORD *)i )
  {
    v1 = (void *)i;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(i + 32);
    *(_QWORD *)(i + 88) = KeGetCurrentThread();
    if ( (unsigned int)(*(_DWORD *)(i + 408) - 1) <= 1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(i + 432) + 64LL);
      if ( *(_DWORD *)(v4 + 2696) == *a1 && *(_DWORD *)(v4 + 2700) == a1[1] )
      {
        *(_BYTE *)(i + 589) = 1;
      }
      else if ( *(_BYTE *)(i + 589) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(i + 24));
        _InterlockedXor((volatile signed __int32 *)(i + 28), (unsigned int)DxgkMiracastEnforceInactiveMonitorPolicy);
        *(_QWORD *)(i + 88) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
        break;
      }
    }
    *(_QWORD *)(i + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(i + 32);
  }
  v5 = 0LL;
  if ( (__int64 *)i != &qword_1401611C0 )
    v5 = v1;
  ReleaseMiniportListMutex();
  if ( v5 )
  {
    DpiMiracastStopMiracastSessionSync(v5, 134, 0);
    DpiMiracastReleaseMiracastDeviceContext(v5);
  }
}
