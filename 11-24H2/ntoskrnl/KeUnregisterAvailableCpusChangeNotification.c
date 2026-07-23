/*
 * XREFs of KeUnregisterAvailableCpusChangeNotification @ 0x140739C98
 * Callers:
 *     PsUnregisterAvailableCpusChangeNotification @ 0x140774960 (PsUnregisterAvailableCpusChangeNotification.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiRundownAvailableCpusWorkItem @ 0x1402B9C1C (KiRundownAvailableCpusWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KeUnregisterAvailableCpusChangeNotification(struct _EX_RUNDOWN_REF *P)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  struct _EX_RUNDOWN_REF **Count; // rdx
  PVOID *v7; // rcx
  _QWORD *v8; // rbp
  unsigned __int64 *v9; // rdi
  char *v10; // rax
  char *v11; // r14
  unsigned __int64 v12; // rdx
  struct _EX_RUNDOWN_REF **v13; // rcx
  __int64 v14; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&KiAvailableCpusSubscriptionLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&KiAvailableCpusSubscriptionLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&KiAvailableCpusSubscriptionLock, v3, (__int64)&KiAvailableCpusSubscriptionLock);
  if ( v5 )
    v5[10] = 1;
  Count = (struct _EX_RUNDOWN_REF **)P[3].Count;
  if ( Count[1] != &P[3] )
    goto LABEL_20;
  v7 = (PVOID *)P[4].Count;
  if ( *v7 != &P[3] )
    goto LABEL_20;
  *v7 = Count;
  Count[1] = (struct _EX_RUNDOWN_REF *)v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiAvailableCpusSubscriptionLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiAvailableCpusSubscriptionLock);
  KeAbPostRelease((ULONG_PTR)&KiAvailableCpusSubscriptionLock);
  v8 = (_QWORD *)P->Count;
  if ( P->Count )
  {
    v9 = (unsigned __int64 *)(v8[56] + 32LL);
    v10 = (char *)KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      v11[10] = 1;
    v12 = P[1].Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v12 + 8) == &P[1] )
    {
      v13 = (struct _EX_RUNDOWN_REF **)P[2].Count;
      if ( *v13 == &P[1] )
      {
        *v13 = (struct _EX_RUNDOWN_REF *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        v14 = v8[56];
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v14 + 32));
        KeAbPostRelease(v14 + 32);
        ObfDereferenceObjectWithTag(v8, 0x7641694Bu);
        goto LABEL_19;
      }
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_19:
  KeLeaveCriticalRegion();
  KiRundownAvailableCpusWorkItem(P + 5);
  ExFreePoolWithTag(P, 0);
}
