/*
 * XREFs of ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801EBAFC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000D550 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1801EBC48 (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801EBC98 (-SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801EBCEC (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 */

__int64 __fastcall CVisual::ProcessSetContextOverrides(
        struct CSparseStorage::AllocatedStorage **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETCONTEXTOVERRIDES *a3)
{
  __m128i v5; // xmm1
  char *v6; // rsi
  FLOAT v7; // xmm1_4
  char v8; // cl
  bool v9; // zf
  struct D2D_VECTOR_3F v11; // [rsp+20h] [rbp-28h] BYREF
  struct D2D_VECTOR_3F v12; // [rsp+30h] [rbp-18h] BYREF
  struct CResourceTable *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  CVisual::GetWorldUpVectorOverride((CVisual *)this, &v11);
  v5 = (__m128i)*((unsigned int *)a3 + 2);
  if ( *(float *)v5.m128i_i32 != CVisual::GetWorldRenderingScaleOverride((CVisual *)this)
    || *((float *)a3 + 3) != v11.x
    || *((float *)a3 + 4) != v11.y
    || *((float *)a3 + 5) != v11.z )
  {
    v6 = (char *)(this + 28);
    LODWORD(v13) = v5.m128i_i32[0];
    if ( _mm_cvtsi128_si32(v5) == LODWORD(`CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue) )
      *(_DWORD *)(*(_QWORD *)v6 + 4LL) &= ~0x40000u;
    else
      CSparseStorage::SetData(this + 28, 14, 4u, &v13);
    v7 = *((float *)a3 + 4);
    v12.x = *((FLOAT *)a3 + 3);
    v12.z = *((FLOAT *)a3 + 5);
    v12.y = v7;
    CVisual::SetWorldUpVectorOverride((CVisual *)this, &v12);
    if ( (*(_DWORD *)(*(_QWORD *)v6 + 4LL) & 0x40000) != 0 || (*(_DWORD *)(*(_QWORD *)v6 + 4LL) & 0x20000) != 0 )
      v8 = 32;
    else
      v8 = 0;
    v9 = ((_DWORD)this[12] & 0x4000) == 0;
    *((_BYTE *)this + 106) = v8 | *((_BYTE *)this + 106) & 0xDF;
    if ( !v9 )
    {
      this[69] = 0LL;
      CVisual::PropagateFlags((__int64)this, 0x10u);
    }
  }
  return 0LL;
}
