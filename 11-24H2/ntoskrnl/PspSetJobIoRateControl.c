/*
 * XREFs of PspSetJobIoRateControl @ 0x14085E618
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PspIoRateControlInfoIsAnySet @ 0x1404AEE38 (PspIoRateControlInfoIsAnySet.c)
 *     PspLockRootJobExclusive @ 0x14085D130 (PspLockRootJobExclusive.c)
 *     PspIoRateEntryDeactivate @ 0x14085E900 (PspIoRateEntryDeactivate.c)
 *     PspLockJobConditionally @ 0x14085E94C (PspLockJobConditionally.c)
 *     PspSetJobIoRateControlForVolume @ 0x14085E97C (PspSetJobIoRateControlForVolume.c)
 *     EtwTracePsIoRateControl @ 0x14085F0B4 (EtwTracePsIoRateControl.c)
 *     PspIoRateEntryActivate @ 0x14085F29C (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x1408EA0D0 (PspSetJobIoAttribution.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     PspJobIoRateControlDisable @ 0x140A5E7F8 (PspJobIoRateControlDisable.c)
 */

__int64 __fastcall PspSetJobIoRateControl(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v3; // r13
  int v4; // edi
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  int v9; // r14d
  int i; // ecx
  struct _ERESOURCE *v11; // r12
  int v12; // r15d
  int j; // ecx
  _QWORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-28h] BYREF
  struct _KTHREAD *v22; // [rsp+38h] [rbp-20h]
  PERESOURCE Resource; // [rsp+40h] [rbp-18h]
  char v24; // [rsp+A0h] [rbp+48h] BYREF
  _QWORD *v25; // [rsp+A8h] [rbp+50h]
  char v26; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+60h] BYREF

  v25 = (_QWORD *)a2;
  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 1744);
  v4 = 0;
  v22 = CurrentThread;
  v27 = 0LL;
  v21 = 0LL;
  v24 = 0;
  --CurrentThread->KernelApcDisable;
  v26 = 0;
  v7 = KeAbPreAcquire(a1 + 1744, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v7, (__int64)v3);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = 1;
  if ( (*(_DWORD *)(a2 + 36) & 1) == 0 )
  {
    v20 = v21;
    if ( *(_QWORD *)(a1 + 1672) )
      v20 = *(_QWORD *)(a1 + 1672);
    v21 = v20;
    v9 = PspJobIoRateControlDisable(a1);
    Resource = (PERESOURCE)(a1 + 56);
LABEL_31:
    v12 = 0;
    if ( !v9 )
      goto LABEL_32;
    goto LABEL_37;
  }
  PspLockRootJobExclusive(a1, (__int64)CurrentThread, &v27);
  for ( i = 0; ; i = 1 )
  {
    if ( i )
    {
      v11 = (struct _ERESOURCE *)(a1 + 56);
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      goto LABEL_11;
    }
    if ( a1 == v27 )
      break;
  }
  v11 = (struct _ERESOURCE *)(a1 + 56);
LABEL_11:
  Resource = v11;
  v12 = PspSetJobIoAttribution((PVOID)a1);
  if ( v12 < 0 )
  {
    CurrentThread = v22;
    goto LABEL_13;
  }
  for ( j = 0; !j; j = 1 )
  {
    if ( a1 == v27 )
      goto LABEL_21;
  }
  ExReleaseResourceLite(v11);
LABEL_21:
  PspUnlockJob(v27, v22);
  v14 = v25;
  if ( v25[3] )
  {
    v19 = PspSetJobIoRateControlForVolume(a1, (_DWORD)v25, (unsigned int)&v24, (unsigned int)&v26, (__int64)&v21);
    Resource = v11;
    v12 = v19;
    if ( v19 >= 0 )
      goto LABEL_27;
  }
  else
  {
    if ( !PspIoRateControlInfoIsAnySet(v25) )
    {
      if ( !*(_QWORD *)(a1 + 1672) )
      {
LABEL_30:
        Resource = v11;
        CurrentThread = v22;
        goto LABEL_31;
      }
      v21 = *(_QWORD *)(a1 + 1672);
      PspIoRateEntryDeactivate(a1 + 1632);
      goto LABEL_25;
    }
    Resource = v11;
    v12 = PspIoRateEntryActivate(a1 + 1632, a1, v14, &v24);
    if ( v12 >= 0 )
    {
      v21 = *(_QWORD *)(a1 + 1672);
      v26 = 1;
LABEL_27:
      if ( !v24 )
      {
LABEL_28:
        if ( v26 )
          --v9;
        goto LABEL_30;
      }
LABEL_25:
      v9 = 2;
      goto LABEL_28;
    }
  }
  CurrentThread = v22;
LABEL_37:
  PspLockRootJobExclusive(a1, (__int64)CurrentThread, &v27);
  PspLockJobConditionally(a1, &v27);
  PspSetJobIoAttribution((PVOID)a1);
LABEL_13:
  while ( !v4 )
  {
    if ( a1 == v27 )
      goto LABEL_39;
    v4 = 1;
  }
  ExReleaseResourceLite(Resource);
LABEL_39:
  PspUnlockJob(v27, CurrentThread);
LABEL_32:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v15, v16, v17);
  EtwTracePsIoRateControl(*(unsigned int *)(a1 + 1468), v25, v21, (unsigned int)v12);
  return (unsigned int)v12;
}
