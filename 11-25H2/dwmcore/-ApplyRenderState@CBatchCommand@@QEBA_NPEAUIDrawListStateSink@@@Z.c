/*
 * XREFs of ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x18018D6A0
 * Callers:
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18018D54C (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x18023AFE8 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180295158 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x18018D830 (-SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18018D970 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?SetLights@CBatchOptimizer@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x18018DA40 (-SetLights@CBatchOptimizer@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x18018DA50 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBatchCommand::ApplyRenderState(
        struct CHwLightCollectionBuffer **this,
        struct IDrawListStateSink *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  void (__fastcall *v8)(struct IDrawListStateSink *); // rax
  unsigned __int8 v9; // si
  void (__fastcall *v10)(struct IDrawListStateSink *, _QWORD); // rax
  void (__fastcall *v11)(CD3DBatchExecutionContext *__hidden, const struct CGroupBatchCommand *); // rax
  void (__fastcall **v12)(CBatchOptimizer *__hidden, struct CHwLightCollectionBuffer *); // rax
  struct CHwLightCollectionBuffer *v13; // rdx
  void (__fastcall *v14)(CBatchOptimizer *__hidden, struct CHwLightCollectionBuffer *); // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)this == 1 )
    return CRenderingBatchCommand::ApplyRenderState((CRenderingBatchCommand *)this, a2);
  if ( *(_DWORD *)this == 2 )
  {
    v12 = *(void (__fastcall ***)(CBatchOptimizer *__hidden, struct CHwLightCollectionBuffer *))a2;
    v13 = this[1];
    v14 = *v12;
    if ( v14 == CD3DBatchExecutionContext::SetLights )
    {
      CD3DBatchExecutionContext::SetLights(a2, v13);
      return 0;
    }
    else
    {
      if ( v14 != CBatchOptimizer::SetLights )
      {
        v14(a2, v13);
        return 0;
      }
      CBatchOptimizer::SetLights(a2, v13);
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)this != 3 )
    {
      if ( *(_DWORD *)this == 4 )
      {
        if ( !*(_DWORD *)this[12] )
          return 0;
      }
      else if ( *(_DWORD *)this != 5 )
      {
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      return CRenderingBatchCommand::ApplyRenderState((CRenderingBatchCommand *)this, a2);
    }
    v7 = *((unsigned int *)this + 4);
    if ( (_DWORD)v7 != 24 )
    {
      v8 = *(void (__fastcall **)(struct IDrawListStateSink *))(*(_QWORD *)a2 + 8LL);
      if ( (char *)v8 == (char *)CD3DBatchExecutionContext::SetBlendMode )
        CD3DBatchExecutionContext::SetBlendMode(a2, v7, a3, a4);
      else
        v8(a2);
    }
    v9 = *((_BYTE *)this + 20);
    if ( v9 != 2 )
    {
      v10 = *(void (__fastcall **)(struct IDrawListStateSink *, _QWORD))(*(_QWORD *)a2 + 24LL);
      if ( (char *)v10 == (char *)&CD3DBatchExecutionContext::SetDrawMethod )
      {
        if ( v9 != *((_BYTE *)a2 + 74) )
        {
          CD3DBatchExecutionContext::Flush(a2, 512LL);
          *((_BYTE *)a2 + 74) = v9;
        }
      }
      else
      {
        v10(a2, v9);
      }
    }
    v11 = *(void (__fastcall **)(CD3DBatchExecutionContext *__hidden, const struct CGroupBatchCommand *))(*(_QWORD *)a2 + 16LL);
    if ( v11 == CD3DBatchExecutionContext::SetStateGroup )
      *((_QWORD *)a2 + 6) = this;
    else
      v11(a2, (const struct CGroupBatchCommand *)this);
    return 1;
  }
}
