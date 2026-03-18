/*
 * XREFs of ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x180054AF0
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180054980 (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180188720 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180289FB8 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180054000 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ??4?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800547B0 (--4-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x180054F60 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180187D4C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBatchOptimizer::TryMergeOneLayer(CBatchOptimizer *this)
{
  int v1; // ebx
  char *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 i; // rax
  __int64 v8; // r12
  int v9; // r15d
  __int64 j; // rbp
  int *v11; // rdx
  char *v12; // r14
  int v13; // r10d
  __int64 v14; // r8
  int *v15; // r9
  __int64 v16; // rax
  char *v17; // rcx
  __int64 v18; // rdx
  float *v19; // rcx
  int *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  volatile signed __int32 **v24; // rax
  volatile signed __int32 **v25; // rdx
  void (*v26)(void); // rax
  int v27; // et0
  char *v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  int v32; // r11d
  _DWORD *v33; // r9
  __int64 v35; // rcx
  int v36; // r9d
  __int64 v37; // rdx
  _DWORD *v38; // r8
  __int64 v39; // rax
  int v40[2]; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v42; // [rsp+88h] [rbp+10h]
  volatile signed __int32 **v43; // [rsp+90h] [rbp+18h]
  volatile signed __int32 *v44; // [rsp+90h] [rbp+18h]
  __int64 v45; // [rsp+98h] [rbp+20h]
  volatile signed __int32 *v46; // [rsp+98h] [rbp+20h]

  v1 = 0;
  if ( *((_DWORD *)this + 130 * *((int *)this + 12) + 26) )
  {
    v3 = (char *)this + 48;
    do
    {
      v4 = *((int *)v3 + 1);
      v3 += 4;
      ++v1;
    }
    while ( *((_DWORD *)this + 130 * v4 + 26) );
  }
  v5 = *((int *)this + 8);
  v6 = v1;
  for ( i = (int)v5 - 1; v6 != i; i = (int)v5 - 1 )
  {
    v8 = 520LL * *((int *)this + v6 + 12);
    if ( *(_DWORD *)((char *)this + v8 + 100) && !*(_QWORD *)((char *)this + v8 + 112) )
    {
      v9 = v1 + 1;
      for ( j = v1 + 1; j != v5; ++j )
      {
        v11 = (int *)((char *)this + 4 * j + 48);
        v12 = (char *)this + 520 * *v11;
        if ( *((_DWORD *)v12 + 26) )
        {
          do
          {
            v39 = v11[1];
            ++v11;
            ++v9;
            ++j;
          }
          while ( *((_DWORD *)this + 130 * v39 + 26) );
        }
        else
        {
          v13 = *((_DWORD *)v12 + 25);
          if ( v13 == 1 && !*((_QWORD *)v12 + 14) && *(_QWORD *)((char *)this + v8 + 80) == *((_QWORD *)v12 + 10) )
          {
            v14 = j - 1;
            v15 = (int *)((char *)this + 4 * j + 44);
            while ( v14 != v1 )
            {
              v16 = 0LL;
              v17 = (char *)this + 520 * *v15;
              v18 = *((int *)v17 + 25);
              v19 = (float *)(v17 + 284);
              while ( v16 != v18 )
              {
                if ( *((float *)v12 + 72) >= *(v19 - 1)
                  && v19[1] >= *((float *)v12 + 70)
                  && *((float *)v12 + 73) >= *v19
                  && v19[2] >= *((float *)v12 + 71) )
                {
                  goto LABEL_26;
                }
                ++v16;
                v19 += 4;
              }
              --v14;
              --v15;
            }
            v42 = *((_DWORD *)v12 + 24);
            v22 = (unsigned int)(v42 - 1);
            *(_QWORD *)v40 = *(_QWORD *)&v12[8 * v22 + 120];
            *((_QWORD *)v12 + 12) = (unsigned int)v22;
            v23 = 520LL * *((int *)this + v6 + 12);
            v45 = v23;
            if ( v1 && *(_DWORD *)((char *)this + v23 + 100) == 20 || *(_DWORD *)((char *)this + v23 + 96) == 20 )
            {
              if ( *(_DWORD *)((char *)this + v23 + 100) )
                *(_DWORD *)((char *)this + v23 + 104) = 1;
              v24 = (volatile signed __int32 **)((char *)this + v23 + 112);
              v43 = v24;
              if ( v1 )
              {
                CBatchOptimizer::FlushBottomLayer(this);
                v35 = 520LL * *((int *)this + 12);
                *(_OWORD *)((char *)this + v35 + 80) = *(_OWORD *)((char *)this + v45 + 80);
                wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::operator=(
                  (CMILRefCountImpl **)((char *)this + v35 + 112),
                  (CMILRefCountImpl **)((char *)this + v45 + 112));
                v36 = *((_DWORD *)this + 12);
                if ( v6 )
                {
                  v37 = 0LL;
                  v38 = (_DWORD *)((char *)this + 48);
                  do
                  {
                    ++v37;
                    *v38 = v38[1];
                    ++v38;
                  }
                  while ( v37 != v6 );
                }
                *((_DWORD *)this + v6 + 12) = v36;
              }
              else
              {
                v46 = *v24;
                CBatchOptimizer::FlushBottomLayer(this);
                v25 = v43;
                v44 = *v43;
                *v25 = v46;
                if ( v46 )
                {
                  v26 = **(void (***)(void))v46;
                  if ( (char *)v26 == (char *)CMILRefCountImpl::AddReference )
                  {
                    v27 = _InterlockedAdd(v46, 1u);
                    if ( (v27 < 0) ^ __OFSUB__(v26, CMILRefCountImpl::AddReference) | (v27 == 0) )
                      wil::details::in1diag3::Log_Hr(
                        retaddr,
                        (void *)0x18,
                        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                        (const char *)0x8007029CLL,
                        v40[0]);
                  }
                  else
                  {
                    v26();
                  }
                }
                if ( v44 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
              }
              v13 = 1;
            }
            v28 = (char *)this + 520 * *((int *)this + v6 + 12);
            v29 = *((unsigned int *)v28 + 24);
            *((_DWORD *)v28 + 24) = v29 + 1;
            *(_QWORD *)&v28[8 * v29 + 120] = *(_QWORD *)v40;
            if ( v1 )
              *(_OWORD *)&v28[16 * *((unsigned int *)v28 + 25) + 280] = *(_OWORD *)(v12 + 280);
            ++*((_DWORD *)v28 + 25);
            if ( v42 == v13 )
            {
              v30 = *((_DWORD *)this + 8) - 1;
              if ( v9 != v30 )
              {
                v31 = v9;
                v32 = *((_DWORD *)this + v9 + 12);
                v33 = (_DWORD *)((char *)this + 4 * v9 + 48);
                do
                {
                  ++v31;
                  *v33 = v33[1];
                  ++v33;
                }
                while ( v31 != v30 );
                *((_DWORD *)this + v30 + 12) = v32;
              }
              --*((_DWORD *)this + 8);
              CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(this, v9 - 1);
              return 1;
            }
            if ( CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, v9) )
              return 1;
          }
        }
LABEL_26:
        ++v9;
      }
    }
    ++v1;
    v20 = (int *)((char *)this + 4 * ++v6 + 48);
    if ( *((_DWORD *)this + 130 * *v20 + 26) )
    {
      do
      {
        v21 = v20[1];
        ++v20;
        ++v1;
        ++v6;
      }
      while ( *((_DWORD *)this + 130 * v21 + 26) );
    }
  }
  *((_BYTE *)this + 4240) = 0;
  return 0;
}
