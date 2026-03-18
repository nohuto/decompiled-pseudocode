/*
 * XREFs of ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C8CDC
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400C4A1C (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5B58 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400C7544 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C8160 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x14010FFB8 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  _QWORD *v3; // rcx
  __int64 v5; // rcx
  struct VIDMM_RECYCLE_RANGE *v6; // rdi
  struct VIDMM_RECYCLE_RANGE *v7; // rsi
  char v8; // r15
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax

  v3 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v3 )
  {
    v16 = *v3 + 144LL * v3[1];
    *(_DWORD *)v16 = 3;
    *(_QWORD *)(v16 + 8) = a2;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v16 + 16), 0LL);
    ++*(_QWORD *)(*((_QWORD *)this + 17) + 8LL);
    v17 = *((_QWORD *)this + 17);
    if ( *(_QWORD *)(v17 + 8) == *(_QWORD *)(v17 + 48) )
    {
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_BYTE *)(*((_QWORD *)this + 17) + 16LL) = 1;
    }
  }
  v5 = *((_QWORD *)a2 + 17);
  if ( !v5 || *(_QWORD *)(v5 + 64) == *(_QWORD *)(v5 + 72) )
  {
    v6 = a2;
    v7 = a2;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 )
      {
        if ( v9 )
        {
          if ( v6 != v7 )
            VIDMM_RECYCLE_BLOCK::CombineFreedRanges((VIDMM_RECYCLE_BLOCK *)v5, v6, v7, a2);
          return;
        }
        goto LABEL_14;
      }
      v10 = *((_QWORD *)v6 + 16);
      v11 = 0LL;
      v5 = *((_QWORD *)v6 + 9) + 72LL;
      if ( v10 != v5 )
        v11 = v10 - 120;
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 64) )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            v12 = WdLogNewEntry5_WdTrace(v5);
            *(_QWORD *)(v12 + 24) = v11;
            v5 = *(int *)(v11 + 64);
            *(_QWORD *)(v12 + 32) = v5;
            WdLogGlobalForLineNumber = 7261;
          }
        }
        else
        {
          if ( *(_QWORD *)(v11 + 160) )
            goto LABEL_38;
          v5 = *(_QWORD *)(v11 + 136);
          if ( !v5 || *(_QWORD *)(v5 + 64) == *(_QWORD *)(v5 + 72) )
          {
            v6 = (struct VIDMM_RECYCLE_RANGE *)v11;
            goto LABEL_13;
          }
          if ( *(_QWORD *)(v11 + 160) )
          {
LABEL_38:
            if ( g_IsInternalReleaseOrDbg )
            {
              v19 = WdLogNewEntry5_WdTrace(v5);
              *(_QWORD *)(v19 + 24) = v11;
              v5 = *(_QWORD *)(v11 + 160);
              *(_QWORD *)(v19 + 32) = v5;
              WdLogGlobalForLineNumber = 7265;
            }
          }
          else if ( g_IsInternalReleaseOrDbg )
          {
            v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v5);
            v18[3] = v11;
            v18[4] = *(_QWORD *)(v11 + 136);
            v18[5] = *(_QWORD *)(*(_QWORD *)(v11 + 136) + 64LL);
            v5 = *(_QWORD *)(v11 + 136);
            v18[6] = *(_QWORD *)(v5 + 72);
            WdLogGlobalForLineNumber = 7273;
          }
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = 0LL;
        WdLogGlobalForLineNumber = 7257;
      }
      v8 = 1;
LABEL_13:
      if ( !v9 )
      {
LABEL_14:
        v13 = *((_QWORD *)v7 + 15);
        v14 = 0LL;
        v5 = *((_QWORD *)v7 + 9) + 72LL;
        if ( v13 != v5 )
          v14 = v13 - 120;
        if ( v14 )
        {
          if ( *(_DWORD *)(v14 + 64) )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              v15 = WdLogNewEntry5_WdTrace(v5);
              *(_QWORD *)(v15 + 24) = v14;
              v5 = *(int *)(v14 + 64);
              *(_QWORD *)(v15 + 32) = v5;
              WdLogGlobalForLineNumber = 7303;
            }
            goto LABEL_20;
          }
          if ( *(_QWORD *)(v14 + 160) )
            goto LABEL_47;
          v5 = *(_QWORD *)(v14 + 136);
          if ( v5 && *(_QWORD *)(v5 + 64) != *(_QWORD *)(v5 + 72) )
          {
            if ( !*(_QWORD *)(v14 + 160) )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v5);
                v20[3] = v14;
                v20[4] = *(_QWORD *)(v14 + 136);
                v20[5] = *(_QWORD *)(*(_QWORD *)(v14 + 136) + 64LL);
                v5 = *(_QWORD *)(v14 + 136);
                v20[6] = *(_QWORD *)(v5 + 72);
                WdLogGlobalForLineNumber = 7315;
              }
              goto LABEL_20;
            }
LABEL_47:
            if ( g_IsInternalReleaseOrDbg )
            {
              v21 = WdLogNewEntry5_WdTrace(v5);
              *(_QWORD *)(v21 + 24) = v14;
              v5 = *(_QWORD *)(v14 + 160);
              *(_QWORD *)(v21 + 32) = v5;
              WdLogGlobalForLineNumber = 7307;
            }
            goto LABEL_20;
          }
          v7 = (struct VIDMM_RECYCLE_RANGE *)v14;
        }
        else
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = 0LL;
            WdLogGlobalForLineNumber = 7299;
          }
LABEL_20:
          v9 = 1;
        }
      }
    }
  }
}
