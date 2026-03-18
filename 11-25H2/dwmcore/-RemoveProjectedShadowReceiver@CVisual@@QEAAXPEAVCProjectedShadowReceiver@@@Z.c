/*
 * XREFs of ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180297534
 * Callers:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18025BC74 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180130994 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::RemoveProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  const __m128i **ProjectedShadowReceivers; // rdi
  unsigned __int64 v4; // r10
  __m128i *trivial_8; // rax
  __m128i *v6; // r8

  if ( (**((_DWORD **)this + 29) & 0x40000) != 0 )
  {
    ProjectedShadowReceivers = (const __m128i **)CVisual::GetProjectedShadowReceivers((__int64)this);
    trivial_8 = (__m128i *)_std_find_trivial_8(*ProjectedShadowReceivers, ProjectedShadowReceivers[1], v4);
    v6 = (__m128i *)ProjectedShadowReceivers[1];
    if ( trivial_8 != v6 )
    {
      memmove_0(trivial_8, &trivial_8->m128i_u64[1], (char *)v6 - (char *)&trivial_8->m128i_u64[1]);
      ProjectedShadowReceivers[1] = (const __m128i *)((char *)ProjectedShadowReceivers[1] - 8);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 264LL))(this) )
      CVisual::PropagateFlags((__int64)this, 5u);
  }
}
