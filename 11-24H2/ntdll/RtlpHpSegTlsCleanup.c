/*
 * XREFs of RtlpHpSegTlsCleanup @ 0x1800D5F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpLfhContextTlsCleanup @ 0x1800D5FC0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011AE24 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 */

__int64 __fastcall RtlpHpSegTlsCleanup(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 56);
  __writegsqword(0x1858u, v2 + 20);
  v5 = *(unsigned int *)(v2 + 20);
  if ( (v5 & 0x10) != 0 && *(_DWORD *)(v2 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended(v2 + 20, v5);
  result = RtlpHpLfhContextTlsCleanup(*(_QWORD *)(a1 + 24), a2);
  __writegsqword(0x1858u, 0LL);
  return result;
}
