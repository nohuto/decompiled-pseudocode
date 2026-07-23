/*
 * XREFs of RtlpTpWaitCheckReset @ 0x1800E6C10
 * Callers:
 *     RtlpTpWaitCallback @ 0x18004CF30 (RtlpTpWaitCallback.c)
 * Callees:
 *     TpSetWaitEx @ 0x18004CAE0 (TpSetWaitEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpTpWaitCheckReset(__int64 a1, int a2)
{
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(PTP_WAIT *)(a1 + 48), *(HANDLE *)(a1 + 56), *(PLARGE_INTEGER *)(a1 + 72), 0LL);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
}
