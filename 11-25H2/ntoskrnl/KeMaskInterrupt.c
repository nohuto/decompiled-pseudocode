/*
 * XREFs of KeMaskInterrupt @ 0x14020254C
 * Callers:
 *     IopMaskInterrupt @ 0x1402016D8 (IopMaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1404448BC (KeDisconnectInterrupt.c)
 * Callees:
 *     KiMaskSecondaryInterruptInternal @ 0x14020074C (KiMaskSecondaryInterruptInternal.c)
 *     KiIsInterruptTypeSecondary @ 0x140202718 (KiIsInterruptTypeSecondary.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403B30A0 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403B3140 (KeGetProcessorNumberFromIndex.c)
 *     KeRemoveQueueDpcEx @ 0x140464AC0 (KeRemoveQueueDpcEx.c)
 *     KiAcquireInterruptConnectLock @ 0x14047F0CC (KiAcquireInterruptConnectLock.c)
 *     KiMaskInterruptInternal @ 0x14049F3B0 (KiMaskInterruptInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _KDPC *a4)
{
  unsigned int v5; // ebx
  __int64 v9; // rcx
  char IsInterruptTypeSecondary; // r9
  unsigned __int8 v11; // r8
  int ProcessorNumberFromIndex; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  char v15; // r12
  void *v17; // r14
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v19; // cl
  __int64 v20; // r8
  __int64 v21; // rbp
  __int64 v22; // rdx
  unsigned __int8 v23[4]; // [rsp+20h] [rbp-58h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-54h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+28h] [rbp-50h] BYREF

  v5 = 0;
  PreviousAffinity = 0LL;
  ProcNumber = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v11 = 0;
  ProcessorNumberFromIndex = 0;
  while ( v11 < a2 )
  {
    v13 = a1[v11];
    _m_prefetchw((const void *)(v13 + 104));
    v9 = *(_DWORD *)(v13 + 104) | 1u;
    if ( (_InterlockedOr((volatile signed __int32 *)(v13 + 104), 1u) & 1) != 0 )
    {
      ProcessorNumberFromIndex = -2147483611;
      goto LABEL_10;
    }
    ++v11;
  }
  if ( *(_DWORD *)(a3 + 8) )
    return 0LL;
  v17 = (void *)*(unsigned int *)(a3 + 64);
  if ( IsInterruptTypeSecondary )
  {
    ProcessorNumberFromIndex = KiMaskSecondaryInterruptInternal(*(_DWORD *)(*a1 + 88), (unsigned int)v17);
  }
  else
  {
    v15 = 0;
    CurrentIrql = KeGetCurrentIrql();
    HIDWORD(v14) = 0;
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v9) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v9);
    }
    LODWORD(v14) = KeGetPcr()->Prcb.Number;
    v19 = 0;
    v23[0] = CurrentIrql;
    while ( v19 < a2 )
    {
      v20 = a1[v19];
      if ( *(_DWORD *)(v20 + 96) == (_DWORD)v14 )
      {
        ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v20 + 88), (unsigned int)v17);
        v15 = 1;
        break;
      }
      ++v19;
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v14) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    }
    __writecr8(CurrentIrql);
    if ( !v15 )
    {
      v21 = *a1;
      if ( KeGetCurrentIrql() >= 2u )
      {
        if ( a4 )
        {
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v21 + 96), &ProcNumber);
          if ( ProcessorNumberFromIndex >= 0 )
          {
            KeRemoveQueueDpcEx(a4, 0LL);
            a4->TargetInfoAsUlong = 275;
            a4->DeferredRoutine = (PKDEFERRED_ROUTINE)KiMaskInterruptDpc;
            a4->DeferredContext = 0LL;
            a4->DpcData = 0LL;
            a4->ProcessorHistory = 0LL;
            ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
            if ( ProcessorNumberFromIndex >= 0 )
              KeInsertQueueDpc(a4, (PVOID)*(unsigned int *)(v21 + 88), v17);
          }
        }
        else
        {
          ProcessorNumberFromIndex = -1073741811;
        }
      }
      else
      {
        KiAcquireInterruptConnectLock(*(unsigned int *)(v21 + 96), v23, &PreviousAffinity);
        ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v21 + 88), (unsigned int)v17);
        if ( KiIrqlFlags )
        {
          LOBYTE(v22) = v23[0];
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
        }
        __writecr8(v23[0]);
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      }
    }
  }
LABEL_10:
  if ( ProcessorNumberFromIndex != 296 )
    return (unsigned int)ProcessorNumberFromIndex;
  return v5;
}
