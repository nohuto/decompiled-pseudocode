/*
 * XREFs of ?FillVertexAndIndexBuffers@CD3DBatchExecutionContext@@QEAAJPEAPEBQEBVCBatchCommand@@PEBVCRenderingEffect@@@Z @ 0x1801441D0
 * Callers:
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18023AFE8 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x180142F10 (-EmitGeometry@CRenderingBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 *     ?HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ @ 0x180144370 (-HasImageLightingEffect@CBrushRenderingEffect@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::FillVertexAndIndexBuffers(
        CD3DBatchExecutionContext *this,
        __m128 ***a2,
        const struct CRenderingEffect *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __m128 **v7; // rcx
  __m128 **v8; // r12
  unsigned int i; // edi
  CBrushRenderingEffect *v10; // rcx
  int (__fastcall *v11)(__m128 *, struct CD3DBatchExecutionContext *, bool); // r9
  __m128 *v12; // rbx
  bool HasImageLightingEffect; // al
  int v14; // eax
  __m128 *v15; // rbx
  int (*v16)(CBrushRenderingEffect *__hidden, struct CD3DBatchExecutionContext *, const struct CRenderingBatchCommand *); // rax
  bool v17; // al
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __m128 *v22; // r8

  v5 = 0;
  if ( a3 )
  {
    v6 = *((_QWORD *)this + 6);
    v7 = *a2;
    if ( v6 )
    {
      v8 = v7 + 1;
      for ( i = 0; i < *(_DWORD *)(v6 + 24); ++i )
      {
        v10 = *(CBrushRenderingEffect **)(v6 + 8);
        v11 = *(int (__fastcall **)(__m128 *, struct CD3DBatchExecutionContext *, bool))(*(_QWORD *)v10 + 40LL);
        v12 = v8[i];
        if ( (char *)v11 == (char *)CBrushRenderingEffect::EmitGeometry )
        {
          HasImageLightingEffect = CBrushRenderingEffect::HasImageLightingEffect(v10);
          v14 = CRenderingBatchCommand::EmitGeometry(v12, this, HasImageLightingEffect);
        }
        else
        {
          v22 = v8[i];
          if ( v11 == CRenderingBatchCommand::EmitGeometry )
            v14 = CRenderingBatchCommand::EmitGeometry((__m128 *)v10, this, (bool)v22);
          else
            v14 = (*(__int64 (__fastcall **)(CBrushRenderingEffect *, CD3DBatchExecutionContext *, __m128 *))(*(_QWORD *)v10 + 40LL))(
                    v10,
                    this,
                    v22);
        }
        v5 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x53u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x1B1u, 0LL);
          break;
        }
      }
    }
    else
    {
      v15 = *v7;
      v16 = *(int (**)(CBrushRenderingEffect *__hidden, struct CD3DBatchExecutionContext *, const struct CRenderingBatchCommand *))(*(_QWORD *)a3 + 40LL);
      if ( v16 == CBrushRenderingEffect::EmitGeometry )
      {
        v17 = CBrushRenderingEffect::HasImageLightingEffect(a3);
        v18 = CRenderingBatchCommand::EmitGeometry(v15, this, v17);
      }
      else
      {
        v18 = ((__int64 (__fastcall *)(const struct CRenderingEffect *, CD3DBatchExecutionContext *, __m128 *, const struct CRenderingEffect *))v16)(
                a3,
                this,
                v15,
                a3);
      }
      v5 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x1B6u, 0LL);
    }
  }
  v19 = *((_QWORD *)this + 6);
  if ( v19 )
  {
    v20 = *(unsigned int *)(v19 + 24);
    dword_180406794 += v20;
    ++dword_180406790;
    *a2 += v20;
    *((_QWORD *)this + 6) = 0LL;
  }
  return v5;
}
