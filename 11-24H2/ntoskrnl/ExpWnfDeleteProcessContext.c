/*
 * XREFs of ExpWnfDeleteProcessContext @ 0x1409002F0
 * Callers:
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     ExpWnfCreateProcessContext @ 0x140A302C4 (ExpWnfCreateProcessContext.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpWnfDeleteSubscription @ 0x1409005A8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x140900948 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteProcessContext(unsigned __int64 *P, int a2)
{
  unsigned __int64 *v2; // rdi
  char *v5; // rax
  char *v6; // rbx
  struct _EX_RUNDOWN_REF **v7; // r14
  struct _EX_RUNDOWN_REF *v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rbp
  char *v10; // rax
  char *v11; // rbp
  volatile signed __int64 *v12; // rdi
  char *v13; // rax
  char *v14; // rbp
  struct _EX_RUNDOWN_REF **v15; // r14
  struct _EX_RUNDOWN_REF *v16; // rax
  char *v17; // rax
  signed __int8 v18; // cf
  char *v19; // rdi
  unsigned __int64 **v20; // r8
  PVOID *v21; // rdx
  struct _EX_RUNDOWN_REF *v22; // rbp
  __int64 v23; // r8
  char *v24; // rax
  char *v25; // rbp
  void *v26; // rcx

  v2 = P + 10;
  v5 = (char *)KeAbPreAcquire((__int64)(P + 10), 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (__int64)v2);
  if ( v6 )
    v6[10] = 1;
  v7 = (struct _EX_RUNDOWN_REF **)(P + 11);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (struct _EX_RUNDOWN_REF *)v7 )
      break;
    v9 = v8 - 3;
    ExAcquireRundownProtection_0(v8 - 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    ExpWnfDeleteSubscription(v9);
    v10 = (char *)KeAbPreAcquire((__int64)v2, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v10, (__int64)v2);
    if ( v11 )
      v11[10] = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  v12 = (volatile signed __int64 *)(P + 7);
  v13 = (char *)KeAbPreAcquire((__int64)(P + 7), 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 14, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 7, v13, (__int64)(P + 7));
  if ( v14 )
    v14[10] = 1;
  v15 = (struct _EX_RUNDOWN_REF **)(P + 8);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 == (struct _EX_RUNDOWN_REF *)v15 )
      break;
    v22 = v16 - 17;
    ExAcquireRundownProtection_0(v16 - 16);
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
    KeAbPostRelease((ULONG_PTR)(P + 7));
    ExpWnfNotifyNameSubscribers(v22, 16LL, 0LL);
    LOBYTE(v23) = 1;
    ExpWnfDeleteNameInstance(v22[6].Count, v22, v23);
    v24 = (char *)KeAbPreAcquire((__int64)(P + 7), 0LL);
    v25 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 7, v24, (__int64)(P + 7));
    if ( v25 )
      v25[10] = 1;
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
  KeAbPostRelease((ULONG_PTR)(P + 7));
  if ( a2 )
  {
    v17 = (char *)KeAbPreAcquire((__int64)&ExpWnfProcessesListLock, 0LL);
    v18 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v19 = v17;
    if ( v18 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v17, (__int64)&ExpWnfProcessesListLock);
    if ( v19 )
      v19[10] = 1;
    v20 = (unsigned __int64 **)P[2];
    if ( v20[1] != P + 2 || (v21 = (PVOID *)P[3], *v21 != P + 2) )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = (unsigned __int64 *)v21;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    v26 = (void *)P[16];
    if ( v26 )
      ObfDereferenceObject(v26);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
