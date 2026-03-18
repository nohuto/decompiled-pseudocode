/*
 * XREFs of ?ComputeEffectiveAlpha@CProjectedShadowCaster@@AEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180036520
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x18003AF7C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18000E7D0 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z @ 0x1801991C0 (-GetVisualAlpha@CVisual@@QEBAMPEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CProjectedShadowCaster::ComputeEffectiveAlpha(CProjectedShadowCaster *this, CVisual **a2, bool *a3)
{
  CVisual *v3; // rdi
  bool v4; // bl
  float v5; // xmm6_4
  char v8; // r9
  __int64 (__fastcall *v9)(CVisual *, __int64); // rax
  char v10; // al
  bool v11; // r9
  float v12; // xmm6_4
  char v13; // r9
  float result; // xmm0_4

  v3 = (CVisual *)*((_QWORD *)this + 9);
  v4 = 0;
  v5 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *a3 = 0;
  while ( v3 != a2[9] )
  {
    v5 = v5 * fminf(1.0, fmaxf(CVisual::GetOpacityInternal(v3), 0.0));
    if ( v8
      || ((v9 = *(__int64 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v3 + 64LL),
           (char *)v9 != (char *)CVisual::IsOfType)
        ? (v10 = v9(v3, 93LL))
        : (v10 = CVisual::IsOfType(v3, 93LL)),
          v11 = 0,
          v10) )
    {
      v11 = 1;
    }
    v3 = (CVisual *)*((_QWORD *)v3 + 11);
    *a3 = v11;
  }
  v12 = v5 * CVisual::GetVisualAlpha(v3, (const struct CVisualTree *)a2);
  if ( v13 || (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 93LL) )
    v4 = 1;
  result = v12;
  *a3 = v4;
  return result;
}
