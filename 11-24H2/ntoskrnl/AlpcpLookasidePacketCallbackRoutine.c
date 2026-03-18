/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x1403BC9C0
 * Callers:
 *     IopFreeMiniCompletionPacket @ 0x1409A71B0 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     AlpcpQueueIoCompletion @ 0x1403BD9A0 (AlpcpQueueIoCompletion.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IoFreeMiniCompletionPacket @ 0x1409A7190 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  int v6; // ebp
  int v7; // r12d
  unsigned __int8 CurrentIrql; // di
  _QWORD *v9; // rdx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rdi
  volatile signed __int64 *v13; // rax
  volatile signed __int64 *v14; // rdx
  void *v15; // rdi
  volatile signed __int64 *v16; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v2 = a2[2];
  v3 = 0;
  v18 = 0LL;
  v6 = 0;
  do
  {
    v17 = (volatile signed __int64 *)v2;
    v7 = 0;
    v16 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LOBYTE(v18) = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v2, (__int64)&v16);
      if ( v9 )
        KxWaitForLockOwnerShip((__int64)&v16, v9);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&v16, (volatile __int64 *)v2);
    }
    v10 = *(_DWORD *)(v2 + 16);
    if ( v10 )
    {
      *(_DWORD *)(v2 + 16) = v10 - 1;
    }
    else
    {
      v11 = *(_DWORD *)(v2 + 20);
      if ( v11 )
      {
        v7 = -1;
        *(_DWORD *)(v2 + 20) = v11 - 1;
      }
      else
      {
        --*(_DWORD *)(v2 + 12);
        a1 = 0LL;
        *a2 = *(_QWORD *)(v2 + 32);
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v6 = 1;
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v16, retaddr);
      goto LABEL_15;
    }
    _m_prefetchw(&v16);
    v13 = v16;
    if ( !v16 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v17, 0LL, (signed __int64)&v16) == &v16 )
        goto LABEL_15;
      v13 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v16);
    }
    v16 = 0LL;
    v14 = v17;
    if ( (((unsigned __int8)v14 ^ (unsigned __int8)_InterlockedExchange64(v13 + 1, (__int64)v17)) & 4) != 0 )
      KeWakeAddressAll((unsigned __int64)(v13 + 1), (__int64)v14);
LABEL_15:
    v12 = (unsigned __int8)v18;
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v18);
    __writecr8(v12);
    if ( !a1 )
      goto LABEL_18;
  }
  while ( !ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40), 0x746C6644u) );
  v15 = *(void **)(v2 + 40);
  AlpcpQueueIoCompletion((_DWORD)v15, *(_QWORD *)(v2 + 48), v7, a1, 0, 0);
  ObfDereferenceObjectWithTag(v15, 0x746C6644u);
LABEL_18:
  if ( v6 )
  {
    if ( *(_DWORD *)(v2 + 8) )
    {
      do
        IoFreeMiniCompletionPacket(*(_QWORD *)(v2 + 24LL * v3++ + 64));
      while ( v3 < *(_DWORD *)(v2 + 8) );
    }
    ExFreePoolWithTag((PVOID)v2, 0);
  }
}
