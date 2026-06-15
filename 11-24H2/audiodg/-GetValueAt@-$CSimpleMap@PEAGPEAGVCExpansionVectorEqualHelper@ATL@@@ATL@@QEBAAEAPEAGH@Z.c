/*
 * XREFs of ?GetValueAt@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z @ 0x14008A800
 * Callers:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x14008A180 (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 *     ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z @ 0x14008C03C (-StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14006598C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::GetValueAt(
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 16) )
  {
    ATL::_AtlRaiseException(0xC000008C);
    JUMPOUT(0x14008A828LL);
  }
  return *(_QWORD *)(a1 + 8) + 8LL * a2;
}
