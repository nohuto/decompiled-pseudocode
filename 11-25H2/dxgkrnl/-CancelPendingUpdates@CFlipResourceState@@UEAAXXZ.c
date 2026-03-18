/*
 * XREFs of ?CancelPendingUpdates@CFlipResourceState@@UEAAXXZ @ 0x14009D430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipResourceState::CancelPendingUpdates(CFlipResourceState *this)
{
  *((_BYTE *)this + 32) &= 0xF3u;
}
