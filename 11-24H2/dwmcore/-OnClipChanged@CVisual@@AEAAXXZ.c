/*
 * XREFs of ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800BF1FC
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InsertChild@CVisual@@IEAAJPEAV1@0_N@Z @ 0x180093620 (-InsertChild@CVisual@@IEAAJPEAV1@0_N@Z.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x1800BF2C0 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180133470 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x1801859C0 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801865D0 (-UpdateLayoutSize@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18003BA50 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x1800E7528 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 */

void __fastcall CVisual::OnClipChanged(CVisual *this)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  unsigned int i; // eax
  _QWORD ***v6; // rcx
  _QWORD **v7; // rcx
  _QWORD *j; // rax
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v10; // rdi
  CProjectedShadowCaster **k; // rbx

  *((_BYTE *)this + 466) = 1;
  v2 = *((_QWORD *)this + 29);
  if ( *(int *)v2 < 0 )
  {
    v3 = *(unsigned int *)(v2 + 4);
    v4 = (_BYTE *)(v2 + 8);
    for ( i = 0; i < (unsigned int)v3; ++v4 )
    {
      if ( *v4 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v3 )
      v6 = 0LL;
    else
      v6 = (_QWORD ***)(v3 + 15 + v2 + 8LL * i - (((_BYTE)v3 + 15) & 7));
    v7 = *v6;
    if ( v7 )
    {
      for ( j = *v7; j != v7; j = (_QWORD *)*j )
        *((_BYTE *)j - 214) = 1;
    }
  }
  if ( (**((_DWORD **)this + 29) & 0x80000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
    v10 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( k = *(CProjectedShadowCaster ***)ProjectedShadowCasters; k != v10; ++k )
      CProjectedShadowCaster::InvalidateMaskContent(*k);
  }
}
