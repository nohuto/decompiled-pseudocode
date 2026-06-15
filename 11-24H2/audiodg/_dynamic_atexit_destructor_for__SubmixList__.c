/*
 * XREFs of _dynamic_atexit_destructor_for__SubmixList__ @ 0x140097450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__SubmixList__()
{
  ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAll((__int64)&SubmixList);
}
