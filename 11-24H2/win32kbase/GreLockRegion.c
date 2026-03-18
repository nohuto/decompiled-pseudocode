/*
 * XREFs of GreLockRegion @ 0x140132FE0
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x14002FF60 (HmgLock.c)
 */

_BOOL8 __fastcall GreLockRegion(__int64 a1)
{
  return HmgLock(a1, 4) != 0;
}
