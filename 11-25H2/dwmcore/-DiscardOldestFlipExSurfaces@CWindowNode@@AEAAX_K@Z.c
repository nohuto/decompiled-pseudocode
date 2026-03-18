/*
 * XREFs of ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1802104B8
 * Callers:
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180108888 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x180113838 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x180204598 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CWindowNode::DiscardOldestFlipExSurfaces(CWindowNode *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 *i; // rsi
  unsigned __int64 *v6; // rax

  v2 = 0LL;
  for ( i = (__int64 *)((char *)this + 832); v2 < a2; ++v2 )
  {
    v6 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(i, v2);
    CResource::UnRegisterNotifierInternal(this, (struct CResource *)v6);
  }
  CPtrArrayBase::RemoveAt((CPtrArrayBase *)i, 0LL, a2);
}
