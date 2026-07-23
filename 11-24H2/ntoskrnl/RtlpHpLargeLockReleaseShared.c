/*
 * XREFs of RtlpHpLargeLockReleaseShared @ 0x1404F824C
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140602064 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpReleaseLockShared @ 0x140219598 (RtlpHpReleaseLockShared.c)
 */

void __fastcall RtlpHpLargeLockReleaseShared(__int64 a1, KIRQL a2)
{
  RtlpHpReleaseLockShared((PEX_SPIN_LOCK)(a1 + 64), *(_DWORD *)a1 & 1, a2);
}
