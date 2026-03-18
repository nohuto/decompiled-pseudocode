/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x1408E7AC0
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1408E7184 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MmAdjustWorkingSetSize @ 0x1403CD080 (MmAdjustWorkingSetSize.c)
 *     MmEnforceWorkingSetLimit @ 0x14047DC7C (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // r14
  int v4; // edi
  int v5; // r12d
  _QWORD *v6; // rax
  _QWORD *v7; // r15
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-78h]
  __int64 v19; // [rsp+28h] [rbp-70h]
  _OWORD v20[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v20, 0, sizeof(v20));
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 672);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v20);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v18 = *(_QWORD *)(v3 + 1000);
  v19 = *(_QWORD *)(v3 + 1008);
  v5 = ((*(_DWORD *)(v3 + 1056) & 1) == 0) + 1;
  v6 = KeAbPreAcquire((__int64)&qword_140FC60B0, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC60B0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140FC60B0, (__int64)v6, (__int64)&qword_140FC60B0);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  _InterlockedOr((volatile signed __int32 *)(v3 + 1552), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (LOBYTE(v8) = 1, v4 = MmAdjustWorkingSetSize(v18, v19, 0, v8), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1552), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140FC60B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140FC60B0);
    KeAbPostRelease((ULONG_PTR)&qword_140FC60B0);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v10, v9);
    v12 = *(_QWORD *)(a1 + 736);
    if ( v12 )
    {
      if ( (*(_DWORD *)(a1 + 500) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 488)) )
      {
        v13 = 0LL;
        v14 = *(__int64 **)(a1 + 784);
        if ( v14 )
          v13 = *v14;
        _interlockedbittestandset((volatile signed __int32 *)(v12 + 80), 0);
        if ( v13 )
          _interlockedbittestandset((volatile signed __int32 *)(v13 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1552), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140FC60B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140FC60B0);
    KeAbPostRelease((ULONG_PTR)&qword_140FC60B0);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v17, v16);
  }
  KiUnstackDetachProcess((__int64)v20, 0);
  return (unsigned int)v4;
}
