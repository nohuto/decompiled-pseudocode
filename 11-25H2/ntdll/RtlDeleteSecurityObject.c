/*
 * XREFs of RtlDeleteSecurityObject @ 0x1800F3990
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteSecurityObject(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1, a4);
  return 0LL;
}
