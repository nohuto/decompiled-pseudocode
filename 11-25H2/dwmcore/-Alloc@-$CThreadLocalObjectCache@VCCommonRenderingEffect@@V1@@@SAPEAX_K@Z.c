/*
 * XREFs of ?Alloc@?$CThreadLocalObjectCache@VCCommonRenderingEffect@@V1@@@SAPEAX_K@Z @ 0x18010D994
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18010F900 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x180128BA0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ?CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z @ 0x1802019B8 (-CreateSolidColorRenderingEffect@CCommonRenderingEffectFactory@@AEAAJPEAPEAVCRenderingEffect@@@Z.c)
 *     ?CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180220220 (-CreateRenderingEffect@CProjectedShadowRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 */

_QWORD *CThreadLocalObjectCache<CCommonRenderingEffect,CCommonRenderingEffect>::Alloc()
{
  _DWORD *Value; // rbx
  int v1; // edx
  _QWORD *v2; // rcx
  HANDLE ProcessHeap; // rax
  CThreadContext *v5; // rax
  CThreadContext *v6; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v5 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v5 || (v6 = CThreadContext::CThreadContext(v5), (Value = v6) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v6);
  }
  v1 = Value[69];
  v2 = 0LL;
  if ( v1 )
  {
    v2 = (_QWORD *)*((_QWORD *)Value + 35);
    *((_QWORD *)Value + 35) = *v2;
    Value[69] = v1 - 1;
  }
  if ( !v2 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapAlloc(ProcessHeap, 0, 0x48uLL);
  }
  return v2;
}
