/*
 * XREFs of ?IsMaskInvert@CCursorVisual@@QEBA_NXZ @ 0x180290728
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateHardwareCursor@COverlayContext@@AEAA_NXZ @ 0x18026D0CC (-UpdateHardwareCursor@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCursorVisual::IsMaskInvert(CCursorVisual *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 88);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 176) )
      return *(_BYTE *)(v1 + 81) != 0;
  }
  return result;
}
