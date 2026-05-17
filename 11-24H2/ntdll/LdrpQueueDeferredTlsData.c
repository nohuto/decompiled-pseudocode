/*
 * XREFs of LdrpQueueDeferredTlsData @ 0x1800F5160
 * Callers:
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpQueueDeferredTlsData(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  volatile signed __int32 *v4; // rsi

  v3 = a1 - 16;
  *(_QWORD *)(a1 - 16) = a2;
  v4 = (volatile signed __int32 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * (((unsigned __int64)a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v4 + 2, a2, a3);
  *(_QWORD *)(v3 + 8) = *(_QWORD *)v4;
  *(_QWORD *)v4 = v3;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)v4 + 1);
}
