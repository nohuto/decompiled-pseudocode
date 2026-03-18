/*
 * XREFs of ?SetPosition@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJUtagPOINT@@@Z @ 0x1802841A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetPositionInternal@CCursorState@@AEAAXMM_N@Z @ 0x1802BD3BC (-SetPositionInternal@CCursorState@@AEAAXMM_N@Z.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetPosition(__int64 a1, __int64 a2)
{
  bool v2; // zf
  CCursorState *v3; // rcx

  if ( a2 != *(_QWORD *)(a1 + 680) )
  {
    v2 = *(_BYTE *)(a1 + 689) == 0;
    *(_QWORD *)(a1 + 680) = a2;
    if ( !v2 )
    {
      v3 = *(CCursorState **)(a1 + 696);
      if ( v3 )
        CCursorState::SetPositionInternal(v3, (float)(int)a2, (float)SHIDWORD(a2), 0);
    }
  }
  return 0LL;
}
