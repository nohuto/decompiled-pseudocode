/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400D09A0
 * Callers:
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x14008FAD8 (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x14009149C (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x140091AB8 (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009E910 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009EA60 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEE@Z @ 0x1400A278C (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z @ 0x1400A2FE8 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_ALLOC@@@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_TEMPORARY_RESOURCE@@@Z @ 0x1400A4F70 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_TEMPORARY_RESOURCE@@@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1400A5AE0 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x140105E30 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1400D1590 (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400D1660 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2)
{
  struct _VIDMM_POOL_BLOCK *v4; // r14
  struct _VIDMM_POOL_BLOCK *v5; // rdi
  VIDMM_LINEAR_POOL *v6; // rax
  char *v7; // r15
  char *v8; // rbx
  __int64 v9; // rax
  char **v10; // rcx
  __int64 v11; // rdx
  struct _VIDMM_POOL_BLOCK **v12; // rdx
  struct _VIDMM_POOL_BLOCK **v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  char *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  struct _VIDMM_POOL_BLOCK **v20; // rdx
  struct _VIDMM_POOL_BLOCK **v21; // rcx
  char *v22; // rbp
  _QWORD *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  char **v27; // rcx
  struct _VIDMM_POOL_BLOCK *v28; // rdx
  struct _VIDMM_POOL_BLOCK **v29; // rcx
  struct _VIDMM_POOL_BLOCK *v30; // rdx
  struct _VIDMM_POOL_BLOCK **v31; // rcx
  char **v32; // rax
  char *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  struct _VIDMM_POOL_BLOCK *v36; // [rsp+88h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v37; // [rsp+90h] [rbp+18h] BYREF

  v36 = 0LL;
  v37 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 1730;
  }
  if ( *((_BYTE *)a2 + 56) == 4 )
  {
    v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 4);
    v7 = (char *)this + 48;
    if ( v6 != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
    {
      v4 = (VIDMM_LINEAR_POOL *)((char *)v6 - 24);
      v36 = (VIDMM_LINEAR_POOL *)((char *)v6 - 24);
    }
    v8 = (char *)a2 + 24;
    v9 = *((_QWORD *)a2 + 3);
    if ( (char *)v9 != v7 )
    {
      v5 = (struct _VIDMM_POOL_BLOCK *)(v9 - 24);
      v37 = (struct _VIDMM_POOL_BLOCK *)(v9 - 24);
    }
    if ( *(char **)(v9 + 8) != v8 )
      goto LABEL_20;
    v10 = (char **)*((_QWORD *)a2 + 4);
    if ( *v10 != v8 )
      goto LABEL_20;
    *v10 = (char *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1757;
      DxgkLogInternalTriageEvent(v34, 0x40000LL);
    }
    --*((_DWORD *)this + 4);
  }
  else
  {
    v8 = (char *)a2 + 24;
    v26 = *((_QWORD *)a2 + 3);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v26 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      goto LABEL_20;
    v27 = (char **)*((_QWORD *)a2 + 4);
    if ( *v27 != v8 )
      goto LABEL_20;
    *v27 = (char *)v26;
    *(_QWORD *)(v26 + 8) = v27;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v36, &v37);
    v4 = v36;
    v7 = (char *)this + 48;
    v5 = v37;
  }
  if ( v4 && (v11 = *((_QWORD *)v4 + 1), v11 + *(_QWORD *)v4 == *(_QWORD *)a2) && *((_BYTE *)v4 + 56) == 2 )
  {
    *((_QWORD *)v4 + 1) = v11 + *((_QWORD *)a2 + 1);
    v12 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 5);
    if ( v12[1] != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_20;
    v13 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *v13 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_20;
    *v13 = (struct _VIDMM_POOL_BLOCK *)v12;
    v12[1] = (struct _VIDMM_POOL_BLOCK *)v13;
    if ( *(_BYTE *)this )
    {
      *((_BYTE *)a2 + 56) = 1;
      v14 = (_QWORD *)((char *)this + 96);
      v15 = *((_QWORD *)this + 12);
      v16 = (_QWORD *)((char *)a2 + 24);
      if ( *(VIDMM_LINEAR_POOL **)(v15 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 96) )
        goto LABEL_20;
      *v16 = v15;
      v16[1] = v14;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = v16;
    }
    else
    {
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), a2);
    }
    if ( v5 )
    {
      v25 = *((_QWORD *)v4 + 1);
      if ( *(_QWORD *)v5 == v25 + *(_QWORD *)v4 && *((_BYTE *)v5 + 56) == 2 )
      {
        *((_QWORD *)v4 + 1) = v25 + *((_QWORD *)v5 + 1);
        v28 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v5 + 3);
        if ( *((struct _VIDMM_POOL_BLOCK **)v28 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 24) )
        {
          v29 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v5 + 4);
          if ( *v29 == (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 24) )
          {
            *v29 = v28;
            *((_QWORD *)v28 + 1) = v29;
            v30 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v5 + 5);
            if ( *((struct _VIDMM_POOL_BLOCK **)v30 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 40) )
            {
              v31 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v5 + 6);
              if ( *v31 == (struct _VIDMM_POOL_BLOCK *)((char *)v5 + 40) )
              {
                *v31 = v30;
                *((_QWORD *)v30 + 1) = v31;
                VIDMM_LINEAR_POOL::FreeBlock(this, v5);
                return;
              }
            }
          }
        }
