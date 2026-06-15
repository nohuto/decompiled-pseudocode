/*
 * XREFs of ?StrChrW@CRegParser@ATL@@KAPEAGPEAGG@Z @ 0x14008BFF0
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x14008AAF0 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008B5A0 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall ATL::CRegParser::StrChrW(unsigned __int16 *lpsz, __int16 a2)
{
  __int64 v2; // rbx
  unsigned __int16 *result; // rax

  v2 = 0LL;
  result = lpsz;
  if ( lpsz )
  {
    while ( *result )
    {
      if ( *result == a2 )
        return result;
      result = CharNextW(result);
    }
    return (unsigned __int16 *)v2;
  }
  return result;
}
