/*
 * XREFs of ??1CParseBuffer@CRegParser@ATL@@QEAA@XZ @ 0x1400895B0
 * Callers:
 *     _ATL::CRegParser::PreProcessBuffer_::_1_::dtor$0 @ 0x140097345 (_ATL--CRegParser--PreProcessBuffer_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CRegParser::CParseBuffer::~CParseBuffer(LPVOID *this)
{
  CoTaskMemFree(this[1]);
}
