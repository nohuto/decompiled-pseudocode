/*
 * XREFs of ?SetIsSynchronized@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_N@Z @ 0x180283798
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetIsSynchronized(__int64 a1, char a2)
{
  __int64 v3; // rdi

  if ( a2 != *(_BYTE *)(a1 + 689) )
  {
    v3 = *(_QWORD *)(a1 + 696);
    *(_BYTE *)(a1 + 689) = a2;
    if ( v3 )
    {
      if ( a2 != *(_BYTE *)(v3 + 80) )
      {
        EnterCriticalSection(&g_CursorManager);
        *(_BYTE *)(v3 + 80) = a2;
        LeaveCriticalSection(&g_CursorManager);
      }
    }
  }
  return 0LL;
}
