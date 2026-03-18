/*
 * XREFs of ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x1800D6ED0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006B114 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801109C0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180110800 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDrawListCache::InternalCreate(char a1, struct CDrawListCache **a2)
{
  unsigned int v3; // esi
  _DWORD *Value; // rdi
  int v6; // ecx
  LPVOID v7; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v9; // rcx
  CThreadContext *v11; // rax
  CThreadContext *v12; // rax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v11 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v11 || (v12 = CThreadContext::CThreadContext(v11), (Value = v12) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v12);
  }
  v6 = Value[33];
  v7 = 0LL;
  if ( v6 )
  {
    v7 = (LPVOID)*((_QWORD *)Value + 17);
    *((_QWORD *)Value + 17) = *(_QWORD *)v7;
    Value[33] = v6 - 1;
  }
  if ( v7 || (ProcessHeap = GetProcessHeap(), (v7 = HeapAlloc(ProcessHeap, 0, 0x58uLL)) != 0LL) )
  {
    *((_DWORD *)v7 + 2) = 0;
    *(_QWORD *)v7 = &CDrawListCache::`vftable';
    v9 = 0LL;
    if ( g_pComposition )
      v9 = *((_QWORD *)g_pComposition + 111);
    *((_QWORD *)v7 + 2) = v9;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 2LL;
    *((_QWORD *)v7 + 9) = 0LL;
    *((_WORD *)v7 + 42) = 0;
    *((_BYTE *)v7 + 86) = a1;
    if ( _InterlockedAdd((volatile signed __int32 *)v7 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v13);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v15);
    *a2 = (struct CDrawListCache *)v7;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x24u, 0LL);
  }
  return v3;
}
