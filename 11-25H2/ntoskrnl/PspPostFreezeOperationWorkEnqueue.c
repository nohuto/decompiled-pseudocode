/*
 * XREFs of PspPostFreezeOperationWorkEnqueue @ 0x1406EBF50
 * Callers:
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x140AC7BE0 (PsFreezeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PspPostFreezeOperationWorkEnqueue(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140F05588, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F05588, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140F05588, v3, (__int64)&qword_140F05588);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = a1 + 257;
  if ( !a1[257] )
  {
    PsReferenceSiloContext(a1);
    v7 = (_QWORD *)qword_140F05598;
    if ( *(__int64 **)qword_140F05598 != &qword_140F05590 )
      __fastfail(3u);
    *v6 = &qword_140F05590;
    a1[258] = v7;
    *v7 = v6;
    qword_140F05598 = (__int64)(a1 + 257);
    if ( (PsFreezeWorkGlobals & 1) == 0 )
    {
      ExQueueWorkItem(&stru_140F055A0, DelayedWorkQueue);
      PsFreezeWorkGlobals |= 1uLL;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F05588, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F05588);
  KeAbPostRelease((ULONG_PTR)&qword_140F05588);
  KeLeaveCriticalRegion();
}
