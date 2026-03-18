/*
 * XREFs of ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1400D3FE4
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400D3AD0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1400D4348 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400D5A20 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::SplitBlock(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        struct _VIDMM_POOL_BLOCK **a6)
{
  VIDMM_LINEAR_POOL *v9; // r15
  struct _VIDMM_POOL_BLOCK *v10; // rdi
  struct _VIDMM_POOL_BLOCK *v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbp
  struct _VIDMM_POOL_BLOCK *v15; // rax
  _QWORD *v16; // rax
  char *v17; // rcx
  char **v18; // rax
  char *v19; // rdx
  struct _VIDMM_POOL_BLOCK *v20; // rdi
  char *v21; // rax
  struct _VIDMM_POOL_BLOCK **v22; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rdx
  struct _VIDMM_POOL_BLOCK *Block; // rax
  __int64 v27; // rcx
  int v28; // eax
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r8
  char **v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // r8

  v9 = this;
  v10 = 0LL;
  v11 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v12[3] = a2;
    v12[4] = *(_QWORD *)a2;
    v12[5] = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    v12[6] = a3;
    v12[7] = a4;
    WdLogGlobalForLineNumber = 1560;
  }
  v13 = a3 - *(_QWORD *)a2;
  if ( a3 != *(_QWORD *)a2 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      WdLogGlobalForLineNumber = 1570;
    }
    Block = VIDMM_LINEAR_POOL::AllocateBlock(v9);
    v10 = Block;
    if ( !Block )
    {
      _InterlockedIncrement(&dword_140081758);
      WdLogSingleEntry0(6LL);
      v28 = 1592;
LABEL_22:
      WdLogGlobalForLineNumber = v28;
      DxgkLogInternalTriageEvent(v27, 262145LL);
      return 3221225495LL;
    }
    memset(Block, 0, 0x40uLL);
    *((_BYTE *)v10 + 56) = 2;
    *(_QWORD *)v10 = *(_QWORD *)a2;
    this = *(VIDMM_LINEAR_POOL **)&g_IsInternalReleaseOrDbg;
    *((_QWORD *)v10 + 1) = v13;
    if ( g_IsInternalReleaseOrDbg )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v30[3] = v10;
      v30[4] = *(_QWORD *)v10;
      this = (VIDMM_LINEAR_POOL *)(*((_QWORD *)v10 + 1) + *(_QWORD *)v10);
      v30[5] = this;
      WdLogGlobalForLineNumber = 1587;
    }
  }
  v14 = *((_QWORD *)a2 + 1) + *(_QWORD *)a2 - a4;
  if ( !v14 )
    goto LABEL_10;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    WdLogGlobalForLineNumber = 1605;
  }
  v15 = VIDMM_LINEAR_POOL::AllocateBlock(v9);
  v11 = v15;
  if ( !v15 )
  {
    if ( v10 )
      VIDMM_LINEAR_POOL::FreeBlock(v9, v10);
    _InterlockedIncrement(&dword_140081758);
    WdLogSingleEntry0(6LL);
    v28 = 1632;
    goto LABEL_22;
  }
  memset(v15, 0, 0x40uLL);
  *((_BYTE *)v11 + 56) = 2;
  *(_QWORD *)v11 = a4;
  *((_QWORD *)v11 + 1) = v14;
  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
    v16[3] = v11;
    v16[4] = *(_QWORD *)v11;
    v16[5] = *((_QWORD *)v11 + 1) + *(_QWORD *)v11;
    WdLogGlobalForLineNumber = 1622;
  }
LABEL_10:
  v17 = (char *)a2 + 24;
  if ( v10 )
  {
    v18 = (char **)*((_QWORD *)a2 + 4);
    v19 = (char *)v10 + 24;
    if ( *v18 != v17 )
      goto LABEL_17;
    *((_QWORD *)v10 + 4) = v18;
    v20 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 40);
    *(_QWORD *)v19 = v17;
    *v18 = v19;
    v21 = (char *)a2 + 40;
    *((_QWORD *)a2 + 4) = v19;
    v22 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *v22 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_17;
    *(_QWORD *)v20 = v21;
    *((_QWORD *)v20 + 1) = v22;
    *v22 = v20;
    *((_QWORD *)a2 + 6) = v20;
    *((_QWORD *)a2 + 1) -= v13;
    *(_QWORD *)a2 = a3;
  }
  else
  {
    v21 = (char *)a2 + 40;
  }
  v23 = (_QWORD *)((char *)a2 + 24);
  if ( v11 )
  {
    v24 = *(_QWORD *)v17;
    v25 = (_QWORD *)((char *)v11 + 24);
    if ( *(char **)(*(_QWORD *)v17 + 8LL) == v17 )
    {
      *v25 = v24;
      v31 = (_QWORD *)((char *)v11 + 40);
      v25[1] = v17;
      *(_QWORD *)(v24 + 8) = v25;
      *(_QWORD *)v17 = v25;
      v32 = *(_QWORD *)v21;
      if ( *(char **)(*(_QWORD *)v21 + 8LL) == v21 )
      {
        *v31 = v32;
        v31[1] = v21;
        *(_QWORD *)(v32 + 8) = v31;
        v23 = (_QWORD *)((char *)a2 + 24);
        *(_QWORD *)v21 = v31;
        *((_QWORD *)a2 + 1) -= v14;
        goto LABEL_27;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
LABEL_27:
  *((_QWORD *)a2 + 2) = a5;
  *((_BYTE *)a2 + 56) = 3;
  v33 = *(_QWORD *)v17;
  if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 )
    goto LABEL_17;
  v34 = (char **)*((_QWORD *)a2 + 4);
  if ( *v34 != v17 )
    goto LABEL_17;
  *v34 = (char *)v33;
  *(_QWORD *)(v33 + 8) = v34;
  v35 = (_QWORD *)((char *)v9 + 64);
  v36 = *((_QWORD *)v9 + 8);
  if ( *(VIDMM_LINEAR_POOL **)(v36 + 8) != (VIDMM_LINEAR_POOL *)((char *)v9 + 64) )
    goto LABEL_17;
  *((_QWORD *)a2 + 4) = v35;
  *v23 = v36;
  *(_QWORD *)(v36 + 8) = v23;
  *v35 = v23;
  *a6 = a2;
  return 0LL;
}
