/*
 * XREFs of MiLockAwePagesExclusive @ 0x140682830
 * Callers:
 *     MiBuildPhysicalPageFreeChain @ 0x140681434 (MiBuildPhysicalPageFreeChain.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
 *     MiResizeAweBitMap @ 0x1407F99A0 (MiResizeAweBitMap.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14033E4C0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockAwePagesExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquireAutoExpandPushLockExclusive(a1 + 64, 0LL);
}
