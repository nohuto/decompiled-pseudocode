/*
 * XREFs of ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x14008C52C
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140089FCC (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008AE54 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x14008B7C0 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14008C490 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CRegParser::SkipWhiteSpace(LPCWSTR *this)
{
  while ( **this == 9 || **this == 10 || **this == 13 || **this == 32 )
    *this = CharNextW(*this);
}
