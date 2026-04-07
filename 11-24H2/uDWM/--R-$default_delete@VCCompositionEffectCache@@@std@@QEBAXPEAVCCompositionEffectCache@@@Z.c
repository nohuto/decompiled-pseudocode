/*
 * XREFs of ??R?$default_delete@VCCompositionEffectCache@@@std@@QEBAXPEAVCCompositionEffectCache@@@Z @ 0x1800B5844
 * Callers:
 *     ?Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z @ 0x180084BBC (-Create@CCompositionEffectCache@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@QEAA@XZ @ 0x180088440 (--1-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositionEffectCache@@@std@@@std.c)
 *     ??$attach_to_smart_pointer@V?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@X@wil@@YAXAEAV?$unique_ptr@VCCompositionEffectCache@@U?$default_delete@VCCompositionEffectCache@@@std@@@std@@PEAVCCompositionEffectCache@@@Z @ 0x18009625C (--$attach_to_smart_pointer@V-$unique_ptr@VCCompositionEffectCache@@U-$default_delete@VCCompositi.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCompositionEffectCache@@QEAA@XZ @ 0x1800B57A8 (--1CCompositionEffectCache@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CCompositionEffectCache>::operator()(__int64 a1, CCompositionEffectCache *a2)
{
  const struct std::nothrow_t *v3; // rdx

  if ( a2 )
  {
    CCompositionEffectCache::~CCompositionEffectCache(a2);
    CDisplayBlackCurtainAnimatedVisual::operator delete(a2, v3);
  }
}
