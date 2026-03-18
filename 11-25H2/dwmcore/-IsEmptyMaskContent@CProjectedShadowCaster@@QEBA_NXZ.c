/*
 * XREFs of ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x18011BF90
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18011BC28 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x18011C00C (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CProjectedShadowCaster::IsEmptyMaskContent(CProjectedShadowCaster *this)
{
  __int64 v1; // rax
  __m128 v2; // xmm1
  bool result; // al
  struct CBrush *EffectiveMaskBrush; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  result = !*((_QWORD *)this + 9)
        || ((v1 = *((_QWORD *)this + 16)) != 0
          ? (v2 = (__m128)_mm_loadu_si128((const __m128i *)(v1 + 104)))
          : (v2 = *(__m128 *)&_xmm.r),
            COERCE_FLOAT(_mm_shuffle_ps(v2, v2, 255).m128_u32[0] & _xmm) < 0.0000011920929
         || (EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this),
             v5 = 1,
             !(*(unsigned __int8 (__fastcall **)(struct CBrush *, _QWORD, char *))(*(_QWORD *)EffectiveMaskBrush + 312LL))(
                EffectiveMaskBrush,
                0LL,
                &v5)))
        || v5 != 0;
  return result;
}
