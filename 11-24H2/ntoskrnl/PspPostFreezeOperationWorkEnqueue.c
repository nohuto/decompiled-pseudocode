/*
 * XREFs of PspPostFreezeOperationWorkEnqueue @ 0x140A94554
 * Callers:
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall PspPostFreezeOperationWorkEnqueue(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&qword_140F05C48, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F05C48, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140F05C48, v3, (__int64)&qword_140F05C48);
  if ( v5 )
    v5[10] = 1;
  v6 = a1 + 257;
  if ( !a1[257] )
  {
    PsReferenceSiloContext(a1);
    v7 = (_QWORD *)qword_140F05C58;
    if ( *(__int64 **)qword_140F05C58 != &qword_140F05C50 )
      __fastfail(3u);
    *v6 = &qword_140F05C50;
    a1[258] = v7;
    *v7 = v6;
    qword_140F05C58 = (__int64)(a1 + 257);
    if ( (PsFreezeWorkGlobals & 1) == 0 )
    {
      ExQueueWorkItem(&stru_140F05C60, DelayedWorkQueue);
      PsFreezeWorkGlobals |= 1uLL;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F05C48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F05C48);
  KeAbPostRelease((ULONG_PTR)&qword_140F05C48);
  KeLeaveCriticalRegion();
}
