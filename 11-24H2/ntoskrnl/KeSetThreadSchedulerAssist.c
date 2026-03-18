/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x140487FC8
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x140487FB0 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeCheckAndApplyBamQos @ 0x14029DF30 (KeCheckAndApplyBamQos.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403B1E60 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403F52C0 (KiPrcbArrayForIsolationWidth.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KiClearPriorityFloor @ 0x140448630 (KiClearPriorityFloor.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14049E5FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x1404E6CE0 (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E9670 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x14064E358 (EtwTraceXSchedulerPriorityKickReceive.c)
 */

void __fastcall KeSetThreadSchedulerAssist(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  int v7; // eax
  char v8; // si
  unsigned __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-21h] BYREF
  __int64 v21; // [rsp+40h] [rbp-19h] BYREF
  struct _KPRCB *v22; // [rsp+48h] [rbp-11h] BYREF
  __int64 *v23; // [rsp+50h] [rbp-9h] BYREF
  volatile __int64 *v24; // [rsp+58h] [rbp-1h] BYREF
  struct _KPRCB *v25; // [rsp+60h] [rbp+7h] BYREF
  __int128 v26; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v27; // [rsp+78h] [rbp+1Fh] BYREF
  unsigned __int8 v28; // [rsp+D0h] [rbp+77h] BYREF
  int v29; // [rsp+D8h] [rbp+7Fh] BYREF

  v28 = 0;
  v22 = 0LL;
  v19 = 0LL;
  v24 = 0LL;
  v29 = 0;
  v21 = 0LL;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 != 1 )
    {
      if ( (_DWORD)a3 == 2 || (_DWORD)a3 == 3 )
      {
        if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
          EtwTraceXSchedulerPriorityKickReceive(BugCheckParameter1, (unsigned int)a3);
        KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v28);
      }
      else
      {
        if ( (_DWORD)a3 != 4 )
          return;
        KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v28);
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
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v19, v28);
      return;
    }
    v5 = *(_QWORD *)(BugCheckParameter1 + 968);
    if ( v5 )
    {
      KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v28);
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = *(_DWORD *)(v5 + 4);
      v29 = v7;
      if ( v7 < 7 )
      {
        *(_BYTE *)(BugCheckParameter1 + 1122) = v7;
        KiCheckAssistDataForBamQosLevelOverride(BugCheckParameter1, &v29);
        v8 = v29;
        if ( v29 != *(unsigned __int8 *)(BugCheckParameter1 + 516) )
        {
          v27 = 0LL;
          v22 = CurrentPrcb;
          KiAcquirePrcbLocksForIsolationUnit((__int64)CurrentPrcb, 1, (unsigned __int64 *)&v21);
          *(_BYTE *)(BugCheckParameter1 + 516) = v8;
          if ( !CurrentPrcb->NextThread )
          {
            v10 = (*(_DWORD *)(BugCheckParameter1 + 120) >> 1) & 1;
            v25 = CurrentPrcb;
            v23 = 0LL;
            v20 = 0;
            KiPrcbArrayForIsolationWidth((__int64)&v25, v10, &v23, &v20);
            v12 = v20;
            if ( v20 )
            {
              v13 = v23;
              v14 = v20;
              do
              {
                v15 = *v13;
                v16 = *(_QWORD *)(*v13 + 56);
                LOBYTE(v12) = *(_BYTE *)(v16 + 64) ^ (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(v16 + 64)) & 7;
                *(_BYTE *)(v16 + 64) = v12;
                KiUpdateThreadQosGroupingSummaries(v15, v12, v16, v11);
                ++v13;
                --v14;
              }
              while ( v14 );
            }
          }
          KiReleaseThreadStateLock(v9, (__int64)CurrentPrcb, &v21, 0LL, (volatile signed __int64 **)&v27);
        }
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      KeCheckAndApplyBamQos((__int64)CurrentPrcb, BugCheckParameter1);
      if ( KiIrqlFlags )
      {
        LOBYTE(v17) = v28;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
      }
      __writecr8(v28);
    }
  }
  else if ( a2 )
  {
    *(_QWORD *)(BugCheckParameter1 + 968) = a2;
    *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KeSetActualBasePriorityThread(BugCheckParameter1, 1, a3);
  }
  else if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    KiAcquireThreadLockRaiseToDpc(BugCheckParameter1, &v28);
    if ( *(_DWORD *)(BugCheckParameter1 + 1024) != 32 )
    {
      KiClearPriorityFloor(BugCheckParameter1, (__int64)&v19, *(char *)(BugCheckParameter1 + 1024), 1);
      *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    }
    v26 = 0LL;
    KiAcquireThreadStateLockForWrite(BugCheckParameter1, (__int64 *)&v22, &v21, &v24, (volatile signed __int64 **)&v26);
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    *(_QWORD *)(BugCheckParameter1 + 968) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KiReleaseThreadStateLock(v18, (__int64)v22, &v21, v24, (volatile signed __int64 **)&v26);
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v19, v28);
    KeSetPriorityThread((PKTHREAD)BugCheckParameter1, *(char *)(BugCheckParameter1 + 563));
  }
}
