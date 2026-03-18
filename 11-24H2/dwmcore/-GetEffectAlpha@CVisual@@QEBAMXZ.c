/*
 * XREFs of ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1800373E0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2710 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800374C0 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CVisual::GetEffectAlpha(CVisual *this)
{
  _DWORD *v1; // r8
  float v2; // xmm7_4
  __int64 v4; // rcx
  _BYTE *v5; // rax
  float **v6; // rbx
  unsigned int i; // r9d
  float *v8; // rbx
  __int64 (__fastcall *v9)(); // rax
  char v10; // al

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  v2 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( (*v1 & 0x800000) != 0 )
  {
    v4 = (unsigned int)v1[1];
    v5 = v1 + 2;
    v6 = 0LL;
    for ( i = 0; i < (unsigned int)v4; ++v5 )
    {
      if ( *v5 == 9 )
        break;
      ++i;
    }
    if ( i < (unsigned int)v4 )
      v6 = (float **)((char *)v1 + 8LL * i - (((_BYTE)v4 + 15) & 7) + v4 + 15);
    v8 = *v6;
    v9 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 64LL);
    if ( v9 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
      || ((char *)v9 != (char *)CMatrixTransform3D::IsOfType
        ? (v10 = ((__int64 (__fastcall *)(float *, __int64))v9)(v8, 58LL))
        : (v10 = CMatrixTransform3D::IsOfType(v8, 58LL)),
          v10) )
    {
      v2 = v8[20];
    }
  }
  return fminf(1.0, fmaxf(v2, 0.0));
}
