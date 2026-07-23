/*
 * XREFs of RtlpHpLargeLockRelease @ 0x140459268
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpLargeLockRelease(_DWORD *a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive((ULONG_PTR)(a1 + 16), *a1 & 1, a2);
}
