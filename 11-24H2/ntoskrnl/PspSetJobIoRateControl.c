/*
 * XREFs of PspSetJobIoRateControl @ 0x14085A388
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PspIoRateControlInfoIsAnySet @ 0x1404A9810 (PspIoRateControlInfoIsAnySet.c)
 *     PspLockRootJobExclusive @ 0x140858E9C (PspLockRootJobExclusive.c)
 *     PspIoRateEntryDeactivate @ 0x14085A670 (PspIoRateEntryDeactivate.c)
 *     PspLockJobConditionally @ 0x14085A6BC (PspLockJobConditionally.c)
 *     PspSetJobIoAttribution @ 0x14085B900 (PspSetJobIoAttribution.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PspJobIoRateControlDisable @ 0x140A56A68 (PspJobIoRateControlDisable.c)
 *     PspIoRateEntryActivate @ 0x140A6D2B4 (PspIoRateEntryActivate.c)
 *     EtwTracePsIoRateControl @ 0x140A71D94 (EtwTracePsIoRateControl.c)
 *     PspSetJobIoRateControlForVolume @ 0x140AB24C8 (PspSetJobIoRateControlForVolume.c)
 */

__int64 __fastcall PspSetJobIoRateControl(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v3; // r13
  int v4; // edi
  char *v7; // rax
  char *v8; // r14
  int v9; // r14d
  int i; // ecx
  struct _ERESOURCE *v11; // r12
  int v12; // r15d
  int j; // ecx
  _QWORD *v14; // r15
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  struct _KTHREAD *v19; // [rsp+38h] [rbp-20h]
  PERESOURCE Resource; // [rsp+40h] [rbp-18h]
  char v21; // [rsp+A0h] [rbp+48h] BYREF
  _QWORD *v22; // [rsp+A8h] [rbp+50h]
  char v23; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+60h] BYREF

  v22 = (_QWORD *)a2;
  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 1744);
  v4 = 0;
  v19 = CurrentThread;
  v24 = 0LL;
  v18 = 0LL;
  v21 = 0;
  --CurrentThread->KernelApcDisable;
  v23 = 0;
  v7 = (char *)KeAbPreAcquire(a1 + 1744, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    v8[10] = 1;
  v9 = 1;
  if ( (*(_DWORD *)(a2 + 36) & 1) == 0 )
  {
    v17 = v18;
    if ( *(_QWORD *)(a1 + 1672) )
      v17 = *(_QWORD *)(a1 + 1672);
    v18 = v17;
    v9 = PspJobIoRateControlDisable(a1);
    Resource = (PERESOURCE)(a1 + 56);
LABEL_31:
    v12 = 0;
    if ( !v9 )
      goto LABEL_32;
    goto LABEL_37;
  }
  PspLockRootJobExclusive(a1, (__int64)CurrentThread, &v24);
  for ( i = 0; ; i = 1 )
  {
    if ( i )
    {
      v11 = (struct _ERESOURCE *)(a1 + 56);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      goto LABEL_11;
    }
    if ( a1 == v24 )
      break;
  }
  v11 = (struct _ERESOURCE *)(a1 + 56);
LABEL_11:
  Resource = v11;
  v12 = PspSetJobIoAttribution((PVOID)a1);
  if ( v12 < 0 )
  {
    CurrentThread = v19;
    goto LABEL_13;
  }
  for ( j = 0; !j; j = 1 )
  {
    if ( a1 == v24 )
      goto LABEL_21;
  }
  ExReleaseResourceLite(v11);
LABEL_21:
  PspUnlockJob(v24, v19);
  v14 = v22;
  if ( v22[3] )
  {
    v16 = PspSetJobIoRateControlForVolume(a1, (_DWORD)v22, (unsigned int)&v21, (unsigned int)&v23, (__int64)&v18);
    Resource = v11;
    v12 = v16;
    if ( v16 >= 0 )
      goto LABEL_27;
  }
  else
  {
    if ( !PspIoRateControlInfoIsAnySet(v22) )
    {
      if ( !*(_QWORD *)(a1 + 1672) )
      {
LABEL_30:
        Resource = v11;
        CurrentThread = v19;
        goto LABEL_31;
      }
      v18 = *(_QWORD *)(a1 + 1672);
      PspIoRateEntryDeactivate(a1 + 1632);
      goto LABEL_25;
    }
    Resource = v11;
    v12 = PspIoRateEntryActivate(a1 + 1632, a1, v14, &v21);
    if ( v12 >= 0 )
    {
      v18 = *(_QWORD *)(a1 + 1672);
      v23 = 1;
LABEL_27:
      if ( !v21 )
      {
LABEL_28:
        if ( v23 )
          --v9;
        goto LABEL_30;
      }
LABEL_25:
      v9 = 2;
      goto LABEL_28;
    }
  }
  CurrentThread = v19;
LABEL_37:
  PspLockRootJobExclusive(a1, (__int64)CurrentThread, &v24);
  PspLockJobConditionally(a1, &v24);
  PspSetJobIoAttribution((PVOID)a1);
LABEL_13:
  while ( !v4 )
  {
    if ( a1 == v24 )
      goto LABEL_39;
    v4 = 1;
  }
  ExReleaseResourceLite(Resource);
LABEL_39:
  PspUnlockJob(v24, CurrentThread);
LABEL_32:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  EtwTracePsIoRateControl(*(unsigned int *)(a1 + 1468), v22, v18, (unsigned int)v12);
  return (unsigned int)v12;
}
