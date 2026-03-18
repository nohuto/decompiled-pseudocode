/*
 * XREFs of EtwpLockBufferList @ 0x1403E4FA8
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x14030C840 (EtwpReserveTraceBuffer.c)
 *     EtwpEnqueueOverflowBuffer @ 0x1403E4824 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1403E4BD0 (EtwpAllocateFreeBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1403E4D34 (EtwpDequeueFreeBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x14048F0C0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140645298 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x14064559C (EtwpReenableCompression.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  bool v5; // zf
  volatile signed __int32 *v6; // rcx
  unsigned __int64 *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rbx

  v3 = a1;
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    v7 = (unsigned __int64 *)(a1 + 696);
    v8 = KeAbPreAcquire(a1 + 696, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
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
    v5 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    v6 = (volatile signed __int32 *)(v3 + 696);
    *a2 = CurrentIrql;
    if ( v5 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v6, 0LL) )
        KxWaitForSpinLockAndAcquire(v6);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v6);
    }
  }
}
