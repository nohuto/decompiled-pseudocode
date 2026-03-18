/*
 * XREFs of ?RequiresExternalLayer@CVisual@@QEBA_NXZ @ 0x1800B81A0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026030 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B82E0 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::RequiresExternalLayer(CVisual *this)
{
  _DWORD *v1; // r8
  int v3; // ecx
  __int64 v4; // rcx
  _BYTE *v5; // rdx
  __int64 *v6; // rax
  unsigned int i; // r9d
  __int64 v8; // rcx
  bool (__fastcall *v9)(__int64, int); // rax
  char v10; // al
  __int64 (__fastcall *v12)(); // rax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x4000000) != 0 )
    return 1;
  v3 = *(_DWORD *)(*((_QWORD *)this + 28) + 4LL);
  if ( (v3 & 0x2000000) != 0 || (v3 & 0x4000000) != 0 )
    return 1;
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
      v6 = (__int64 *)((char *)v1 + 8LL * i - (((_BYTE)v4 + 15) & 7) + v4 + 15);
    v8 = *v6;
    if ( *v6 )
    {
      v12 = *(__int64 (__fastcall **)())(*(_QWORD *)v8 + 64LL);
      if ( v12 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
      {
        if ( CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(v8, 60) )
          return 1;
      }
      else if ( ((unsigned __int8 (__fastcall *)(__int64, __int64))v12)(v8, 60LL) )
      {
        return 1;
      }
    }
  }
  v9 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)this + 64LL);
  if ( (char *)v9 == (char *)CVisual::IsOfType )
  {
    v10 = CPropertyChangeResource::IsOfType(this, 92LL);
  }
  else
  {
    if ( v9 != CSpriteVisual::IsOfType )
    {
      if ( !v9((__int64)this, 92) )
        return 0;
      goto LABEL_14;
    }
    v10 = CVisual::IsOfType(this, 92LL);
  }
  if ( !v10 )
    return 0;
LABEL_14:
  if ( *((_QWORD *)this + 85) )
    return 1;
  return *((_QWORD *)this + 84) != 0LL;
}
