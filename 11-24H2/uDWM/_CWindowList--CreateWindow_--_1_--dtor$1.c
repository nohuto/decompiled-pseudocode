/*
 * XREFs of _CWindowList::CreateWindow_::_1_::dtor$1 @ 0x1800F6400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::CreateWindow_::_1_::dtor_1(__int64 a1, void **a2)
{
  CDisplayBlackCurtainAnimatedVisual::operator delete(a2[10], (const struct std::nothrow_t *)a2);
}
