/*
 * XREFs of ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011B150
 * Callers:
 *     <none>
 * Callees:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckForVisualTree@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@@Z @ 0x18011B370 (-CheckForVisualTree@CProjectedShadowCaster@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x18011B3C0 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x18011C35C (-GetCasterBounds@CProjectedShadowCaster@@QEBAAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x18011C3F0 (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801749A0 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18021EFEC (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::Draw(
        CProjectedShadow *this,
        const struct CVisualTree **a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v8; // rdx
  __m128 v9; // xmm1
  int v10; // eax
  void (__fastcall *v11)(CProjectedShadow *, __int64, CProjectedShadow *); // rax
  int v12; // eax
  unsigned int v13; // edi
  int updated; // eax
  __int64 v16; // rdi
  struct _D3DCOLORVALUE v17; // [rsp+30h] [rbp-28h] BYREF

  if ( !CProjectedShadowCaster::CheckForVisualTree(*((CProjectedShadowCaster **)this + 10), a2[993]) )
    return 0LL;
  v9 = (__m128)_mm_loadu_si128((const __m128i *)CProjectedShadowCaster::GetCasterBounds(*((_QWORD *)this + 10), v8));
  *((float *)this + 96) = fminf(
                            _mm_shuffle_ps(v9, v9, 170).m128_f32[0] - v9.m128_f32[0],
                            _mm_shuffle_ps(v9, v9, 255).m128_f32[0] - _mm_shuffle_ps(v9, v9, 85).m128_f32[0]);
  v10 = CProjectedShadow::ComputeShadowPath(this, a2);
  if ( *((_DWORD *)this + 63) != v10 )
  {
    *((_DWORD *)this + 63) = v10;
    (*(void (__fastcall **)(CProjectedShadow *, _QWORD, CProjectedShadow *))(*(_QWORD *)this + 80LL))(this, 0LL, this);
    v16 = *((_QWORD *)this + 46);
    if ( v16 )
    {
      *(_DWORD *)(v16 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v16 + 16, 24LL);
      *(_BYTE *)(v16 + 200) = 1;
      wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((char *)this + 368);
    }
    wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset((char *)this + 376);
  }
  CProjectedShadow::ComputeShadowColor(this, &v17, (struct CDrawingContext *)a2);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 85) - v17.a) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 82) - v17.r) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 83) - v17.g) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 84) - v17.b) & _xmm) > 0.0000011920929 )
  {
    v11 = *(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(*(_QWORD *)this + 80LL);
    *(struct _D3DCOLORVALUE *)((char *)this + 328) = *(struct _D3DCOLORVALUE *)&v17.r;
    v11(this, 5LL, this);
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6304LL)
    || (updated = CProjectedShadow::UpdateShadowIntermediates(this, (struct CDrawingContext *)a2),
        v13 = updated,
        updated >= 0) )
  {
    v12 = CContent::Draw(this, (const void **)a2, a3, a4);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x117u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x113u, 0LL);
  }
  return v13;
}
