/*
 * XREFs of ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180147598
 * Callers:
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180077230 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x180077F10 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1801482FC (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001C3B0 (-UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180053590 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180108A2C (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180146CD0 (-UpdateBitmaps@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x180146F30 (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801479F8 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@_N@Z @ 0x180147A30 (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x180187F20 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_RenderPass(
        __int64 a1,
        __m128 *a2,
        unsigned int a3,
        __int64 **a4)
{
  unsigned __int64 v4; // rsi
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rbx
  CCommonRenderingEffect *v11; // rcx
  __int64 (__fastcall *v12)(CBrushRenderingEffect *, struct CDrawingContext *); // rax
  int updated; // eax
  unsigned int v14; // edx
  unsigned __int64 v15; // r14
  int v16; // esi
  CBatchCommand *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rcx
  CBatchCommand *v20; // rcx
  __int64 v21; // r12
  CBatchCommand *v22; // rcx
  unsigned __int64 v23; // r14
  struct ClipPlaneInfoRef *v24; // rdi
  struct CHwLightCollectionBuffer *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  int appended; // edi
  unsigned int v29; // edx
  unsigned int v31; // edx
  unsigned int v32; // eax
  __int64 v33; // rcx
  CBatchCommand *v34; // rax
  CBatchCommand *v35; // r12
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // [rsp+30h] [rbp-68h]
  __int64 v39; // [rsp+38h] [rbp-60h]
  CBatchCommand *v40; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+48h] [rbp-50h]
  __int64 v42; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  CBatchCommand *v45; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v46; // [rsp+B8h] [rbp+20h]

  v4 = a2[2].m128_u64[1];
  v46 = v4;
  v7 = *(_QWORD *)(a1 + 16) + 432LL * a3;
  v39 = v7;
  if ( !a4[1] )
    return 0LL;
  v8 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
  v10 = *a4;
  while ( 1 )
  {
    do
    {
      v10 = (__int64 *)*v10;
      if ( v10 == *a4 )
        return 0LL;
      v38 = *(_QWORD *)(v7 + 8);
      v41 = 5LL * *((unsigned int *)v10 + 4);
      v42 = *(_QWORD *)(v38 + 8 * v41);
      v11 = *(CCommonRenderingEffect **)(v42 + 24);
      v12 = *(__int64 (__fastcall **)(CBrushRenderingEffect *, struct CDrawingContext *))(*(_QWORD *)v11 + 48LL);
      if ( v12 == CCommonRenderingEffect::UpdateBitmaps )
      {
        updated = CCommonRenderingEffect::UpdateBitmaps(v11, (struct CDrawingContext *)a2);
      }
      else if ( v12 == CBrushRenderingEffect::UpdateBitmaps )
      {
        updated = CBrushRenderingEffect::UpdateBitmaps(v11, (struct CDrawingContext *)a2);
      }
      else
      {
        updated = v12(v11, (struct CDrawingContext *)a2);
      }
    }
    while ( updated < 0 );
    v45 = 0LL;
    v15 = v4 + 64;
    v16 = 0;
    v17 = 0LL;
    if ( !*(_DWORD *)(v15 + 24) )
    {
      v34 = (CBatchCommand *)MIDL_user_allocate(0xB8uLL);
      v35 = v34;
      if ( !v34 )
      {
        v16 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15Eu, 0LL);
        goto LABEL_12;
      }
      *(_DWORD *)v34 = 0;
      v40 = v34;
      v36 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v15, &v40, 1LL);
      v16 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x160u, 0LL);
        std::default_delete<CBatchCommand>::operator()(v37, v35);
        goto LABEL_12;
      }
    }
    v18 = *(_DWORD *)(v15 + 32);
    v19 = (unsigned int)(*(_DWORD *)(v15 + 24) - 1);
    if ( v18 >= (unsigned int)v19 )
      v18 = *(_DWORD *)(v15 + 24) - 1;
    v17 = *(CBatchCommand **)(*(_QWORD *)v15 + 8 * v19);
    *(_DWORD *)(v15 + 32) = v18;
    *(_DWORD *)(v15 + 24) = v19;
LABEL_12:
    v20 = v45;
    v45 = v17;
    if ( v20 )
    {
      CBatchCommand::`scalar deleting destructor'(v20, v14);
      v17 = v45;
    }
    if ( v16 < 0 )
      break;
    v21 = v41;
    CBatchCommand::InitializeForRendering(v17, v42, *(unsigned int *)(v38 + 8 * v41 + 12));
    v22 = v45;
    v23 = v46;
    *((_DWORD *)v45 + 24) = 0;
    *(_QWORD *)((char *)v22 + 100) = *(__int64 *)((char *)v10 + 20);
    *((_DWORD *)v22 + 27) = *((_DWORD *)v10 + 7);
    *((_OWORD *)v22 + 7) = *(_OWORD *)(a1 + 904);
    *((_OWORD *)v22 + 8) = *(_OWORD *)(a1 + 920);
    *((_OWORD *)v22 + 9) = *(_OWORD *)(a1 + 936);
    *((_OWORD *)v22 + 10) = *(_OWORD *)(a1 + 952);
    *((_DWORD *)v22 + 44) = *(_DWORD *)(a1 + 968);
    v24 = *(struct ClipPlaneInfoRef **)(v38 + 8 * v21 + 24);
    v25 = *(struct CHwLightCollectionBuffer **)(v38 + 8 * v21 + 16);
    CD2DContext::EnsureBeginDraw((CD2DContext *)(v23 + 16), v26, v27);
    appended = CD2DContext::EnsureDrawListBatch((CD2DContext *)(v23 + 16), v25, v24);
    if ( appended < 0 )
    {
      v32 = 519;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, v32, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x218,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)appended);
      if ( v45 )
        std::default_delete<CBatchCommand>::operator()(v33, v45);
      return (unsigned int)appended;
    }
    appended = CDrawListEntryBatch::AppendRenderCommand(*(_QWORD *)(v23 + 152), &v45);
    if ( appended < 0 )
    {
      v32 = 522;
      goto LABEL_27;
    }
    if ( v45 )
      CBatchCommand::`scalar deleting destructor'(v45, v29);
    v7 = v39;
    v4 = v23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x208,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)(unsigned int)v16);
  if ( v45 )
    CBatchCommand::`scalar deleting destructor'(v45, v31);
  return (unsigned int)v16;
}
