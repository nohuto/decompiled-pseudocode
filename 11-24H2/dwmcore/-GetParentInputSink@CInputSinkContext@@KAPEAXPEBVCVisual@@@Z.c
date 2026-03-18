/*
 * XREFs of ?GetParentInputSink@CInputSinkContext@@KAPEAXPEBVCVisual@@@Z @ 0x180199294
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18007BC84 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180092F70 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?HasInputSink@CVisual@@QEBA_NXZ @ 0x1801992F0 (-HasInputSink@CVisual@@QEBA_NXZ.c)
 */

CVisual *__fastcall CInputSinkContext::GetParentInputSink(const struct CVisual *a1)
{
  CVisual *v1; // r11
  CVisual *v2; // r10
  __int64 v3; // r10

  v1 = 0LL;
  if ( (*((_BYTE *)a1 + 106) & 0x40) != 0 )
  {
    v2 = (CVisual *)*((_QWORD *)a1 + 11);
    while ( v2 )
    {
      if ( CVisual::HasInputSink(v2) )
        return (CVisual *)CVisual::GetInputHandle((CVisual *)v3);
      if ( (*(_BYTE *)(v3 + 106) & 0x40) != 0 )
        v2 = *(CVisual **)(v3 + 88);
      else
        v2 = v1;
    }
  }
  return v1;
}
