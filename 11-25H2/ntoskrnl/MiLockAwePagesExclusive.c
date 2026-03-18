/*
 * XREFs of MiLockAwePagesExclusive @ 0x140677010
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140675C14 (MiBuildPhysicalPageFreeChain.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1407E9B10 (MiResizeAweBitMap.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402BD440 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquireAutoExpandPushLockExclusive(a1 + 64, 0LL);
}
