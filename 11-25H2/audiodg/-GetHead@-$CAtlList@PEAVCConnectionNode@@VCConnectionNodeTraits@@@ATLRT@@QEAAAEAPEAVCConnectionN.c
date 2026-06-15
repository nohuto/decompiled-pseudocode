/*
 * XREFs of ?GetHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAAEAPEAVCConnectionNode@@XZ @ 0x140056244
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x140035AA0 (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetHead(_QWORD *a1)
{
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  return *a1 + 16LL;
}
