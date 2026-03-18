/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x1408443F0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CmpReferenceKeyControlBlock @ 0x140845AD0 (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 */

signed __int64 __fastcall CmpReferenceKeyControlBlockLockNotHeld(volatile signed __int64 *BugCheckParameter2)
{
  volatile signed __int64 result; // rax
  __int64 v3; // rtt

  result = *BugCheckParameter2;
  while ( result )
  {
    if ( result == -1 )
      KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    v3 = result;
    result = _InterlockedCompareExchange64(BugCheckParameter2, result + 1, result);
    if ( v3 == result )
      return result;
  }
  CmpLockKcbShared(BugCheckParameter2);
  CmpReferenceKeyControlBlock((ULONG_PTR)BugCheckParameter2);
  return CmpUnlockKcb((ULONG_PTR)BugCheckParameter2);
}
