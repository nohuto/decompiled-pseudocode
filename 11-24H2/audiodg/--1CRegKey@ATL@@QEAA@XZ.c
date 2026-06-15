/*
 * XREFs of ??1CRegKey@ATL@@QEAA@XZ @ 0x140089048
 * Callers:
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$0 @ 0x140096E11 (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$0.c)
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$2 @ 0x140096E23 (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CRegKey::~CRegKey(ATL::CRegKey *this)
{
  ATL::CRegKey::Close(this);
}
