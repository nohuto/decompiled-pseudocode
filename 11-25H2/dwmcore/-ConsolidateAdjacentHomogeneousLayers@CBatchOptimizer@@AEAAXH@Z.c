/*
 * XREFs of ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800D79B0
 * Callers:
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800D7540 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18018D0D8 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 * Callees:
 *     ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x18010DDF0 (-GetCommonSuperset@CRenderingEffect@@SA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@.c)
 *     ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x18018CE4C (-PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEffect@@@Z @ 0x1801C22E0 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCRenderingEff.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(CBatchOptimizer *this, int a2)
{
  char *v2; // rdi
  char *v3; // rbx
  _QWORD *v4; // r14
  __int64 *CommonSuperset; // rax
  __int64 v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 != *((_DWORD *)this + 8) - 1 )
  {
    v2 = (char *)this + 520 * *((int *)this + a2 + 12);
    if ( *((_DWORD *)v2 + 25) )
    {
      if ( *((_QWORD *)v2 + 14) )
      {
        v3 = (char *)this + 520 * *((int *)this + a2 + 13);
        v4 = v3 + 112;
        if ( *((_QWORD *)v3 + 14) )
        {
          if ( *((_QWORD *)v2 + 10) == *((_QWORD *)v3 + 10)
            && *((_DWORD *)v2 + 22) == *((_DWORD *)v3 + 22)
            && v2[92] == v3[92] )
          {
            CBatchOptimizer::PurgeStateSettingEntriesFromLayer(this, a2 + 1);
            if ( !*((_DWORD *)v3 + 26) )
            {
              CommonSuperset = (__int64 *)CRenderingEffect::GetCommonSuperset(&v7, *((_QWORD *)v2 + 14), *v4);
              v6 = *CommonSuperset;
              *CommonSuperset = 0LL;
              if ( v7 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
              if ( v6 )
              {
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v2 + 112, v6);
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(v4, v6);
                *((_DWORD *)v2 + 26) = 1;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
              }
            }
          }
        }
      }
    }
    else
    {
      CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, a2);
    }
  }
}
