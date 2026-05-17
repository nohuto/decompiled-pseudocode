/*
 * XREFs of RtlpHpHeapCompact @ 0x18000C974
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x180001220 (RtlpFlushHeapsCallback.c)
 *     RtlCompactHeap @ 0x180097BA0 (RtlCompactHeap.c)
 *     RtlpHpGCTimerEnumProcessHeapsCallback @ 0x180143EE0 (RtlpHpGCTimerEnumProcessHeapsCallback.c)
 * Callees:
 *     RtlpHpVsContextCompact @ 0x18000BF8C (RtlpHpVsContextCompact.c)
 *     RtlpHpLfhContextCompact @ 0x18000C010 (RtlpHpLfhContextCompact.c)
 *     RtlpHpSegContextCompact @ 0x18000D570 (RtlpHpSegContextCompact.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 */

__int64 __fastcall RtlpHpHeapCompact(__int64 a1, unsigned int a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax

  v4 = (_DWORD *)(a1 + 20);
  __writegsqword(0x1858u, (unsigned __int64)v4);
  if ( (*v4 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended();
  RtlpHpVsContextCompact(a1 + 704);
  RtlpHpLfhContextCompact(a1 + 832, a2, v5, v6);
  RtlpHpSegContextCompact(a1 + 320);
  RtlpHpSegContextCompact(a1 + 512);
  result = 0LL;
  __writegsqword(0x1858u, 0LL);
  return result;
}
