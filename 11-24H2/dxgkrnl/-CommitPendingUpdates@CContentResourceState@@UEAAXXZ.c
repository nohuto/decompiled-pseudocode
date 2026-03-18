/*
 * XREFs of ?CommitPendingUpdates@CContentResourceState@@UEAAXXZ @ 0x1400457A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitPendingUpdates@CFlipResourceState@@UEAAXXZ @ 0x1400457D0 (-CommitPendingUpdates@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::CommitPendingUpdates(CContentResourceState *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 64);
  if ( (v1 & 2) != 0 )
    *((_BYTE *)this + 64) = v1 & 0xFC;
  CFlipResourceState::CommitPendingUpdates(this);
}
