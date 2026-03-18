/*
 * XREFs of ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001E1E8
 * Callers:
 *     GreGetDeviceCaps @ 0x14001D350 (GreGetDeviceCaps.c)
 *     NtGdiGetDeviceCaps @ 0x14001E030 (NtGdiGetDeviceCaps.c)
 *     DrvGetDisplayConfigBufferSizesAndLeaveUserCrit @ 0x140023600 (DrvGetDisplayConfigBufferSizesAndLeaveUserCrit.c)
 *     DrvQueryDisplayConfigAndLeaveUserCrit @ 0x140023794 (DrvQueryDisplayConfigAndLeaveUserCrit.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400E71E0 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(__int64 **this)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( *((_BYTE *)this + 8) )
  {
    v2 = **this;
    EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v2 + 624);
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
    v6 = v4 + 8;
    v7 = -v4;
    if ( (v6 & -(__int64)(v7 != 0)) != 0 && (*(_BYTE *)((v6 & -(__int64)(v7 != 0)) + 9))-- == 1 )
      *(_QWORD *)(v6 & -(__int64)(v7 != 0)) &= ~2uLL;
    GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(v2 + 624));
    *((_BYTE *)this + 8) = 0;
  }
}
