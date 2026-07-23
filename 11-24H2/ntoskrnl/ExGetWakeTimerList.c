/*
 * XREFs of ExGetWakeTimerList @ 0x1404BB1AC
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PoStoreDiagnosticContext @ 0x1402BA9FC (PoStoreDiagnosticContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeQueryTimerDueTime @ 0x140488D50 (KeQueryTimerDueTime.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  _QWORD *v3; // r12
  ULONG_PTR v4; // rbp
  void *v5; // r15
  char *v6; // rax
  char *v7; // rdi
  __int64 *i; // rdi
  __int64 v9; // rcx
  int v10; // edi
  __int64 Pool2; // rax
  __int64 *v12; // r12
  unsigned __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  KIRQL v16; // al
  int v17; // edx
  __int64 TimerDueTime; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r14
  unsigned __int64 v22; // [rsp+20h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+18h]
  int v29; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = 0LL;
  v5 = 0LL;
  v6 = (char *)KeAbPreAcquire((__int64)&ExpWakeTimerLock, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v6, (__int64)&ExpWakeTimerLock);
  if ( v7 )
    v7[10] = 1;
  for ( i = (__int64 *)ExpWakeTimerList; i != &ExpWakeTimerList; i = (__int64 *)*i )
  {
    v9 = *(i - 1);
    if ( v9 )
    {
      v22 = 0LL;
      PoStoreDiagnosticContext(v9, 0LL, &v22);
      v4 = (v22 + 31 + v4) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v4 > 0xFFFFFFFF )
      {
        v10 = -1073741789;
        goto LABEL_30;
      }
    }
  }
  if ( !v4 )
    v4 = 64LL;
  Pool2 = ExAllocatePool2(0x101uLL, v4, 0x734C6B57u);
  v5 = (void *)Pool2;
  if ( Pool2 )
  {
    v12 = (__int64 *)ExpWakeTimerList;
    v10 = 0;
    v13 = 0LL;
    v14 = Pool2;
    v22 = 0LL;
    v15 = v4;
    while ( v12 != &ExpWakeTimerList )
    {
      if ( v15 < 0x40 )
        goto LABEL_26;
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 - 25);
      v17 = *((_DWORD *)v12 - 6);
      NewIrql = v16;
      v25 = *(v12 - 1);
      v29 = v17;
      if ( v25 )
        TimerDueTime = KeQueryTimerDueTime((__int64)(v12 - 33));
      else
        TimerDueTime = 0LL;
      v24 = TimerDueTime;
      KeReleaseSpinLock((PKSPIN_LOCK)v12 - 25, NewIrql);
      if ( v24 )
      {
        v19 = v25;
        *(_QWORD *)(v14 + 8) = v24 - MEMORY[0xFFFFF78000000008];
        *(_DWORD *)(v14 + 16) = v29;
        v22 = v15 - 24;
        v10 = PoStoreDiagnosticContext(v19, (unsigned __int64 *)(v14 + 24), &v22);
        if ( v10 < 0 )
          goto LABEL_29;
        v13 = (v22 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        v22 = v13;
        if ( v15 < v13 )
        {
LABEL_26:
          v10 = -1073741789;
          goto LABEL_29;
        }
        v15 -= v13;
        *(_QWORD *)v14 = v13;
        v14 += v13;
      }
      v12 = (__int64 *)*v12;
    }
    v20 = (_QWORD *)(v14 - v13);
    *v20 = 0LL;
    if ( !v13 )
      v20[1] = 0LL;
LABEL_29:
    v2 = a2;
    v3 = a1;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KeLeaveCriticalRegionThread();
  if ( v10 >= 0 )
  {
    *v3 = v5;
    *v2 = v4;
  }
  else if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x734C6B57u);
  }
  return (unsigned int)v10;
}
