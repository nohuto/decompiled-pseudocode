/*
 * XREFs of ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x140060E40
 * Callers:
 *     GrePtInSprite @ 0x1400226B0 (GrePtInSprite.c)
 *     GreZorderSprite @ 0x140025478 (GreZorderSprite.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400258BC (GreDwmNotifySpriteMonitorChange.c)
 *     vCleanupUMWindowlessSprite @ 0x14002A590 (vCleanupUMWindowlessSprite.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF14 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400308A8 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9120 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GrepAcquireLockValidate<2>()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v8; // rdx
  int v9; // r8d
  int v10; // eax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  result = v1 + 8;
  v4 = (__int64 *)((v1 + 8) & -(__int64)(v1 != 0));
  if ( v4 )
  {
    v5 = *v4;
    if ( (*v4 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (v5 & 4) == 0 )
    {
      v8 = 0LL;
      v9 = 37;
      do
      {
        v10 = v8;
        if ( !_bittest64(&v5, v8) )
          v10 = v9;
        ++v8;
        v9 = v10;
      }
      while ( v8 < 0x40 );
      if ( v10 > 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v8, (unsigned int)v10);
    }
    LOBYTE(v5) = *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0xA);
    result = (unsigned int)(v5 + 1);
    *(_BYTE *)(((v1 + 8) & -(__int64)(v1 != 0)) + 0xA) = v5 + 1;
    if ( !(_BYTE)v5 )
      *v4 |= 4uLL;
  }
  return result;
}
