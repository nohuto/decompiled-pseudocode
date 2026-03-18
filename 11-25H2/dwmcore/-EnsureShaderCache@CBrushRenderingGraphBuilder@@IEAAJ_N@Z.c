/*
 * XREFs of ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x180071970
 * Callers:
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18006FD84 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802B45D8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetUniqueShaderCache@CRenderingTechniqueFragment@@QEBAPEAVCShaderCache@@XZ @ 0x1802172C4 (-GetUniqueShaderCache@CRenderingTechniqueFragment@@QEBAPEAVCShaderCache@@XZ.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::EnsureShaderCache(CBrushRenderingGraphBuilder *this, char a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v6; // r14
  bool v7; // al
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  struct CShaderCache *UniqueShaderCache; // rax
  __int64 v11; // r11
  struct CShaderCache *v12; // r10

  v2 = *(_QWORD *)this;
  v3 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)this + 144LL);
  if ( a2 )
    v7 = *((_DWORD *)this + 2) <= 2u;
  else
    v7 = *((_DWORD *)this + 2) == 1;
  if ( v7 )
  {
    UniqueShaderCache = CRenderingTechniqueFragment::GetUniqueShaderCache(*(CRenderingTechniqueFragment **)(*(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 168LL) - 1)) + 8LL));
    v12 = UniqueShaderCache;
    if ( a2 )
    {
      if ( UniqueShaderCache )
      {
        if ( !*(_QWORD *)(v11 + 8) )
          *(_DWORD *)(v2 + 192) = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8LL) != 0LL ? 0x4000 : 0x2000;
        goto LABEL_10;
      }
      v12 = CRenderingTechniqueFragment::GetUniqueShaderCache(*(CRenderingTechniqueFragment **)(*(_QWORD *)v6 + 8LL));
    }
    if ( !v12 )
      goto LABEL_4;
LABEL_10:
    *(_QWORD *)(*(_QWORD *)this + 184LL) = v12;
    *(_BYTE *)(*(_QWORD *)this + 199LL) = 0;
    return v3;
  }
LABEL_4:
  v8 = MIDL_user_allocate(0x20uLL);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    *((_DWORD *)v8 + 4) = 0;
    v8[3] = v8;
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 184LL) = v9;
  if ( *(_QWORD *)(*(_QWORD *)this + 184LL) )
  {
    *(_BYTE *)(*(_QWORD *)this + 199LL) = 1;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2ADu, 0LL);
  }
  return v3;
}
