/*
 * XREFs of ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18025B2A0
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1801B7160 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?RemoveIfUnused@CPreWalkVisual@@CAXV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@@Z @ 0x1800C1138 (-RemoveIfUnused@CPreWalkVisual@@CAXV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@.c)
 *     ?EnsurePreWalkVisual@CPreWalkVisual@@CA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@std@@@std@@@std@@PEAVCVisual@@@Z @ 0x1800C12AC (-EnsurePreWalkVisual@CPreWalkVisual@@CA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180170EBC (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
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
