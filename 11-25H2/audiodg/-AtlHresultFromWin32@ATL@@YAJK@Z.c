/*
 * XREFs of ?AtlHresultFromWin32@ATL@@YAJK@Z @ 0x14008A5F0
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140089FCC (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008BB20 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::AtlHresultFromWin32(int a1)
{
  if ( a1 > 0 )
    return (unsigned __int16)a1 | 0x80070000;
  return (unsigned int)a1;
}
