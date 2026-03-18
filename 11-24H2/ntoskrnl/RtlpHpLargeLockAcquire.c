/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x140420E08
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140420250 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x140420C64 (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(_DWORD *a1, __int64 a2, __int64 a3)
{
  return RtlpHpAcquireLockExclusive(a1 + 16, *a1 & 1, a3);
}
