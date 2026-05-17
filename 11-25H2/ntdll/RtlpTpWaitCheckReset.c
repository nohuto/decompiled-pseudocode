/*
 * XREFs of RtlpTpWaitCheckReset @ 0x1800EC620
 * Callers:
 *     RtlpTpWaitCallback @ 0x180041F40 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x180041AF0 (TpSetWaitEx.c)
 */

__int64 __fastcall RtlpTpWaitCheckReset(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 16));
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 56), *(__int64 **)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
}
