/*
 * XREFs of ??0?$SEMOBJEXORSHARED@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x140021634
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140036B00 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140087C14 (--$GreAcquireSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall SEMOBJEXORSHARED<2>::SEMOBJEXORSHARED<2>(__int64 a1, struct _ERESOURCE **a2, char a3)
{
  struct _ERESOURCE *v4; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdx
  char v10; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v14; // rcx
  int v15; // r8d
  int v16; // eax

  v4 = *a2 + 11;
  *(_QWORD *)a1 = v4;
  *(_BYTE *)(a1 + 8) = a3;
  if ( a3 )
  {
    GreAcquireSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(EngAcquireSemaphoreShared, v4);
  }
  else
  {
    GreAcquireSemaphoreInternal(v4);
    CurrentThread = KeGetCurrentThread();
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
    v8 = (__int64 *)((v6 + 8) & -(__int64)(v6 != 0));
    if ( v8 )
    {
      if ( (*v8 & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (*v8 & 4) == 0 )
      {
        v14 = 0LL;
        v15 = 37;
        do
        {
          v16 = v14;
          v9 = *v8;
          if ( !_bittest64(&v9, v14) )
            v16 = v15;
          ++v14;
          v15 = v16;
        }
        while ( v14 < 0x40 );
        if ( v16 > 2 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
      }
      v10 = *(_BYTE *)(((v6 + 8) & -(__int64)(v6 != 0)) + 0xA);
      *(_BYTE *)(((v6 + 8) & -(__int64)(v6 != 0)) + 0xA) = v10 + 1;
      if ( !v10 )
        *v8 |= 4uLL;
    }
  }
  return a1;
}
