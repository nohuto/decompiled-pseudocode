/*
 * XREFs of _CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor$0 @ 0x1806D1EFD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor_0(__int64 a1, void **a2)
{
  std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(
    a2 + 10,
    (const struct std::nothrow_t *)a2);
}
