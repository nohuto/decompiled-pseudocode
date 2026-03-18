/*
 * XREFs of RtlpHpLargeLockReleaseShared @ 0x1404F848C
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x1405F86E4 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpReleaseLockShared @ 0x14035E3FC (RtlpHpReleaseLockShared.c)
 */

void __fastcall RtlpHpLargeLockReleaseShared(__int64 a1, KIRQL a2)
{
  RtlpHpReleaseLockShared((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1, a2);
}
