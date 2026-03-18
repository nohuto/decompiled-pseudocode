/*
 * XREFs of KeReleaseSemaphoreEx @ 0x1402A1600
 * Callers:
 *     PopFxRequestWorkerInternal @ 0x1402A142C (PopFxRequestWorkerInternal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpDoPortCleanup @ 0x14088B7F4 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14088CA00 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140890950 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 *     NtReleaseSemaphore @ 0x1409B13D0 (NtReleaseSemaphore.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409EC9B0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSignalPortAndUnlock @ 0x140A5E8B4 (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiCompleteDirectSwitchThread @ 0x1403BF004 (KiCompleteDirectSwitchThread.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(
        volatile signed __int32 *SystemArgument1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        _DWORD *a6)
{
  volatile signed __int32 *v7; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v10; // rdx
  int v11; // esi
  int v12; // eax
  volatile signed __int32 *v13; // r15
  volatile signed __int32 *v14; // rdx
  volatile signed __int32 *v15; // rax
  volatile signed __int32 **v16; // rcx
  char v17; // cl

  v7 = SystemArgument1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(SystemArgument1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SystemArgument1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(v7);
  v11 = *((_DWORD *)v7 + 1);
  v12 = v11 + a3;
  if ( v11 + a3 < v11 || v12 > *((_DWORD *)v7 + 6) )
  {
    _InterlockedAnd(v7, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(CurrentIrql);
    if ( (a5 & 8) != 0 )
      RtlRaiseStatus(-1073741753);
    return 3221225543LL;
  }
  else
  {
    *((_DWORD *)v7 + 1) = v12;
    if ( !v11 )
    {
      v13 = (volatile signed __int32 *)*((_QWORD *)v7 + 1);
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v13 == v7 + 2 )
            goto LABEL_14;
          v14 = *(volatile signed __int32 **)v13;
          v15 = v13;
          v13 = v14;
          v16 = (volatile signed __int32 **)*((_QWORD *)v15 + 1);
          if ( *((volatile signed __int32 **)v14 + 1) != v15 || *v16 != v15 )
            __fastfail(3u);
          *v16 = v14;
          *((_QWORD *)v14 + 1) = v16;
          v17 = *((_BYTE *)v15 + 16);
          if ( v17 != 1 )
            break;
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, *((unsigned __int16 *)v15 + 9), 0LL) )
          {
LABEL_13:
            if ( (*((_DWORD *)v7 + 1))-- == 1 )
              goto LABEL_14;
          }
        }
        if ( v17 == 2 )
        {
          *((_BYTE *)v15 + 17) = 5;
          KiInsertQueueInternal(*((_QWORD *)v15 + 3), v15);
          goto LABEL_13;
        }
        if ( v17 == 4 )
        {
          *((_BYTE *)v15 + 17) = 5;
          *((_DWORD *)v7 + 1) = 0;
          KeInsertQueueDpc(*((PRKDPC *)v15 + 3), (PVOID)v7, (PVOID)v15);
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
        }
      }
    }
LABEL_14:
    _InterlockedAnd(v7, 0xFFFFFF7F);
    if ( (a5 & 1) == 0 && (a5 & 2) != 0 )
      KiCompleteDirectSwitchThread(CurrentPrcb);
    KiExitDispatcher(CurrentPrcb, CurrentIrql);
    if ( a6 )
      *a6 = v11;
    return 0LL;
  }
}
