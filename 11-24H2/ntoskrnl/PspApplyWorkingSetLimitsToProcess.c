/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x1408D8304
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1408D79EC (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MmAdjustWorkingSetSize @ 0x14046C870 (MmAdjustWorkingSetSize.c)
 *     MmEnforceWorkingSetLimit @ 0x140478F0C (MmEnforceWorkingSetLimit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // r14
  int v4; // edi
  int v5; // r12d
  char *v6; // rax
  char *v7; // r15
  int v8; // r9d
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+28h] [rbp-70h]
  _OWORD v18[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 672);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v18);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v16 = *(_QWORD *)(v3 + 1000);
  v17 = *(_QWORD *)(v3 + 1008);
  v5 = ((*(_DWORD *)(v3 + 1056) & 1) == 0) + 1;
  v6 = (char *)KeAbPreAcquire((__int64)&qword_140FC70E8, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140FC70E8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140FC70E8, v6, (__int64)&qword_140FC70E8);
  if ( v7 )
    v7[10] = 1;
  _InterlockedOr((volatile signed __int32 *)(v3 + 1552), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (LOBYTE(v8) = 1, v4 = MmAdjustWorkingSetSize(v16, v17, 0, v8), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1552), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140FC70E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140FC70E8);
    KeAbPostRelease((ULONG_PTR)&qword_140FC70E8);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v12 = *(_QWORD *)(a1 + 736);
    if ( v12 )
    {
      if ( (*(_DWORD *)(a1 + 500) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 488)) )
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140FC70E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140FC70E8);
    KeAbPostRelease((ULONG_PTR)&qword_140FC70E8);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  KiUnstackDetachProcess((__int64)v18, 0, v9, v10);
  return (unsigned int)v4;
}
