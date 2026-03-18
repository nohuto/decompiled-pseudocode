/*
 * XREFs of HsaIommuSendCommand @ 0x14044921C
 * Callers:
 *     HsaFlushTbInternal @ 0x140448F28 (HsaFlushTbInternal.c)
 *     HsaIommuWaitCommand @ 0x1404491E8 (HsaIommuWaitCommand.c)
 *     HsaDismissPageFault @ 0x14056F650 (HsaDismissPageFault.c)
 *     HsaFlushDeviceTbOnly @ 0x14056F8F0 (HsaFlushDeviceTbOnly.c)
 *     HsaInvalidateDTE @ 0x140570064 (HsaInvalidateDTE.c)
 *     HsaInvalidateRemappingTableEntries @ 0x1405700B4 (HsaInvalidateRemappingTableEntries.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall HsaIommuSendCommand(unsigned __int64 *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB **v7; // rdx
  unsigned __int64 v8; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned __int64 result; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // ebx
  signed __int32 v20[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+80h] [rbp+8h]
  unsigned __int64 v23; // [rsp+88h] [rbp+10h]

  v5 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    CurrentIrql = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = v5 + 19;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v7 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)v5 + 19, (__int64)&LockHandle);
      if ( v7 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&LockHandle, v7);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v5 + 19);
    }
  }
  if ( *a2 >> 60 == 1 )
  {
    v18 = v5[17];
    v5[15] = 1LL;
    *a2 = v18;
    a2[1] = v5[18];
  }
  v8 = *v5;
  v9 = 0;
  v10 = v5[8] >> 4;
  v11 = *(_QWORD *)(*v5 + 8200);
  v12 = v5[6];
  v23 = v12;
  if ( ((v11 >> 4) & 0x7FFF) + 1 != (_DWORD)v10 )
    v9 = ((*(_QWORD *)(*v5 + 8200) >> 4) & 0x7FFF) + 1;
  v13 = 0;
  v14 = v9;
  v22 = v9;
  if ( v9 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) )
  {
    do
    {
      if ( (++v13 & dword_140FC071C) != 0 || !qword_140FC0720 )
      {
        _mm_pause();
      }
      else
      {
        guard_dispatch_icall_no_overrides(v13, v10);
        v14 = v22;
      }
    }
    while ( v14 == ((*(_QWORD *)(v8 + 0x2000) >> 4) & 0x7FFFLL) );
    v12 = v23;
  }
  v15 = 2 * ((v11 >> 4) & 0x7FFF);
  *(_QWORD *)(v12 + 8 * v15) = *a2;
  *(_QWORD *)(v12 + 8 * v15 + 8) = a2[1];
  *(_QWORD *)(v8 + 8200) = (16LL * (unsigned int)v14) ^ (v11 ^ (16LL * (unsigned int)v14)) & 0xFFFFFFFFFFF8000FuLL;
  _InterlockedOr(v20, 0);
  result = *a2 >> 60;
  if ( (_BYTE)result == 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      result = v5[15];
      if ( !result )
        break;
      if ( (++v19 & dword_140FC071C) != 0 || !qword_140FC0720 )
        _mm_pause();
      else
        guard_dispatch_icall_no_overrides(v19, v10);
    }
  }
  if ( !a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      LOBYTE(v17) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
