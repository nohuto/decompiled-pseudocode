/*
 * XREFs of KeReleaseSemaphoreEx @ 0x1402838B8
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     PopFxRequestWorkerInternal @ 0x140283588 (PopFxRequestWorkerInternal.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1408B2D00 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSignalPortAndUnlock @ 0x14098B14C (AlpcpSignalPortAndUnlock.c)
 *     AlpcpDoPortCleanup @ 0x14098B834 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14098C750 (AlpcpCancelMessagesByRequestor.c)
 *     NtReleaseSemaphore @ 0x1409CC520 (NtReleaseSemaphore.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiCompleteDirectSwitchThread @ 0x14027FA58 (KiCompleteDirectSwitchThread.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(
        volatile signed __int32 *SystemArgument1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
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
  unsigned int v19; // ecx
  char v21; // cl

  v8 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v8);
  v12 = *((_DWORD *)v8 + 1);
  v13 = v12 + a3;
  if ( v12 + a3 > *((_DWORD *)v8 + 6) || v13 < v12 )
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
      while ( v14 != v8 + 2 )
      {
        v15 = *(volatile signed __int32 **)v14;
        v16 = (__int64)v14;
        v14 = v15;
        v17 = *(volatile signed __int32 ***)(v16 + 8);
        if ( *((_QWORD *)v15 + 1) != v16 || *v17 != (volatile signed __int32 *)v16 )
          __fastfail(3u);
        *v17 = v15;
        *((_QWORD *)v15 + 1) = v17;
        v21 = *(_BYTE *)(v16 + 16);
        switch ( v21 )
        {
          case 1:
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), 0LL) )
              goto LABEL_11;
            break;
          case 2:
            *(_BYTE *)(v16 + 17) = 5;
            KiInsertQueueInternal(*(_QWORD *)(v16 + 24), (__int64 *)v16);
LABEL_11:
            if ( (*((_DWORD *)v8 + 1))-- == 1 )
              goto LABEL_12;
            break;
          case 4:
            *(_BYTE *)(v16 + 17) = 5;
            *((_DWORD *)v8 + 1) = 0;
            KeInsertQueueDpc(*(PRKDPC *)(v16 + 24), (PVOID)v8, (PVOID)v16);
            break;
          default:
            KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
            break;
        }
      }
    }
LABEL_12:
    _InterlockedAnd(v8, 0xFFFFFF7F);
    if ( (a5 & 1) != 0 )
    {
      v19 = 1;
      if ( (a5 & 4) == 0 )
        v19 = 3;
    }
    else
    {
      v19 = 0;
      if ( (a5 & 2) != 0 )
      {
        KiCompleteDirectSwitchThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
        v19 = ~(a5 >> 1) & 2 | 4;
      }
    }
    KiExitDispatcher((_DWORD)CurrentPrcb, v19, 1, a2, CurrentIrql);
    if ( a6 )
      *a6 = v12;
    return 0LL;
  }
}
