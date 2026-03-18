/*
 * XREFs of ?Has3DContent@CVisual@@IEBA_NXZ @ 0x180036430
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsOfType@?$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370F0 (-IsOfType@-$CEffectGeneratedT@VCEffect@@VCPropertyChangeResource@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::Has3DContent(CVisual *this)
{
  _DWORD *v1; // r8
  _QWORD *v2; // rbx
  __int64 v4; // rax
  _BYTE *v5; // rdx
  unsigned int i; // ecx
  _QWORD **v7; // rdi
  _QWORD *v8; // rdi
  __int64 (__fastcall *v9)(); // rax
  __int64 (__fastcall *v10)(); // rax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  v2 = 0LL;
  if ( (*v1 & 0x800000) == 0 )
    return v2 != 0LL;
  v4 = (unsigned int)v1[1];
  v5 = v1 + 2;
  for ( i = 0; i < (unsigned int)v4; ++v5 )
  {
    if ( *v5 == 9 )
      break;
    ++i;
  }
  if ( i >= (unsigned int)v4 )
    v7 = 0LL;
  else
    v7 = (_QWORD **)((char *)v1 + 8LL * i - (((_BYTE)v4 + 15) & 7) + v4 + 15);
  v8 = *v7;
  v9 = *(__int64 (__fastcall **)())(*v8 + 64LL);
  if ( v9 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType )
  {
    if ( (unsigned __int8)CEffectGeneratedT<CEffect,CPropertyChangeResource>::IsOfType(v8, 175LL) )
    {
LABEL_9:
      v2 = v8;
      return v2 != 0LL;
    }
  }
  else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v9)(v8, 175LL) )
  {
    goto LABEL_9;
  }
  v10 = *(__int64 (__fastcall **)())(*v8 + 64LL);
  if ( v10 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
    || ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v10)(v8, 58LL) )
  {
    v2 = (_QWORD *)v8[11];
  }
  return v2 != 0LL;
}
