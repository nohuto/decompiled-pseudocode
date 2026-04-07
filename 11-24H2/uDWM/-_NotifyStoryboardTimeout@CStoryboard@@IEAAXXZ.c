/*
 * XREFs of ?_NotifyStoryboardTimeout@CStoryboard@@IEAAXXZ @ 0x1800D5224
 * Callers:
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800D3598 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_NotifyStoryboardTimeout(__m128i *this)
{
  CStoryboard::_EnumerateWindows(this, 2u);
}
