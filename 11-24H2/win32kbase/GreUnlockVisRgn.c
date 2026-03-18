/*
 * XREFs of GreUnlockVisRgn @ 0x140021330
 * Callers:
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
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall GreUnlockVisRgn(__int64 a1)
{
  struct _ERESOURCE **v1; // r15
  struct _ERESOURCE *v2; // rbp
  int v3; // r8d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  bool v10; // zf
  struct _ERESOURCE *v11; // rbp
  int v12; // r8d
  struct _KTHREAD *v13; // r14
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  struct _ERESOURCE *v18; // rsi
  int v19; // r8d
  struct _KTHREAD *v20; // rbp
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v26; // ebx
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rax

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v2 = *v1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"DCVisRgn", *(_DWORD *)v1 + 728, v3);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v8 = v6 + 8;
  v9 = -v6;
  if ( (v8 & -(__int64)(v9 != 0)) != 0 )
  {
    v10 = (*(_BYTE *)((v8 & -(__int64)(v9 != 0)) + 0xB))-- == 1;
    if ( v10 )
      *(_QWORD *)(v8 & -(__int64)(v9 != 0)) &= ~8uLL;
  }
  GreReleaseSemaphoreSharedInternal(v2 + 7);
  v11 = *v1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreLock", *(_DWORD *)v1 + 1144, v12);
  v13 = KeGetCurrentThread();
  v14 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v26 = W32GetCurrentWin32kSessionId(),
        v27 = PsGetCurrentThreadProcess(),
        v26 == (unsigned int)PsGetProcessSessionIdEx(v27)) )
  {
    v15 = (__int64 *)PsGetThreadWin32Thread(v13);
    if ( v15 )
      v14 = *v15;
  }
  v16 = v14 + 8;
  v17 = -v14;
  if ( (v16 & -(__int64)(v17 != 0)) != 0 )
  {
    v10 = (*(_BYTE *)((v16 & -(__int64)(v17 != 0)) + 0xA))-- == 1;
    if ( v10 )
      *(_QWORD *)(v16 & -(__int64)(v17 != 0)) &= ~4uLL;
  }
  GreReleaseSemaphoreSharedInternal(v11 + 11);
  v18 = *v1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"DynamicModeChange", *(_DWORD *)v1 + 624, v19);
  v20 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v28 = W32GetCurrentWin32kSessionId(),
        v29 = PsGetCurrentThreadProcess(),
        v28 == (unsigned int)PsGetProcessSessionIdEx(v29)) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v20);
    if ( v21 )
      v5 = *v21;
  }
  v22 = v5 + 8;
  v23 = -v5;
  if ( (v22 & -(__int64)(v23 != 0)) != 0 )
  {
    v10 = (*(_BYTE *)((v22 & -(__int64)(v23 != 0)) + 9))-- == 1;
    if ( v10 )
      *(_QWORD *)(v22 & -(__int64)(v23 != 0)) &= ~2uLL;
  }
  GreReleaseSemaphoreSharedInternal(v18 + 6);
}
