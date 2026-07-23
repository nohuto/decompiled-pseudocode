/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x140483038
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x140483020 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeCheckAndApplyBamQos @ 0x1402ACA20 (KeCheckAndApplyBamQos.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403EB700 (KiPrcbArrayForIsolationWidth.c)
 *     KiClearPriorityFloor @ 0x140440D50 (KiClearPriorityFloor.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x1404DD3DC (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x14064C968 (EtwTraceXSchedulerPriorityKickReceive.c)
 */

void __fastcall KeSetThreadSchedulerAssist(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  int v9; // eax
  char v10; // si
  unsigned __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  _QWORD *v21; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-21h] BYREF
  __int64 v23; // [rsp+40h] [rbp-19h] BYREF
  struct _KPRCB *v24; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v25; // [rsp+50h] [rbp-9h] BYREF
  volatile __int64 *v26; // [rsp+58h] [rbp-1h] BYREF
  struct _KPRCB *v27; // [rsp+60h] [rbp+7h] BYREF
  __int128 v28; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v29; // [rsp+78h] [rbp+1Fh] BYREF
  unsigned __int8 v30; // [rsp+D0h] [rbp+77h] BYREF
  int v31; // [rsp+D8h] [rbp+7Fh] BYREF

  v30 = 0;
  v24 = 0LL;
  v21 = 0LL;
  v26 = 0LL;
  v31 = 0;
  v23 = 0LL;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      if ( a3 == 2 || a3 == 3 )
      {
        if ( (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
          EtwTraceXSchedulerPriorityKickReceive(BugCheckParameter1, a3);
        KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v30);
      }
      else
      {
        if ( a3 != 4 )
          return;
        KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v30);
        v4 = *(_QWORD *)(BugCheckParameter1 + 968);
        if ( !v4 )
          goto LABEL_14;
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 40));
        if ( *(_QWORD *)(v4 + 40) == *(_QWORD *)(v4 + 48) || *(_BYTE *)(BugCheckParameter1 + 388) != 1 )
          goto LABEL_14;
      }
      KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1);
LABEL_14:
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v21, v30);
      return;
    }
    v5 = *(_QWORD *)(BugCheckParameter1 + 968);
    if ( v5 )
    {
      KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v30);
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = *(_DWORD *)(v5 + 4);
      v31 = v9;
      if ( v9 < 7 )
      {
        *(_BYTE *)(BugCheckParameter1 + 1122) = v9;
        KiCheckAssistDataForBamQosLevelOverride(BugCheckParameter1, &v31);
        v10 = v31;
        if ( v31 != *(unsigned __int8 *)(BugCheckParameter1 + 516) )
        {
          v29 = 0LL;
          v24 = CurrentPrcb;
          KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1LL, (unsigned __int64 *)&v23);
          *(_BYTE *)(BugCheckParameter1 + 516) = v10;
          if ( !CurrentPrcb->NextThread )
          {
            v12 = (*(_DWORD *)(BugCheckParameter1 + 120) >> 1) & 1;
            v27 = CurrentPrcb;
            v25 = 0LL;
            v22 = 0;
            KiPrcbArrayForIsolationWidth((__int64)&v27, v12, &v25, &v22);
            v14 = v22;
            if ( v22 )
            {
              v15 = v25;
              v16 = v22;
              do
              {
                v17 = *v15;
                v18 = *(_QWORD *)(*v15 + 56);
                LOBYTE(v14) = *(_BYTE *)(v18 + 64) ^ (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(v18 + 64)) & 7;
                *(_BYTE *)(v18 + 64) = v14;
                KiUpdateThreadQosGroupingSummaries(v17, v14, v18, v13);
                ++v15;
                --v16;
              }
              while ( v16 );
            }
          }
          KiReleaseThreadStateLock(v11, (__int64)CurrentPrcb, &v23, 0LL, (volatile signed __int64 **)&v29);
        }
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      KeCheckAndApplyBamQos((__int64)CurrentPrcb, BugCheckParameter1, v6, v7);
      if ( KiIrqlFlags )
      {
        LOBYTE(v19) = v30;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
      }
      __writecr8(v30);
    }
  }
  else if ( a2 )
  {
    *(_QWORD *)(BugCheckParameter1 + 968) = a2;
    *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KeSetActualBasePriorityThread(BugCheckParameter1, 1);
  }
  else if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v30);
    if ( *(_DWORD *)(BugCheckParameter1 + 1024) != 32 )
    {
      KiClearPriorityFloor(BugCheckParameter1, (__int64)&v21, *(char *)(BugCheckParameter1 + 1024), 1);
      *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    }
    v28 = 0LL;
    KiAcquireThreadStateLockForWrite(BugCheckParameter1, (__int64 *)&v24, &v23, &v26, (volatile signed __int64 **)&v28);
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    *(_QWORD *)(BugCheckParameter1 + 968) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KiReleaseThreadStateLock(v20, (__int64)v24, &v23, v26, (volatile signed __int64 **)&v28);
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v21, v30);
    KeSetPriorityThread((PKTHREAD)BugCheckParameter1, *(char *)(BugCheckParameter1 + 563));
  }
}
