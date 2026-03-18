/*
 * XREFs of ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C0044530
 * Callers:
 *     GreGetClipBox @ 0x1C00389B0 (GreGetClipBox.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0041FC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     GreCopyVisRgn @ 0x1C005BA60 (GreCopyVisRgn.c)
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C00A79E0 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C01573D8 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C015CD50 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C015F0C0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNCOREOBJ::iComplexity(RGNCOREOBJ *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 28LL) != 1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 24LL) > 0x38u) + 2;
  return result;
}
