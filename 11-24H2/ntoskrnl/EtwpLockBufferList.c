/*
 * XREFs of EtwpLockBufferList @ 0x1403E1714
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x14027C8CC (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14027D658 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1402D0980 (EtwpReserveTraceBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140489020 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1404EC950 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14064F998 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x14064FC9C (EtwpReenableCompression.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx
  bool v8; // zf
  volatile signed __int32 *v9; // rcx
  unsigned __int64 *v10; // rdi
  char *v11; // rax
  char *v12; // rbx

  v5 = a1;
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    v10 = (unsigned __int64 *)(a1 + 696);
    v11 = (char *)KeAbPreAcquire(a1 + 696, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
    if ( v12 )
      v12[10] = 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v7 = 15LL;
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
    }
    v8 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    v9 = (volatile signed __int32 *)(v5 + 696);
    *a2 = CurrentIrql;
    if ( v8 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v9, 0LL) )
        KxWaitForSpinLockAndAcquire(v9, v7, a3, a4);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v9);
    }
  }
}
