/*
 * XREFs of ?CanForceRemoveKey@CRegParser@ATL@@IEAAHPEBG@Z @ 0x14008A608
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008BB20 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CRegParser::CanForceRemoveKey(ATL::CRegParser *this, const unsigned __int16 *a2)
{
  LPCWSTR *i; // rbx

  for ( i = (LPCWSTR *)&ATL::CRegParser::rgszNeverDelete; (__int64)i < (__int64)&g_SpatialCrossProcessProvider; ++i )
  {
    if ( !lstrcmpiW(a2, *i) )
      return 0LL;
  }
  return 1LL;
}
