/*
 * XREFs of DxgkMiracastStopAllMiracastSessions @ 0x14031F900
 * Callers:
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140196A30 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x140244440 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DxgkSessionDisconnected @ 0x14031F4E0 (DxgkSessionDisconnected.c)
 *     DpiMiracastHandlePowerCallback @ 0x1403EEA30 (DpiMiracastHandlePowerCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x14007E454 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14007F220 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007F470 (DpiMiracastStopMiracastSessionSync.c)
 */

void __fastcall DxgkMiracastStopAllMiracastSessions(char a1, union _LARGE_INTEGER *a2, unsigned int a3)
{
  char *v6; // rsi
  __int64 i; // rbx
  __int64 v8; // rdi
  char *v9; // rdi

  while ( 1 )
  {
    v6 = 0LL;
    AcquireMiniportListMutex();
    for ( i = qword_14015E200; (__int64 *)i != &qword_14015E200; i = *(_QWORD *)i )
    {
      v8 = i + 32;
      v6 = (char *)i;
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(i + 32);
      *(_QWORD *)(i + 88) = KeGetCurrentThread();
      if ( (unsigned int)(*(_DWORD *)(i + 408) - 1) <= 1 )
      {
        DpiMiracastAddRefMiracastDeviceContext(i, (unsigned int)DxgkMiracastStopAllMiracastSessions);
        *(_QWORD *)(i + 88) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v8);
        break;
      }
      *(_QWORD *)(i + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v8);
    }
    v9 = 0LL;
    if ( (__int64 *)i != &qword_14015E200 )
      v9 = v6;
    ReleaseMiniportListMutex();
    if ( !v9 )
      break;
    DpiMiracastStopMiracastSessionSync(v9, a1, a2, 0LL, a3, 0);
    DpiMiracastReleaseMiracastDeviceContext((int *)v9, (unsigned int)DxgkMiracastStopAllMiracastSessions);
  }
}
