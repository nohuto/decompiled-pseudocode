/*
 * XREFs of ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801E1DDC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000CBEC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1801E1F38 (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801E1F88 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801E1FDC (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180266EC0 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessSetContextOverrides(
        struct CSparseStorage::AllocatedStorage **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  __m128i v5; // xmm1
  char *v6; // r14
  char v7; // si
  FLOAT v8; // xmm1_4
  bool v9; // zf
  struct D2D_VECTOR_3F v11; // [rsp+20h] [rbp-18h] BYREF
  struct CResourceTable *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  CVisual::GetWorldUpVectorOverride((CVisual *)this, &v11);
  v5 = (__m128i)*((unsigned int *)a3 + 2);
  if ( *(float *)v5.m128i_i32 != CVisual::GetWorldRenderingScaleOverride((CVisual *)this)
    || *((float *)a3 + 3) != v11.x
    || *((float *)a3 + 4) != v11.y
    || *((float *)a3 + 5) != v11.z )
  {
    v6 = (char *)(this + 28);
    v7 = 0;
    LODWORD(v12) = v5.m128i_i32[0];
    if ( _mm_cvtsi128_si32(v5) == LODWORD(`CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue) )
      *(_DWORD *)(*(_QWORD *)v6 + 4LL) &= ~0x40000u;
    else
      CSparseStorage::SetData(this + 28, 14, 4u, &v12);
    v8 = *((float *)a3 + 4);
    v11.x = *((FLOAT *)a3 + 3);
    v11.z = *((FLOAT *)a3 + 5);
    v11.y = v8;
    CVisual::SetWorldUpVectorOverride((CVisual *)this, &v11);
    if ( (*(_DWORD *)(*(_QWORD *)v6 + 4LL) & 0x40000) != 0 || (*(_DWORD *)(*(_QWORD *)v6 + 4LL) & 0x20000) != 0 )
      v7 = 32;
    v9 = ((_DWORD)this[12] & 0x4000) == 0;
    *((_BYTE *)this + 106) = v7 | *((_BYTE *)this + 106) & 0xDF;
    if ( !v9 )
    {
      CTreeData::InvalidateWorldTransform((CTreeData *)(this + 41));
      CVisual::PropagateFlags((__int64)this, 0x10u);
    }
  }
  return 0LL;
}
