/*
 * XREFs of ?CancelPendingUpdates@CContentResourceState@@UEAAXXZ @ 0x14009D390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CContentResourceState::CancelPendingUpdates(CContentResourceState *this)
{
  *((_BYTE *)this + 64) &= ~2u;
  *((_BYTE *)this + 32) &= 0xF3u;
}
