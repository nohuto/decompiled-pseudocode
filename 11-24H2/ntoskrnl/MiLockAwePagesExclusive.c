/*
 * XREFs of MiLockAwePagesExclusive @ 0x140683A20
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1407FA110 (MiResizeAweBitMap.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14031D9A0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquireAutoExpandPushLockExclusive(a1 + 64, 0LL);
}
