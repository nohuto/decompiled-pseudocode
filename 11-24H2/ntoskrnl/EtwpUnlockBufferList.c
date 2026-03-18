/*
 * XREFs of EtwpUnlockBufferList @ 0x1403EEBF4
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x14024C2BC (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14024D048 (EtwpEnqueueOverflowBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x14048EBF0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1404EF438 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140651298 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x14065159C (EtwpReenableCompression.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  signed __int64 *v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // r8
  signed __int64 v5; // rtt
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx

  v2 = (signed __int64 *)(a1 + 696);
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _m_prefetchw(v2);
    v3 = *v2;
    v4 = *v2 - 16;
    if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v4 = 0LL;
    if ( (v3 & 2) != 0 || (v5 = *v2, v5 != _InterlockedCompareExchange64(v2, v4, v3)) )
      ExfReleasePushLock(v2);
    return KeAbPostRelease((ULONG_PTR)v2);
  }
  else
  {
    v7 = *a2;
    result = KxReleaseSpinLock((volatile signed __int64 *)(a1 + 696));
    v8 = 0LL;
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = v7;
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    __writecr8(v7);
  }
  return result;
}
