/*
 * XREFs of RtlpHpLargeLockRelease @ 0x1403CBC24
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x1403CB4FC (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpLargeLockRelease(_DWORD *a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive((ULONG_PTR)(a1 + 16), *a1 & 1, a2);
}
