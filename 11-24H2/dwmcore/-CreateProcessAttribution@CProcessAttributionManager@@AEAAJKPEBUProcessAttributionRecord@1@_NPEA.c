/*
 * XREFs of ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x1801E6EAC
 * Callers:
 *     ?GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z @ 0x1801E70C0 (-GetProcessAttribution@CProcessAttributionManager@@QEAAJK_KPEAPEAVCProcessAttribution@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800DEA80 (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z @ 0x1801E72D8 (-IsLessThan@ProcessAttributionRecord@CProcessAttributionManager@@SA_NPEBU12@_J@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall CProcessAttributionManager::CreateProcessAttribution(
        CProcessAttributionManager *this,
        int a2,
        const struct CProcessAttributionManager::ProcessAttributionRecord *a3,
        char a4,
        struct CProcessAttribution **a5)
{
  unsigned int v9; // esi
  char *v10; // rax
  __int64 *v11; // r14
  __int64 *v12; // r13
  char *v13; // rdi
  unsigned __int64 v14; // rbx
  const struct CProcessAttributionManager::ProcessAttributionRecord **v15; // r12
  _OWORD *v16; // rax
  _OWORD *v17; // rbx
  __int128 v18; // xmm0
  __int64 v19; // r9
  char *v20; // rcx
  _OWORD *v22; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = 0;
  v10 = (char *)DefaultHeap::AllocClear(0x88uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v10 + 2) = 0;
  *(_QWORD *)v10 = &CProcessAttribution::`vftable';
  *((_DWORD *)v10 + 32) = a2;
  *((_QWORD *)v10 + 2) = *(_QWORD *)a3;
  *(_OWORD *)(v10 + 24) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)v10 + 10) = *((_DWORD *)a3 + 6);
  *a5 = (struct CProcessAttribution *)v10;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 8));
  if ( a4 )
  {
    v11 = (__int64 *)*((_QWORD *)this + 3);
    v12 = (__int64 *)*((_QWORD *)this + 4);
    while ( v11 != v12 )
    {
      v13 = *(char **)(*v11 + 16);
      v14 = (__int64)(*(_QWORD *)(*v11 + 24) - (_QWORD)v13) >> 3;
      while ( (__int64)v14 > 0 )
      {
        v15 = (const struct CProcessAttributionManager::ProcessAttributionRecord **)&v13[8 * (v14 >> 1)];
        if ( CProcessAttributionManager::ProcessAttributionRecord::IsLessThan(*v15, *(_QWORD *)a3) )
        {
          v13 = (char *)(v15 + 1);
          v14 += -1LL - (v14 >> 1);
        }
        else
        {
          v14 >>= 1;
        }
      }
      if ( v13 == *(char **)(*v11 + 24) || **(_QWORD **)v13 != *(_QWORD *)a3 )
      {
        v16 = MIDL_user_allocate(0x70uLL);
        v17 = v16;
        if ( !v16 )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1DFu, 0LL);
          return v9;
        }
        memset_0(v16, 0, 0x70uLL);
        v18 = *(_OWORD *)a3;
        v22 = v17;
        *v17 = v18;
        v17[1] = *((_OWORD *)a3 + 1);
        v17[2] = *((_OWORD *)a3 + 2);
        v17[3] = *((_OWORD *)a3 + 3);
        v17[4] = *((_OWORD *)a3 + 4);
        v17[5] = *((_OWORD *)a3 + 5);
        v17[6] = *((_OWORD *)a3 + 6);
        v19 = *v11;
        v20 = *(char **)(*v11 + 24);
        if ( v20 == *(char **)(*v11 + 32) )
        {
          std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
            (const void **)(v19 + 16),
            v13,
            &v22);
        }
        else if ( v13 == v20 )
        {
          *(_QWORD *)v20 = v17;
          *(_QWORD *)(v19 + 24) += 8LL;
        }
        else
        {
          *(_QWORD *)v20 = *((_QWORD *)v20 - 1);
          *(_QWORD *)(v19 + 24) += 8LL;
          memmove_0(v13 + 8, v13, v20 - v13 - 8);
          *(_QWORD *)v13 = v17;
        }
      }
      ++v11;
    }
  }
  return v9;
}
