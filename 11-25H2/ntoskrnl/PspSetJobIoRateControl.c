/*
 * XREFs of PspSetJobIoRateControl @ 0x140A3AD48
 * Callers:
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PspIoRateControlInfoIsAnySet @ 0x1404ADF18 (PspIoRateControlInfoIsAnySet.c)
 *     PspSetJobIoAttribution @ 0x1408DADA4 (PspSetJobIoAttribution.c)
 *     PspUnlockJob @ 0x1408DDFF0 (PspUnlockJob.c)
 *     PspLockRootJobExclusive @ 0x1409697E4 (PspLockRootJobExclusive.c)
 *     PspIoRateEntryDeactivate @ 0x140A3B030 (PspIoRateEntryDeactivate.c)
 *     PspLockJobConditionally @ 0x140A3B07C (PspLockJobConditionally.c)
 *     PspSetJobIoRateControlForVolume @ 0x140A3B0AC (PspSetJobIoRateControlForVolume.c)
 *     EtwTracePsIoRateControl @ 0x140A3B1BC (EtwTracePsIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x140A3B3A4 (PspIoRateEntryActivate.c)
 *     PspJobIoRateControlDisable @ 0x140A5D370 (PspJobIoRateControlDisable.c)
 */

__int64 __fastcall PspSetJobIoRateControl(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v3; // r13
  int v4; // edi
  __int64 *v7; // rax
  __int64 *v8; // r14
  unsigned int v9; // r14d
  __int64 v10; // rdx
  int i; // ecx
  struct _ERESOURCE *v12; // r12
  int v13; // r15d
  int j; // ecx
  _QWORD *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-28h] BYREF
  struct _KTHREAD *v23; // [rsp+38h] [rbp-20h]
  PERESOURCE Resource; // [rsp+40h] [rbp-18h]
  char v25; // [rsp+A0h] [rbp+48h] BYREF
  _QWORD *v26; // [rsp+A8h] [rbp+50h]
  char v27; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+60h] BYREF

  v26 = (_QWORD *)a2;
  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 1744);
  v4 = 0;
  v23 = CurrentThread;
  v28 = 0LL;
  v22 = 0LL;
  v25 = 0;
  --CurrentThread->KernelApcDisable;
  v27 = 0;
  v7 = KeAbPreAcquire(a1 + 1744, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = 1;
  if ( (*(_DWORD *)(a2 + 36) & 1) == 0 )
  {
    v21 = v22;
    if ( *(_QWORD *)(a1 + 1672) )
      v21 = *(_QWORD *)(a1 + 1672);
    v22 = v21;
    v9 = PspJobIoRateControlDisable(a1);
    Resource = (PERESOURCE)(a1 + 56);
LABEL_31:
    v13 = 0;
    if ( !v9 )
      goto LABEL_32;
    goto LABEL_37;
  }
  PspLockRootJobExclusive(a1, (__int64)CurrentThread, &v28);
  for ( i = 0; ; i = 1 )
  {
    if ( i )
    {
      v12 = (struct _ERESOURCE *)(a1 + 56);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      goto LABEL_11;
    }
    if ( a1 == v28 )
      break;
  }
  v12 = (struct _ERESOURCE *)(a1 + 56);
LABEL_11:
  LOBYTE(v10) = 1;
  Resource = v12;
  v13 = PspSetJobIoAttribution((_DWORD *)a1, v10, 0, 1u);
  if ( v13 < 0 )
  {
    CurrentThread = v23;
    goto LABEL_13;
  }
  for ( j = 0; !j; j = 1 )
  {
    if ( a1 == v28 )
      goto LABEL_21;
  }
  ExReleaseResourceLite(v12);
LABEL_21:
  PspUnlockJob(v28, (__int64)v23);
  v15 = v26;
  if ( v26[3] )
  {
    v20 = PspSetJobIoRateControlForVolume(a1, (_DWORD)v26, (unsigned int)&v25, (unsigned int)&v27, (__int64)&v22);
    Resource = v12;
    v13 = v20;
    if ( v20 >= 0 )
      goto LABEL_27;
  }
  else
  {
    if ( !PspIoRateControlInfoIsAnySet(v26) )
    {
      if ( !*(_QWORD *)(a1 + 1672) )
      {
LABEL_30:
        Resource = v12;
        CurrentThread = v23;
        goto LABEL_31;
      }
      v22 = *(_QWORD *)(a1 + 1672);
      PspIoRateEntryDeactivate(a1 + 1632);
      goto LABEL_25;
    }
    Resource = v12;
    v13 = PspIoRateEntryActivate(a1 + 1632, a1, v15, &v25);
    if ( v13 >= 0 )
    {
      v22 = *(_QWORD *)(a1 + 1672);
      v27 = 1;
LABEL_27:
      if ( !v25 )
      {
LABEL_28:
        if ( v27 )
          --v9;
        goto LABEL_30;
      }
LABEL_25:
      v9 = 2;
      goto LABEL_28;
    }
  }
  CurrentThread = v23;
LABEL_37:
  PspLockRootJobExclusive(a1, (__int64)CurrentThread, &v28);
  PspLockJobConditionally(a1, &v28);
  PspSetJobIoAttribution((_DWORD *)a1, 0LL, 0, v9);
LABEL_13:
  while ( !v4 )
  {
    if ( a1 == v28 )
      goto LABEL_39;
    v4 = 1;
  }
  ExReleaseResourceLite(Resource);
LABEL_39:
  PspUnlockJob(v28, (__int64)CurrentThread);
LABEL_32:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
  EtwTracePsIoRateControl(*(unsigned int *)(a1 + 1468), v26, v22, (unsigned int)v13);
  return (unsigned int)v13;
}
