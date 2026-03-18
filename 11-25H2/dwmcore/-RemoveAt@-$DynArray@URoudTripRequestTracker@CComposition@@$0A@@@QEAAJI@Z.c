/*
 * XREFs of ?RemoveAt@?$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z @ 0x18002FCEC
 * Callers:
 *     ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800309F0 (-CompositionPassNeeded@CComposition@@IEAAX_N@Z.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800699C0 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1802014FC (-SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v7 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v8 = 2LL * v4;
        v9 = 2LL * ++v4;
        *(_OWORD *)(v7 + 8 * v8) = *(_OWORD *)(v7 + 8 * v9);
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu, 0LL);
  }
  return v3;
}
