/*
 * XREFs of ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x180048A78
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800489BC (--1CWindowNode@@MEAA@XZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1801A159C (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 */

void __fastcall CWindowNode::DiscardFlipExSurfaces(CWindowNode *this)
{
  unsigned __int64 Count; // rax
  CWindowNode *v2; // r8

  Count = CPtrArray<CVisual>::GetCount((char *)this + 840);
  CWindowNode::DiscardOldestFlipExSurfaces(v2, Count);
}
