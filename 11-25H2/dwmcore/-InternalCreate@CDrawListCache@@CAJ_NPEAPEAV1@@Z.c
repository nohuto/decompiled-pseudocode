/*
 * XREFs of ?InternalCreate@CDrawListCache@@CAJ_NPEAPEAV1@@Z @ 0x18010C790
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800753B8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014C600 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18019FAE8 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18014C440 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDrawListCache::InternalCreate(char a1, struct CDrawListCache **a2)
{
  unsigned int v3; // esi
  __int64 v5; // rdx
  _DWORD *Value; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  LPVOID v10; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v12; // rcx
  CThreadContext *v14; // rax
  CThreadContext *v15; // rax
  unsigned int v16; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v14 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v14 || (v15 = CThreadContext::CThreadContext(v14), (Value = v15) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v15);
  }
  v9 = Value[33];
  v10 = 0LL;
  if ( v9 )
  {
    v10 = (LPVOID)*((_QWORD *)Value + 17);
    *((_QWORD *)Value + 17) = *(_QWORD *)v10;
    Value[33] = v9 - 1;
  }
  if ( v10 || (ProcessHeap = GetProcessHeap(), (v10 = HeapAlloc(ProcessHeap, 0, 0x58uLL)) != 0LL) )
  {
    *((_DWORD *)v10 + 2) = 0;
    *(_QWORD *)v10 = &CDrawListCache::`vftable';
    v12 = 0LL;
    if ( g_pComposition )
      v12 = *((_QWORD *)g_pComposition + 111);
    *((_QWORD *)v10 + 2) = v12;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_QWORD *)v10 + 5) = 2LL;
    *((_QWORD *)v10 + 9) = 0LL;
    *((_WORD *)v10 + 42) = 0;
    *((_BYTE *)v10 + 86) = a1;
    if ( _InterlockedAdd((volatile signed __int32 *)v10 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v16);
    v18 = 0LL;
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v18, v5, v7, v8);
    *a2 = (struct CDrawListCache *)v10;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x24u, 0LL);
  }
  return v3;
}
