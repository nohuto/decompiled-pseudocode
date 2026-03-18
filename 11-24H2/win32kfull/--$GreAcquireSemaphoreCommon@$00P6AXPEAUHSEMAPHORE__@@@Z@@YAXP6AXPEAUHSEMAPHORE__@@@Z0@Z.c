/*
 * XREFs of ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14015C474
 * Callers:
 *     GreRemoveDisplayDriverRealizations @ 0x140132334 (GreRemoveDisplayDriverRealizations.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x14015AA00 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 *     GreDrvDisconnect @ 0x1402634A4 (GreDrvDisconnect.c)
 *     ??0?$SEMOBJ@$00@@QEAA@XZ @ 0x1402646D4 (--0-$SEMOBJ@$00@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026C118 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(void (__fastcall *a1)(__int64), __int64 a2)
{
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

  a1(a2);
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
    if ( (*v7 & 0xFFFFFFFFFFFFFFFEuLL) != 0 && (*v7 & 2) == 0 )
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
      if ( v12 > 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(v5) = *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 9);
    result = (unsigned int)(v5 + 1);
    *(_BYTE *)(((v3 + 8) & -(__int64)(v3 != 0)) + 9) = v5 + 1;
    if ( !(_BYTE)v5 )
      *v7 |= 2uLL;
  }
  return result;
}
