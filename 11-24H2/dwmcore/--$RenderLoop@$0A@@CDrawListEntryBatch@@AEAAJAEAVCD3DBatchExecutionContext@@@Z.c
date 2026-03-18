/*
 * XREFs of ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18022EE74
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180108FE0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x180108590 (-FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderi.c)
 *     ?SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z @ 0x1801087F0 (-SetRenderingEffectState@CD3DBatchExecutionContext@@QEAAJPEBVCRenderingEffect@@@Z.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180188170 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180188440 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1801B21D0 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801BCE10 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ @ 0x1801C8C20 (-GetRenderingEffect@CBatchCommand@@QEBAPEAVCRenderingEffect@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBatch::RenderLoop<0>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // r15d
  int v6; // r14d
  struct CRenderingEffect *v8; // rbx
  __int64 v9; // r8
  struct CBatchCommand **v10; // rdi
  struct CBatchCommand **v11; // rcx
  CBatchCommand *v12; // r12
  CBatchCommand *v13; // rcx
  volatile signed __int32 *RenderingEffect; // rax
  void (__fastcall *v15)(struct CRenderingEffect *, struct CRenderingEffect **, struct CRenderingEffect *, bool *); // rdi
  struct CRenderingEffect *v16; // rax
  int v17; // eax
  const struct CRenderingEffect *v18; // r8
  int v19; // eax
  struct CBatchCommand **v21; // [rsp+30h] [rbp-10h] BYREF
  struct CBatchCommand **v22; // [rsp+38h] [rbp-8h]
  bool v23; // [rsp+80h] [rbp+40h] BYREF
  struct CRenderingEffect *v24; // [rsp+90h] [rbp+50h] BYREF
  struct CRenderingEffect *v25; // [rsp+98h] [rbp+58h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v6 = 0;
  v8 = 0LL;
  v24 = 0LL;
  v9 = *(_QWORD *)(v4 + 24);
  v10 = (struct CBatchCommand **)(v9 + 8LL * *(unsigned int *)(a1 + 40));
  v11 = (struct CBatchCommand **)(v9 + 8LL * *(unsigned int *)(a1 + 44));
  v22 = v11;
  while ( 1 )
  {
    v21 = v10;
    if ( v10 == v11 )
      break;
    v12 = *v10;
    if ( !CBatchCommand::ApplyRenderState(
            (struct CHwLightCollectionBuffer **)*v10,
            (struct IDrawListStateSink *)a2,
            v9,
            a4) )
      goto LABEL_17;
    if ( !v8 )
    {
      CD3DBatchExecutionContext::Flush(a2, 0x80000000);
      v13 = v12;
LABEL_6:
      RenderingEffect = (volatile signed __int32 *)CBatchCommand::GetRenderingEffect(v13);
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
        (volatile signed __int32 **)&v24,
        RenderingEffect);
      v8 = v24;
      goto LABEL_11;
    }
    v13 = v12;
    if ( *(int *)(a2 + 32) < 0 )
      goto LABEL_6;
    v23 = *(int *)(a2 + 32) < 0;
    v15 = *(void (__fastcall **)(struct CRenderingEffect *, struct CRenderingEffect **, struct CRenderingEffect *, bool *))(*(_QWORD *)v8 + 72LL);
    v16 = CBatchCommand::GetRenderingEffect(v12);
    v15(v8, &v25, v16, &v23);
    if ( v25 != v8 )
    {
      CD3DBatchExecutionContext::Flush(a2, 0x80000000);
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=((__int64 *)&v24, (__int64 *)&v25);
      v8 = v24;
    }
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v25);
LABEL_11:
    if ( *(int *)(a2 + 32) >= 0 )
    {
      if ( v6 >= 0 )
      {
LABEL_19:
        v18 = v8;
        goto LABEL_15;
      }
    }
    else
    {
      v17 = CD3DBatchExecutionContext::SetRenderingEffectState((CD3DBatchExecutionContext *)a2, v8);
      v6 = v17;
      if ( v17 >= 0 )
        goto LABEL_19;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x159u, 0LL);
    }
    v18 = 0LL;
LABEL_15:
    v19 = CD3DBatchExecutionContext::FillVertexAndIndexBuffers((CD3DBatchExecutionContext *)a2, (__m128 ***)&v21, v18);
    v5 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x160u, 0LL);
      break;
    }
    *(_DWORD *)(a2 + 32) = 0;
    v10 = v21;
LABEL_17:
    v11 = v22;
    ++v10;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v8 + 8LL))(v8);
  return v5;
}
