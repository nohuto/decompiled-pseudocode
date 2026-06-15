/*
 * XREFs of _std::collate_unsigned_short_::_Getcat_::_1_::dtor$2 @ 0x1801721AA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::collate_unsigned_short_::_Getcat_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    std::_Locinfo::~_Locinfo((std::_Locinfo *)(a2 + 48));
  }
}
