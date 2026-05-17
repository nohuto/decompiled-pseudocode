/*
 * XREFs of LdrpQueueDeferredTlsData @ 0x18002064C
 * Callers:
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrpQueueDeferredTlsData(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  volatile signed __int32 *v3; // rsi

  v2 = a1 - 16;
  *(_QWORD *)(a1 - 16) = a2;
  v3 = (volatile signed __int32 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 2);
  *(_QWORD *)(v2 + 8) = *(_QWORD *)v3;
  *(_QWORD *)v3 = v2;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3 + 1);
}
