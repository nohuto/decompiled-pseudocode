/*
 * XREFs of ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x1400742B0
 * Callers:
 *     ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x140074370 (-Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z.c)
 *     ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x140089F7C (-Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z.c)
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x14008AAF0 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::AtlMultiply<unsigned long>(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // r9

  v3 = a3 * (unsigned __int64)a2;
  if ( v3 > 0xFFFFFFFF )
    return 2147942487LL;
  *a1 = v3;
  return 0LL;
}
