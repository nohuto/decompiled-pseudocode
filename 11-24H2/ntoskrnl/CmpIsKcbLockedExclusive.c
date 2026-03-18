/*
 * XREFs of CmpIsKcbLockedExclusive @ 0x1409A6500
 * Callers:
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CmpIsKcbLockedExclusive(__int64 a1)
{
  return *(_QWORD *)(a1 + 56) == (_QWORD)KeGetCurrentThread();
}
