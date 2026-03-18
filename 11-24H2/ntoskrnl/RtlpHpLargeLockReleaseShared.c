/*
 * XREFs of RtlpHpLargeLockReleaseShared @ 0x1404FA96C
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140604A24 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpReleaseLockShared @ 0x140246CF4 (RtlpHpReleaseLockShared.c)
 */

void __fastcall RtlpHpLargeLockReleaseShared(__int64 a1, KIRQL a2)
{
  RtlpHpReleaseLockShared((PEX_SPIN_LOCK)(a1 + 64), *(_DWORD *)a1 & 1, a2);
}
