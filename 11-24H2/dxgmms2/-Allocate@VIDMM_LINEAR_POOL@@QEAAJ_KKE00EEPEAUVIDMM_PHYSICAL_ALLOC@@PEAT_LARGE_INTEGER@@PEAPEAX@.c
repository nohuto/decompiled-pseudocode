/*
 * XREFs of ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400CF710
 * Callers:
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z @ 0x140090F20 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z.c)
 *     ?AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z @ 0x140092B6C (-AllocatePhysical@VIDMM_GLOBAL@@CAPEAX_KKPEAPEAX@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x14009DAC8 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z.c)
 *     ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x14009FAD8 (-AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@P.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAEE@Z @ 0x1400A278C (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_.c)
 *     ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A4F90 (-ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1400A56A0 (-AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400CDA94 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400CE7B0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x1400CF1C8 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1400CFC24 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z.c)
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1400D0120 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLO.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400D1660 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::Allocate(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        struct VIDMM_PHYSICAL_ALLOC *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  int BlockRun; // eax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r14
  __int64 v16; // r12
  _QWORD *v17; // r14
  char *v18; // rcx
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  struct _VIDMM_POOL_BLOCK *v21; // rdx
  __int64 v23; // rsi
  _QWORD *v24; // r15
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  _QWORD *v39; // r14
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int8 v47; // [rsp+38h] [rbp-59h]
  struct _VIDMM_POOL_BLOCK *v48; // [rsp+88h] [rbp-9h] BYREF

  v48 = 0LL;
  if ( !a8 )
  {
    v47 = 0;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this);
    v13 = 0LL;
    v14 = BlockRun;
    if ( BlockRun >= 0 )
      goto LABEL_3;
    if ( a7 || !*((_DWORD *)this + 4) )
      return (unsigned int)v14;
  }
  if ( !*((_QWORD *)this + 5) || (v47 = 1, (int)VIDMM_LINEAR_POOL::FindBlockRun(this) < 0) )
  {
    v47 = 2;
    v14 = VIDMM_LINEAR_POOL::FindBlockRun(this);
    if ( v14 < 0 )
      return (unsigned int)v14;
  }
LABEL_3:
  v15 = 24LL;
  v16 = MEMORY[0x18];
  while ( v15 != v16 )
  {
    v23 = v15 - 24;
    v24 = (_QWORD *)v15;
    v25 = *(_BYTE *)(v15 - 24 + 56) == 4;
    v15 = *(_QWORD *)v15;
    if ( v25 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v23;
        WdLogGlobalForLineNumber = 542;
      }
      (*((void (__fastcall **)(_QWORD, _QWORD))this + 4))(*((_QWORD *)this + 3), *(_QWORD *)(v23 + 16));
      *(_BYTE *)(v23 + 56) = 2;
      *(_QWORD *)(v23 + 16) = 0LL;
      if ( !*((_DWORD *)this + 4) )
      {
        WdLogSingleEntry0(1LL);
        v47 = 0;
        WdLogGlobalForLineNumber = 545;
        DxgkLogInternalTriageEvent(v45, 0x40000LL);
      }
      --*((_DWORD *)this + 4);
    }
    if ( v23 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v26 = WdLogNewEntry5_WdTrace(v13);
        *(_QWORD *)(v26 + 24) = v23;
        *(_QWORD *)(v26 + 32) = 0LL;
        WdLogGlobalForLineNumber = 556;
      }
      MEMORY[8] += *(_QWORD *)(v23 + 8);
      v27 = *v24;
      if ( *(_QWORD **)(*v24 + 8LL) != v24 )
        goto LABEL_50;
      v28 = (_QWORD *)v24[1];
      if ( (_QWORD *)*v28 != v24 )
        goto LABEL_50;
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      v29 = (_QWORD *)(v23 + 40);
      *v24 = 0LL;
      v24[1] = 0LL;
      v30 = *(_QWORD *)(v23 + 40);
      if ( *(_QWORD *)(v30 + 8) != v23 + 40 )
        goto LABEL_50;
      v31 = *(_QWORD **)(v23 + 48);
      if ( (_QWORD *)*v31 != v29 )
        goto LABEL_50;
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      *v29 = 0LL;
      *(_QWORD *)(v23 + 48) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v23);
    }
  }
  v17 = (_QWORD *)MEMORY[0x20];
  v18 = (char *)this + 48;
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x20] != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
  {
    v32 = (_QWORD *)(MEMORY[0x20] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x20] - 24LL + 56) == 2 && v32[1] + *v32 == MEMORY[0] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v33 = WdLogNewEntry5_WdTrace(v18);
        *(_QWORD *)(v33 + 24) = 0LL;
        *(_QWORD *)(v33 + 32) = v32;
        WdLogGlobalForLineNumber = 580;
      }
      MEMORY[0] = *v32;
      MEMORY[8] += v32[1];
      v34 = *v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
        goto LABEL_50;
      v35 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v35 != v17 )
        goto LABEL_50;
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      v36 = v32 + 5;
      *v17 = 0LL;
      v17[1] = 0LL;
      v37 = v32[5];
      if ( *(_QWORD **)(v37 + 8) != v32 + 5 )
        goto LABEL_50;
      v38 = (_QWORD *)v32[6];
      if ( (_QWORD *)*v38 != v36 )
        goto LABEL_50;
      *v38 = v37;
      *(_QWORD *)(v37 + 8) = v38;
      *v36 = 0LL;
      v32[6] = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v17 - 3));
      v18 = (char *)this + 48;
    }
  }
  v19 = (_QWORD *)MEMORY[0x18];
  if ( (char *)MEMORY[0x18] != v18 )
  {
    v39 = (_QWORD *)(MEMORY[0x18] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x18] - 24LL + 56) == 2 && *v39 == MEMORY[0] + MEMORY[8] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v46 = WdLogNewEntry5_WdTrace(v18);
        *(_QWORD *)(v46 + 24) = 0LL;
        *(_QWORD *)(v46 + 32) = v39;
        WdLogGlobalForLineNumber = 605;
      }
      MEMORY[8] += v39[1];
      v40 = *v19;
      if ( *(_QWORD **)(*v19 + 8LL) == v19 )
      {
        v41 = (_QWORD *)v19[1];
        if ( (_QWORD *)*v41 == v19 )
        {
          *v41 = v40;
          *(_QWORD *)(v40 + 8) = v41;
          v42 = v39 + 5;
          *v19 = 0LL;
          v19[1] = 0LL;
          v43 = v39[5];
          if ( *(_QWORD **)(v43 + 8) == v39 + 5 )
          {
            v44 = (_QWORD *)v39[6];
            if ( (_QWORD *)*v44 == v42 )
            {
              *v44 = v43;
              *(_QWORD *)(v43 + 8) = v44;
              *v42 = 0LL;
              v39[6] = 0LL;
              VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v19 - 3));
              goto LABEL_7;
            }
          }
        }
      }
LABEL_50:
      __fastfail(3u);
    }
  }
LABEL_7:
  v14 = VIDMM_LINEAR_POOL::SplitBlock(this, 0LL, 0LL, 0LL, a9, &v48, v47);
  if ( v14 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v20);
      WdLogGlobalForLineNumber = 634;
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v20);
      WdLogGlobalForLineNumber = 621;
    }
    v21 = v48;
    *a10 = *(union _LARGE_INTEGER *)v48;
    *a11 = v21;
  }
  return (unsigned int)v14;
}
