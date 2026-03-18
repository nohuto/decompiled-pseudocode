/*
 * XREFs of ?OnIsClipToDirtyChanged@CWindowNode@@AEAAXXZ @ 0x1801E56E4
 * Callers:
 *     ?SetIsClipToDirty@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z @ 0x1801E56BC (-SetIsClipToDirty@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@QEAAJ_N@Z.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x1801E58B8 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 */

void __fastcall CWindowNode::OnIsClipToDirtyChanged(CWindowNode *this)
{
  unsigned __int64 v2; // rdx
  __int64 *v3; // r8
  _QWORD *v4; // r8
  unsigned __int64 Count; // rax

  if ( CPtrArray<CVisual>::GetCount((_QWORD *)this + 104) )
  {
    do
    {
      *((_BYTE *)__A__CPtrArray___CBX__QEBAPEBX_K_Z(v3, v2) + 152) = *((_BYTE *)this + 752);
      Count = CPtrArray<CVisual>::GetCount(v4);
    }
    while ( v2 < Count );
  }
  SAFE_DELETE<CShape>((char *)this + 888);
  CVisual::PropagateFlags((__int64)this, 5u);
}
