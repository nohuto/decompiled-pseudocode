/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x1404590DC
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(_DWORD *a1)
{
  return RtlpHpAcquireLockExclusive(a1 + 16, *a1 & 1);
}
