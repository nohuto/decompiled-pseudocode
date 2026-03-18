/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x1403E7EF8
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x1403E7EE0 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeCheckAndApplyBamQos @ 0x1403E8B80 (KeCheckAndApplyBamQos.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x1403E9B44 (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiClearPriorityFloor @ 0x14044D0F8 (KiClearPriorityFloor.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x140642398 (EtwTraceXSchedulerPriorityKickReceive.c)
 */

void __fastcall KeSetThreadSchedulerAssist(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  int v6; // eax
  char v7; // si
  __int64 v8; // rdx
  unsigned __int64 ProcessorCount; // rcx
  int v10; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  __int64 *Prcbs; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  struct _KPRCB *v20; // [rsp+48h] [rbp-38h] BYREF
  volatile __int64 *v21; // [rsp+50h] [rbp-30h] BYREF
  struct _KPRCB *v22; // [rsp+58h] [rbp-28h] BYREF
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF
  __int128 v24; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int8 v25; // [rsp+C0h] [rbp+40h] BYREF
  int v26; // [rsp+C8h] [rbp+48h] BYREF

  v25 = 0;
  v20 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  v26 = 0;
  v19 = 0LL;
  switch ( a3 )
  {
    case 0u:
      if ( a2 )
      {
        *(_QWORD *)(BugCheckParameter1 + 968) = a2;
        *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
        _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
        _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
        KeSetActualBasePriorityThread(BugCheckParameter1, 1);
      }
      else if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
      {
        KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v25);
        if ( *(_DWORD *)(BugCheckParameter1 + 1024) != 32 )
        {
          KiClearPriorityFloor(BugCheckParameter1);
          *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
        }
        v23 = 0LL;
        KiAcquireThreadStateLockForWrite(
          BugCheckParameter1,
          (__int64 *)&v20,
          &v19,
          &v21,
          (volatile signed __int64 **)&v23);
        _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
        *(_QWORD *)(BugCheckParameter1 + 968) = 0LL;
        _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
        KiReleaseThreadStateLock(v17, (__int64)v20, &v19, v21, (volatile signed __int64 **)&v23);
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v18, v25);
        KeSetPriorityThread((PKTHREAD)BugCheckParameter1, *(char *)(BugCheckParameter1 + 563));
      }
      return;
    case 1u:
      v4 = *(_QWORD *)(BugCheckParameter1 + 968);
      if ( !v4 )
        return;
      KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v25);
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = *(_DWORD *)(v4 + 4);
      v26 = v6;
      if ( v6 >= 7 )
        goto LABEL_14;
      *(_BYTE *)(BugCheckParameter1 + 1122) = v6;
      KiCheckAssistDataForBamQosLevelOverride(BugCheckParameter1, &v26);
      v7 = v26;
      if ( v26 == *(unsigned __int8 *)(BugCheckParameter1 + 516) )
        goto LABEL_14;
      v24 = 0LL;
      v20 = CurrentPrcb;
      KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1, (unsigned __int64 *)&v19);
      *(_BYTE *)(BugCheckParameter1 + 516) = v7;
      if ( !CurrentPrcb->NextThread )
      {
        v10 = *(_DWORD *)(BugCheckParameter1 + 120) >> 1;
        v22 = CurrentPrcb;
        ProcessorCount = v10 & 1;
        if ( (_DWORD)ProcessorCount )
        {
          if ( (_DWORD)ProcessorCount != 1 )
            goto LABEL_23;
          CoreControlBlock = CurrentPrcb->CoreControlBlock;
          ProcessorCount = CoreControlBlock->ProcessorCount;
          Prcbs = (__int64 *)CoreControlBlock->Prcbs;
          if ( !CoreControlBlock->ProcessorCount )
            goto LABEL_23;
        }
        else
        {
          Prcbs = (__int64 *)&v22;
          LODWORD(ProcessorCount) = 1;
        }
        v13 = (unsigned int)ProcessorCount;
        do
        {
          v14 = *Prcbs;
          *(_BYTE *)(*(_QWORD *)(*Prcbs + 56) + 64LL) ^= (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*Prcbs + 56) + 64LL)) & 7;
          KiUpdateThreadQosGroupingSummaries(v14);
          Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v15);
          ++Prcbs;
          --v13;
        }
        while ( v13 );
      }
LABEL_23:
      KiReleaseThreadStateLock(ProcessorCount, (__int64)CurrentPrcb, &v19, 0LL, (volatile signed __int64 **)&v24);
LABEL_14:
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      KeCheckAndApplyBamQos(CurrentPrcb, BugCheckParameter1);
      if ( KiIrqlFlags )
      {
        LOBYTE(v8) = v25;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      }
      __writecr8(v25);
      return;
    case 2u:
    case 3u:
      if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
        EtwTraceXSchedulerPriorityKickReceive(BugCheckParameter1, a3);
      KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v25);
LABEL_8:
      KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1);
LABEL_9:
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v18, v25);
      return;
    case 4u:
      KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v25);
      v16 = *(_QWORD *)(BugCheckParameter1 + 968);
      if ( !v16 )
        goto LABEL_9;
      _InterlockedIncrement64((volatile signed __int64 *)(v16 + 40));
      if ( *(_QWORD *)(v16 + 40) == *(_QWORD *)(v16 + 48) || *(_BYTE *)(BugCheckParameter1 + 388) != 1 )
        goto LABEL_9;
      goto LABEL_8;
  }
}
