/*
 * XREFs of ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x180203F98
 * Callers:
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x180048A78 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x18004B308 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1801A159C (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CWindowNode::DiscardOldestFlipExSurfaces(CWindowNode *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 *i; // rsi
  unsigned __int64 *v6; // rax

  v2 = 0LL;
  for ( i = (__int64 *)((char *)this + 840); v2 < a2; ++v2 )
  {
    v6 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(i, v2);
    CResource::UnRegisterNotifierInternal(this, (struct CResource *)v6);
  }
  CPtrArrayBase::RemoveAt((CPtrArrayBase *)i, 0LL, a2);
}
