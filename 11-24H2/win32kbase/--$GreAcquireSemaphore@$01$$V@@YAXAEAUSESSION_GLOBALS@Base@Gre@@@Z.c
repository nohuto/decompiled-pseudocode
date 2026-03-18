/*
 * XREFs of ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B140
 * Callers:
 *     ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x140011770 (-DxgkEngAcquireWin32kLocks@@YAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140013C30 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x140014520 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140020190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14003B000 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAX_N@Z @ 0x14003B100 (-vLock@NEEDGRELOCK@@QEAAX_N@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x14003B250 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1400846A0 (pProcessDfbSurfacesInternal.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x14013D36C (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     GreSetMagicColors @ 0x14014964C (GreSetMagicColors.c)
 *     ?GrepLockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C4160 (-GrepLockVisRgnFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1401C4B60 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001FFF0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 */

__int64 __fastcall GreAcquireSemaphore<2,>(struct _ERESOURCE **a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v11; // r8d
  int v12; // eax

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreLock", (unsigned int)*a1 + 1144, 0);
  GreAcquireSemaphoreInternal(v1 + 11);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  result = v3 + 8;
  v7 = (__int64 *)((v3 + 8) & -(__int64)(v3 != 0));
  if ( v7 )
  {
    if ( (*v7 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*v7 & 4) == 0 )
    {
      v5 = 0LL;
      v11 = 37;
      do
      {
        v12 = v5;
        v8 = *v7;
        if ( !_bittest64(&v8, v5) )
          v12 = v11;
        ++v5;
        v11 = v12;
      }
      while ( v5 < 0x40 );
      if ( v12 > 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(v5) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xA);
    result = (unsigned int)(v5 + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0xA) = v5 + 1;
    if ( !(_BYTE)v5 )
      *v7 |= 4uLL;
  }
  return result;
}