LABEL_20:
        __fastfail(3u);
      }
    }
  }
  else if ( v5 && (v19 = *((_QWORD *)a2 + 1), *(_QWORD *)v5 == v19 + *(_QWORD *)a2) && *((_BYTE *)v5 + 56) == 2 )
  {
    *((_QWORD *)v5 + 1) += v19;
    *(_QWORD *)v5 = *(_QWORD *)a2;
    v20 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 5);
    if ( v20[1] != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_20;
    v21 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
    if ( *v21 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      goto LABEL_20;
    *v21 = (struct _VIDMM_POOL_BLOCK *)v20;
    v20[1] = (struct _VIDMM_POOL_BLOCK *)v21;
    if ( *(_BYTE *)this )
    {
      *((_BYTE *)a2 + 56) = 1;
      v22 = (char *)this + 96;
      v23 = (_QWORD *)((char *)a2 + 24);
      v24 = *(_QWORD *)v22;
      if ( *(char **)(*(_QWORD *)v22 + 8LL) == v22 )
      {
        *v23 = v24;
        v23[1] = v22;
        *(_QWORD *)(v24 + 8) = v23;
        *(_QWORD *)v22 = v23;
        return;
      }
      goto LABEL_20;
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192), a2);
  }
  else
  {
    *((_BYTE *)a2 + 56) = 2;
    *((_QWORD *)a2 + 2) = 0LL;
    if ( v4 )
    {
      v17 = (char *)v4 + 24;
      v18 = *(_QWORD *)v17;
      if ( *(char **)(*(_QWORD *)v17 + 8LL) == v17 )
      {
        *(_QWORD *)v8 = v18;
        *((_QWORD *)v8 + 1) = v17;
        *(_QWORD *)(v18 + 8) = v8;
        *(_QWORD *)v17 = v8;
        return;
      }
      goto LABEL_20;
    }
    if ( v5 )
    {
      v32 = (char **)*((_QWORD *)v5 + 4);
      v33 = (char *)v5 + 24;
      if ( *v32 != v33 )
        goto LABEL_20;
      *(_QWORD *)v8 = v33;
      *((_QWORD *)v8 + 1) = v32;
      *v32 = v8;
      *((_QWORD *)v33 + 1) = v8;
    }
    else
    {
      v35 = *(_QWORD *)v7;
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
        goto LABEL_20;
      *(_QWORD *)v8 = v35;
      *((_QWORD *)v8 + 1) = v7;
      *(_QWORD *)(v35 + 8) = v8;
      *(_QWORD *)v7 = v8;
    }
  }
}
