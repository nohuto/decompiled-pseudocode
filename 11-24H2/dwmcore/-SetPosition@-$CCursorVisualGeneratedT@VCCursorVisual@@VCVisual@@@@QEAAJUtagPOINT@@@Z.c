/*
 * XREFs of ?SetPosition@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJUtagPOINT@@@Z @ 0x180279580
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetSynchronizedPosition@CCursorState@@QEAAXMM@Z @ 0x1802B4680 (-SetSynchronizedPosition@CCursorState@@QEAAXMM@Z.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetPosition(__int64 a1, __int64 a2)
{
  CCursorState *v2; // r8

  if ( a2 != *(_QWORD *)(a1 + 688) )
  {
    v2 = *(CCursorState **)(a1 + 704);
    *(_QWORD *)(a1 + 688) = a2;
    if ( v2 )
    {
      if ( *(_BYTE *)(a1 + 697) )
        CCursorState::SetSynchronizedPosition(v2, (float)(int)a2, (float)SHIDWORD(a2));
    }
  }
  return 0LL;
}
