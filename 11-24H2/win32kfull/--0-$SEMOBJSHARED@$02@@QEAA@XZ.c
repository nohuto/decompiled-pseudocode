/*
 * XREFs of ??0?$SEMOBJSHARED@$02@@QEAA@XZ @ 0x140021B3C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x14001C294 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x14001E530 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x14001F2D8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400212B0 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x140021474 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400218E4 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     UntrapAppContainerRenderingWrap @ 0x140147F00 (UntrapAppContainerRenderingWrap.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

Gre::Base *__fastcall SEMOBJSHARED<3>::SEMOBJSHARED<3>(Gre::Base *a1)
{
  HSEMAPHORE v2; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdx
  char v8; // cl
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned __int64 v12; // rcx
  int v13; // r8d
  int v14; // eax

  v2 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 728LL);
  *(_QWORD *)a1 = v2;
  GreAcquireSemaphoreSharedInternal(v2);
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
  v6 = (__int64 *)((v4 + 8) & -(__int64)(v4 != 0));
  if ( v6 )
  {
    v7 = *v6;
    if ( (*v6 & 0xFFFFFFFFFFFFFFF8uLL) != 0 && (*v6 & 8) == 0 )
    {
      v12 = 0LL;
      v13 = 37;
      do
      {
        v14 = v12;
        if ( !_bittest64(&v7, v12) )
          v14 = v13;
        ++v12;
        v13 = v14;
      }
      while ( v12 < 0x40 );
      if ( v14 > 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v7, (unsigned int)v14);
    }
    v8 = *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 0xB);
    *(_BYTE *)(((v4 + 8) & -(__int64)(v4 != 0)) + 0xB) = v8 + 1;
    if ( !v8 )
      *v6 |= 8uLL;
  }
  return a1;
}
