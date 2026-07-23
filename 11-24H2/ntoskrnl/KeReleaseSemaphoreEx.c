/*
 * XREFs of KeReleaseSemaphoreEx @ 0x1403AB4BC
 * Callers:
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     PopFxRequestWorkerInternal @ 0x1403AB3E4 (PopFxRequestWorkerInternal.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpSignalPortAndUnlock @ 0x14088E594 (AlpcpSignalPortAndUnlock.c)
 *     AlpcpDoPortCleanup @ 0x14088E7E4 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14088F9F0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140899F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     NtReleaseSemaphore @ 0x14099AE90 (NtReleaseSemaphore.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409E5CE0 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiCompleteDirectSwitchThread @ 0x1403ABAF4 (KiCompleteDirectSwitchThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(
        volatile signed __int32 *SystemArgument1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v7; // r12d
  volatile signed __int32 *v8; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v11; // rdx
  int v12; // esi
  int v13; // eax
  volatile signed __int32 *v14; // r15
  volatile signed __int32 *v15; // rdx
  __int64 v16; // rax
  volatile signed __int32 **v17; // rcx
  char v18; // cl
  unsigned int v20; // ecx

  v7 = a2;
  v8 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v8);
  v12 = *((_DWORD *)v8 + 1);
  v13 = v12 + a3;
  if ( v12 + a3 < v12 || v13 > *((_DWORD *)v8 + 6) )
  {
    _InterlockedAnd(v8, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(CurrentIrql);
    if ( (a5 & 8) != 0 )
      RtlRaiseStatus(-1073741753);
    return 3221225543LL;
  }
  else
  {
    *((_DWORD *)v8 + 1) = v13;
    if ( !v12 )
    {
      v14 = (volatile signed __int32 *)*((_QWORD *)v8 + 1);
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v14 == v8 + 2 )
            goto LABEL_14;
          v15 = *(volatile signed __int32 **)v14;
          v16 = (__int64)v14;
          v14 = v15;
          v17 = *(volatile signed __int32 ***)(v16 + 8);
          if ( *((_QWORD *)v15 + 1) != v16 || *v17 != (volatile signed __int32 *)v16 )
            __fastfail(3u);
          *v17 = v15;
          *((_QWORD *)v15 + 1) = v17;
          v18 = *(_BYTE *)(v16 + 16);
          if ( v18 != 1 )
            break;
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), 0LL) )
          {
LABEL_13:
            if ( (*((_DWORD *)v8 + 1))-- == 1 )
              goto LABEL_14;
          }
        }
        if ( v18 == 2 )
        {
          *(_BYTE *)(v16 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v16 + 24), (__int64 *)v16);
          goto LABEL_13;
        }
        if ( v18 == 4 )
        {
          *(_BYTE *)(v16 + 17) = 5;
          *((_DWORD *)v8 + 1) = 0;
          KeInsertQueueDpc(*(PRKDPC *)(v16 + 24), (PVOID)v8, (PVOID)v16);
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
        }
      }
    }
LABEL_14:
    _InterlockedAnd(v8, 0xFFFFFF7F);
    if ( (a5 & 1) != 0 )
    {
      v20 = 1;
      if ( (a5 & 4) == 0 )
        v20 = 3;
    }
    else
    {
      v20 = 0;
      if ( (a5 & 2) != 0 )
      {
        KiCompleteDirectSwitchThread(CurrentPrcb);
        v20 = ~(a5 >> 1) & 2 | 4;
      }
    }
    KiExitDispatcher((unsigned __int64)CurrentPrcb, v20, 1u, v7, CurrentIrql);
    if ( a6 )
      *a6 = v12;
    return 0LL;
  }
}
