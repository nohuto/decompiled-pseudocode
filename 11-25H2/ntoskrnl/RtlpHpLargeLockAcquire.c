/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x1403CB6A0
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x1403CB4FC (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(_DWORD *a1)
{
  return RtlpHpAcquireLockExclusive(a1 + 16, *a1 & 1);
}
