/*
 * XREFs of _CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor$0 @ 0x18004404E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor_0(__int64 a1, void **a2)
{
  std::unique_ptr<unsigned short const [0]>::~unique_ptr<unsigned short const [0]>(
    a2 + 10,
    (const struct std::nothrow_t *)a2);
}
