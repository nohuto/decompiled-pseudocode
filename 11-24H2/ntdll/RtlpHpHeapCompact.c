/*
 * XREFs of RtlpHpHeapCompact @ 0x180050D34
 * Callers:
 *     RtlCompactHeap @ 0x180043EC0 (RtlCompactHeap.c)
 *     RtlpFlushHeapsCallback @ 0x180095D20 (RtlpFlushHeapsCallback.c)
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x1801427F0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 * Callees:
 *     RtlpHpVsContextCompact @ 0x18005034C (RtlpHpVsContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x1800503D0 (RtlpHpLfhContextCompact.c)
 *     RtlpHpSegContextCompact @ 0x180051930 (RtlpHpSegContextCompact.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011CBF4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, unsigned int a2)
{
  unsigned int *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  v4 = (unsigned int *)(a1 + 20);
  __writegsqword(0x1858u, (unsigned __int64)v4);
  v5 = *v4;
  if ( (v5 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended(v4, v5);
  RtlpHpVsContextCompact(a1 + 704);
  RtlpHpLfhContextCompact(a1 + 832, a2, v6, v7);
  RtlpHpSegContextCompact(a1 + 320);
  RtlpHpSegContextCompact(a1 + 512);
  result = 0LL;
  __writegsqword(0x1858u, 0LL);
  return result;
}
