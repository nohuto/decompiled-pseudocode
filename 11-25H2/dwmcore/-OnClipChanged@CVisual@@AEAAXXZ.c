/*
 * XREFs of ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800B34B0
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800B3570 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18012F074 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x1801380F0 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x180168E00 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180170EBC (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1801B7238 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 */

void __fastcall CVisual::OnClipChanged(CVisual *this, _BYTE *a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  unsigned int i; // eax
  _QWORD ***v6; // rcx
  _QWORD **v7; // rcx
  _QWORD *j; // rax
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v10; // rdi
  CProjectedShadowCaster **k; // rbx

  *((_BYTE *)this + 466) = 1;
  v3 = *((_QWORD *)this + 29);
  if ( *(int *)v3 < 0 )
  {
    v4 = *(unsigned int *)(v3 + 4);
    a2 = (_BYTE *)(v3 + 8);
    for ( i = 0; i < (unsigned int)v4; ++a2 )
    {
      if ( *a2 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v4 )
    {
      v6 = 0LL;
    }
    else
    {
      a2 = (_BYTE *)(v4 + 15);
      v6 = (_QWORD ***)(v4 + 15 + v3 + 8LL * i - (((_BYTE)v4 + 15) & 7));
    }
    v7 = *v6;
    if ( v7 )
    {
      for ( j = *v7; j != v7; j = (_QWORD *)*j )
        *((_BYTE *)j - 206) = 1;
    }
  }
  if ( (**((_DWORD **)this + 29) & 0x80000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(this, a2);
    v10 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( k = *(CProjectedShadowCaster ***)ProjectedShadowCasters; k != v10; ++k )
      CProjectedShadowCaster::InvalidateMaskContent(*k);
  }
}
