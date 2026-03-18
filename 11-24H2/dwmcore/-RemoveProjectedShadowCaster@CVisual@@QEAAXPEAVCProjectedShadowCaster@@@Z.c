/*
 * XREFs of ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18024FD70
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1800E7450 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18003BA50 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?RemoveIfUnused@CPreWalkVisual@@CAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@@Z @ 0x18018BFF0 (-RemoveIfUnused@CPreWalkVisual@@CAXV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@.c)
 *     ?EnsurePreWalkVisual@CPreWalkVisual@@CA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@PEAVCVisual@@@Z @ 0x18018C164 (-EnsurePreWalkVisual@CPreWalkVisual@@CA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-.c)
 *     __std_find_trivial_8 @ 0x180250770 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CVisual::RemoveProjectedShadowCaster(CVisual *this, struct CProjectedShadowCaster *a2)
{
  _QWORD *ProjectedShadowCasters; // rbx
  __int64 v4; // r11
  __int64 trivial_8; // rax
  __int64 v6; // r8
  _BYTE *v7; // rcx
  _BYTE *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (**((_DWORD **)this + 29) & 0x80000) != 0 )
  {
    ProjectedShadowCasters = (_QWORD *)CVisual::GetProjectedShadowCasters((__int64)this);
    trivial_8 = _std_find_trivial_8(*ProjectedShadowCasters, ProjectedShadowCasters[1], v4);
    v6 = ProjectedShadowCasters[1];
    if ( trivial_8 != v6 )
    {
      memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v6 - (trivial_8 + 8));
      ProjectedShadowCasters[1] -= 8LL;
      if ( ProjectedShadowCasters[1] == *ProjectedShadowCasters )
      {
        CPreWalkVisual::EnsurePreWalkVisual(&v8, (__int64)this);
        v7 = v8;
        v8[50] = 0;
        CPreWalkVisual::RemoveIfUnused(v7);
      }
    }
  }
}
