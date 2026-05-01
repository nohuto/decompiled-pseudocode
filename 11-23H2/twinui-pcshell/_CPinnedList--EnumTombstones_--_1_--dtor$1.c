/*
 * XREFs of _CPinnedList::EnumTombstones_::_1_::dtor$1 @ 0x180753E37
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPinnedList::EnumTombstones_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32));
}
