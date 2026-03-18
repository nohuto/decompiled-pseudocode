/*
 * XREFs of ExGetWakeTimerList @ 0x1404C1614
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PoStoreDiagnosticContext @ 0x1404259A0 (PoStoreDiagnosticContext.c)
 *     KeQueryTimerDueTime @ 0x14048EAC4 (KeQueryTimerDueTime.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v3; // r14
  _QWORD *v4; // r12
  unsigned __int64 v5; // rbp
  void *v6; // r15
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 *i; // rdi
  __int64 v10; // rcx
  int v11; // edi
  __int64 Pool2; // rax
  __int64 *v13; // r12
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  unsigned __int64 v16; // r13
  KIRQL v17; // al
  int v18; // edx
  __int64 TimerDueTime; // rax
  __int64 v20; // rcx
  _QWORD *v21; // r14
  unsigned __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  struct _KTHREAD *v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]
  int v30; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  v4 = a1;
  v24 = CurrentThread;
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v6 = 0LL;
  v7 = KeAbPreAcquire((__int64)&ExpWakeTimerLock, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, (__int64)&ExpWakeTimerLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  for ( i = (__int64 *)ExpWakeTimerList; i != &ExpWakeTimerList; i = (__int64 *)*i )
  {
    v10 = *(i - 1);
    if ( v10 )
    {
      v23 = 0LL;
      PoStoreDiagnosticContext(v10, 0LL, &v23);
      v5 = (v23 + 31 + v5) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v5 > 0xFFFFFFFF )
      {
        v11 = -1073741789;
        goto LABEL_30;
      }
    }
  }
  if ( !v5 )
    v5 = 64LL;
  Pool2 = ExAllocatePool2(0x101uLL);
  v6 = (void *)Pool2;
  if ( Pool2 )
  {
    v13 = (__int64 *)ExpWakeTimerList;
    v11 = 0;
    v14 = 0LL;
    v15 = Pool2;
    v23 = 0LL;
    v16 = v5;
    while ( v13 != &ExpWakeTimerList )
    {
      if ( v16 < 0x40 )
        goto LABEL_26;
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 - 25);
      v18 = *((_DWORD *)v13 - 6);
      NewIrql = v17;
      v26 = *(v13 - 1);
      v30 = v18;
      if ( v26 )
        TimerDueTime = KeQueryTimerDueTime((__int64)(v13 - 33));
      else
        TimerDueTime = 0LL;
      v25 = TimerDueTime;
      KeReleaseSpinLock((PKSPIN_LOCK)v13 - 25, NewIrql);
      if ( v25 )
      {
        v20 = v26;
        *(_QWORD *)(v15 + 8) = v25 - MEMORY[0xFFFFF78000000008];
        *(_DWORD *)(v15 + 16) = v30;
        v23 = v16 - 24;
        v11 = PoStoreDiagnosticContext(v20, (unsigned __int64 *)(v15 + 24), &v23);
        if ( v11 < 0 )
          goto LABEL_29;
        v14 = (v23 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        v23 = v14;
        if ( v16 < v14 )
        {
LABEL_26:
          v11 = -1073741789;
          goto LABEL_29;
        }
        v16 -= v14;
        *(_QWORD *)v15 = v14;
        v15 += v14;
      }
      v13 = (__int64 *)*v13;
    }
    v21 = (_QWORD *)(v15 - v14);
    *v21 = 0LL;
    if ( !v14 )
      v21[1] = 0LL;
LABEL_29:
    CurrentThread = v24;
    v3 = a2;
    v4 = a1;
  }
  else
  {
    v11 = -1073741670;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v11 >= 0 )
  {
    *v4 = v6;
    *v3 = v5;
  }
  else if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x734C6B57u);
  }
  return (unsigned int)v11;
}
