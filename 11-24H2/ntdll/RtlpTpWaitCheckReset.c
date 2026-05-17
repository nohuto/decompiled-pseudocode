/*
 * XREFs of RtlpTpWaitCheckReset @ 0x1800EB900
 * Callers:
 *     RtlpTpWaitCallback @ 0x180020530 (RtlpTpWaitCallback.c)
 * Callees:
 *     TpSetWaitEx @ 0x1800200E0 (TpSetWaitEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlpTpWaitCheckReset(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v3; // esi

  v3 = (int)a2;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 16), a2, a3);
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!v3 || v3 == 258) )
    TpSetWaitEx(*(_PEB_LDR_DATA **)(a1 + 48), *(_LIST_ENTRY **)(a1 + 56), *(_LIST_ENTRY ***)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
}
