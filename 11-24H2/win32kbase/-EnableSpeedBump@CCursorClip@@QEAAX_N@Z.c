/*
 * XREFs of ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1401508D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::EnableSpeedBump(CCursorClip *this, char a2)
{
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  *((_BYTE *)this + 269) = a2;
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
