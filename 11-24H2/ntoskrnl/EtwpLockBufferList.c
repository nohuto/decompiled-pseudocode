/*
 * XREFs of EtwpLockBufferList @ 0x1403EEC80
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x14024C2BC (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14024D048 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x140327DF0 (EtwpReserveTraceBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x14048EBF0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1404EF438 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140651298 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x14065159C (EtwpReenableCompression.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  bool v5; // zf
  volatile signed __int32 *v6; // rcx
  unsigned __int64 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx

  v3 = a1;
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    v7 = (unsigned __int64 *)(a1 + 696);
    v8 = KeAbPreAcquire(a1 + 696, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, (__int64)v8, (__int64)v7);
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
      KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
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
