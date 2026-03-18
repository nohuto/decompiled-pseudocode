/*
 * XREFs of RtlpHpLargeLockRelease @ 0x140420F94
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140420250 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x140420C64 (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpLargeLockRelease(_DWORD *a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive((ULONG_PTR)(a1 + 16), *a1 & 1, a2);
}
