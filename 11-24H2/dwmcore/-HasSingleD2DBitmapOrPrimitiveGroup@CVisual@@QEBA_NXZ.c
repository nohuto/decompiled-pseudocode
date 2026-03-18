/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroup@CVisual@@QEBA_NXZ @ 0x180038110
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x180038180 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18004B570 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::HasSingleD2DBitmapOrPrimitiveGroup(CVisual *this)
{
  char v1; // bl
  CSpriteVisual *v2; // r10
  bool (__fastcall *v3)(CSpriteVisual *__hidden); // rax
  bool HasSingleD2DBitmapOrPrimitiveGroupInternal; // al
  _QWORD *ProjectedShadowReceivers; // rax

  v1 = 0;
  v2 = this;
  if ( (**((_DWORD **)this + 29) & 0x40000) == 0
    || (ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(),
        *ProjectedShadowReceivers == ProjectedShadowReceivers[1]) )
  {
    v3 = *(bool (__fastcall **)(CSpriteVisual *__hidden))(*(_QWORD *)v2 + 368LL);
    if ( v3 == CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal )
      HasSingleD2DBitmapOrPrimitiveGroupInternal = CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(v2);
    else
      HasSingleD2DBitmapOrPrimitiveGroupInternal = v3(v2);
    if ( HasSingleD2DBitmapOrPrimitiveGroupInternal )
      return 1;
  }
  return v1;
}
