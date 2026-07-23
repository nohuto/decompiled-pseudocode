/*
 * XREFs of SepRmCapUpdateWrkr @ 0x140786C80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SepRmDereferenceCapTable @ 0x1404F2B84 (SepRmDereferenceCapTable.c)
 *     SepBuildCapPolicyTable @ 0x1405FD1CC (SepBuildCapPolicyTable.c)
 */

void __fastcall SepRmCapUpdateWrkr(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *v5; // rcx
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rsi
  volatile signed __int64 *v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 44);
  v13 = 0LL;
  v4 = SepBuildCapPolicyTable(v2, &v13);
  if ( v4 < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((__int64)&SepRmCapTableLock, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock, 0LL);
    v12 = v11;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&SepRmCapTableLock, v11, (__int64)&SepRmCapTableLock);
    if ( v12 )
      *((_BYTE *)v12 + 10) = 1;
    SepRmEnforceCap = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v13 )
      *(_QWORD *)(v13 + 40) = 1LL;
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)&SepRmCapTableLock, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&SepRmCapTableLock, v6, (__int64)&SepRmCapTableLock);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v9 = (volatile signed __int64 *)SepRmCapTable;
    SepRmCapTable = v13;
    SepRmEnforceCap = v13 != 0;
    if ( v13 && InitSafeBootMode == 1 )
    {
      SepRmDereferenceCapTable((volatile signed __int64 *)SepRmCapTable);
      SepRmCapTable = 0LL;
      *(_QWORD *)(*(_QWORD *)(SepRmDefaultCap + 64) + 32LL) = SeDefaultRecoveryCapeSd;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepRmCapTableLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock);
    KeAbPostRelease((ULONG_PTR)&SepRmCapTableLock);
    KeLeaveCriticalRegion();
    if ( v9 )
      SepRmDereferenceCapTable(v9);
  }
  *(_DWORD *)(a2 + 40) = v4;
}
