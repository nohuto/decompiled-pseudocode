/*
 * XREFs of GreLockVisRgn @ 0x140021770
 * Callers:
 *     GreLockVisRgnSharedOrExclusive @ 0x140010ED0 (GreLockVisRgnSharedOrExclusive.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     DestroyCacheDCEntries @ 0x140022480 (DestroyCacheDCEntries.c)
 *     ReleaseCacheDC @ 0x1400225A0 (ReleaseCacheDC.c)
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     GreSuspendDirectDraw @ 0x140087130 (GreSuspendDirectDraw.c)
 *     UserGetMonitorDC @ 0x140099680 (UserGetMonitorDC.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     DestroyMonitorDCs @ 0x1400A2C70 (DestroyMonitorDCs.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x14013926C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 *     DelayedDestroyCacheDC @ 0x1401688B0 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 *     NtUserGetDC @ 0x14016C9E0 (NtUserGetDC.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B2608 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001FFF0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x140020FF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphoreShared @ 0x140021030 (EngAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1)
{
  _DWORD *v1; // r14
  int v2; // r8d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  int v6; // esi
  __int64 *v7; // rbx
  __int64 v8; // rdx
  char v9; // cl
  struct _ERESOURCE *v10; // rbx
  struct _KTHREAD *v11; // rbp
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 *v14; // rbx
  __int64 v15; // rdx
  char v16; // cl
  struct _ERESOURCE *v17; // rbx
  struct _KTHREAD *v18; // rbp
  __int64 v19; // rdi
  __int64 *v20; // rax
  unsigned __int64 k; // rcx
  __int64 result; // rax
  __int64 *v23; // rbx
  __int64 v24; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v27; // ebx
  __int64 v28; // rax
  int v29; // ebx
  __int64 v30; // rax
  int v31; // r8d
  unsigned __int64 i; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // r8d
  unsigned __int64 j; // rcx
  int v37; // eax

  v1 = *(_DWORD **)(W32GetSessionState(a1) + 88);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"DynamicModeChange", *v1 + 624, v2);
  EngAcquireSemaphoreShared((HSEMAPHORE)(*(_QWORD *)v1 + 624LL));
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v6 = 37;
  v7 = (__int64 *)((v4 + 8) & -(__int64)(v4 != 0));
  if ( v7 )
  {
    if ( (*v7 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v7 & 2) == 0 )
    {
      v31 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v33 = i;
        v8 = *v7;
        if ( !_bittest64(&v8, i) )
          v33 = v31;
        v31 = v33;
      }
      if ( v33 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v9 = *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 9);
    *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 9) = v9 + 1;
    if ( !v9 )
      *v7 |= 2uLL;
  }
  v10 = *(struct _ERESOURCE **)v1;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreLock", *v1 + 1144, 0);
  GreAcquireSemaphoreInternal(v10 + 11);
  v11 = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v27 = W32GetCurrentWin32kSessionId(),
        v28 = PsGetCurrentThreadProcess(),
        v27 == (unsigned int)PsGetProcessSessionIdEx(v28)) )
  {
    v13 = (__int64 *)PsGetThreadWin32Thread(v11);
    if ( v13 )
      v12 = *v13;
  }
  v14 = (__int64 *)((v12 + 8) & -(__int64)(v12 != 0));
  if ( v14 )
  {
    if ( (*v14 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*v14 & 4) == 0 )
    {
      v35 = 37;
      for ( j = 0LL; j < 0x40; ++j )
      {
        v37 = j;
        v15 = *v14;
        if ( !_bittest64(&v15, j) )
          v37 = v35;
        v35 = v37;
      }
      if ( v37 > 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v16 = *(_BYTE *)(((v12 + 8) & -(__int64)(v12 != 0)) + 0xA);
    *(_BYTE *)(((v12 + 8) & -(__int64)(v12 != 0)) + 0xA) = v16 + 1;
    if ( !v16 )
      *v14 |= 4uLL;
  }
  v17 = *(struct _ERESOURCE **)v1;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"DCVisRgn", *v1 + 728, 0);
  GreAcquireSemaphoreInternal(v17 + 7);
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v29 = W32GetCurrentWin32kSessionId(),
        v30 = PsGetCurrentThreadProcess(),
        v29 == (unsigned int)PsGetProcessSessionIdEx(v30)) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v20 )
      v19 = *v20;
  }
  result = v19 + 8;
  v23 = (__int64 *)((v19 + 8) & -(__int64)(v19 != 0));
  if ( v23 )
  {
    if ( (*v23 & 0xFFFFFFFFFFFFFFF8uLL) != 0 && (*v23 & 8) == 0 )
    {
      for ( k = 0LL; k < 0x40; ++k )
      {
        v34 = k;
        v24 = *v23;
        if ( !_bittest64(&v24, k) )
          v34 = v6;
        v6 = v34;
      }
      if ( v34 > 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(k) = *(_BYTE *)(((v19 + 8) & -(__int64)(v19 != 0)) + 0xB);
    result = (unsigned int)(k + 1);
    *(_BYTE *)(((v19 + 8) & -(__int64)(v19 != 0)) + 0xB) = k + 1;
    if ( !(_BYTE)k )
      *v23 |= 8uLL;
  }
  return result;
}
