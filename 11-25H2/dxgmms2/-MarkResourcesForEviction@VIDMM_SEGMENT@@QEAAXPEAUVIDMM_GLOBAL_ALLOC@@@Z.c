/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D20EC
 * Callers:
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400BAA94 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400D1E54 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E182C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400E2D80 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(VIDMM_SEGMENT ***this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r14
  VIDMM_SEGMENT **v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 *v10; // r11
  __int64 *v11; // rcx
  __int64 *v12; // rdx
  __int64 *v13; // r10
  char v14; // al
  __int64 *v15; // r9
  char v16; // al
  VIDMM_SEGMENT **v17; // rdx
  __int64 *v18; // r9
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // rcx
  VIDMM_SEGMENT **v24; // r9
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  VIDMM_SEGMENT *v31; // rax
  struct VIDMM_GLOBAL_ALLOC **v32; // rdx
  VIDMM_SEGMENT **v33; // rcx
  VIDMM_SEGMENT **v34; // rdx
  __int64 *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx

  v2 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 2404;
  }
  v5 = this[26];
  if ( v5 )
  {
    v6 = *(_QWORD *)(v2 + 80);
    *(_BYTE *)(v6 + 56) = 4;
    if ( *((_DWORD *)v5 + 4) >= (unsigned int)(*((_DWORD *)v5 + 4) + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2194;
      DxgkLogInternalTriageEvent(v37, 0x40000LL);
    }
    ++*((_DWORD *)v5 + 4);
    v7 = (_QWORD *)(v6 + 24);
    v8 = *(_QWORD *)(v6 + 24);
    if ( *(_QWORD *)(v8 + 8) != v6 + 24 || (v9 = *(_QWORD **)(v6 + 32), (_QWORD *)*v9 != v7) )
LABEL_35:
      __fastfail(3u);
    *v9 = v8;
    v10 = (__int64 *)(v5 + 10);
    *(_QWORD *)(v8 + 8) = v9;
    *v7 = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    v11 = *(__int64 **)(v6 + 40);
    v12 = *(__int64 **)(v6 + 48);
    while ( 1 )
    {
      v13 = v11;
      if ( v11 == v10 )
        break;
      if ( v12 == v10 )
        goto LABEL_38;
      v14 = *((_BYTE *)v11 + 16);
      v15 = v12 - 5;
      v11 = (__int64 *)*v11;
      v12 = (__int64 *)v12[1];
      if ( v14 != 3 && (unsigned __int8)(v14 - 5) > 2u )
      {
        v17 = *(v13 - 1);
        goto LABEL_17;
      }
      v16 = *((_BYTE *)v15 + 56);
      if ( v16 != 3 && (unsigned __int8)(v16 - 5) > 2u )
        goto LABEL_19;
    }
    v17 = (__int64)v5[7];
LABEL_17:
    v15 = 0LL;
    if ( (VIDMM_SEGMENT **)v17 != v5 + 6 )
      v15 = (__int64 *)(v17 - 24);
LABEL_19:
    if ( v15 )
    {
      v18 = v15 + 3;
      v19 = *v18;
      if ( *(__int64 **)(*v18 + 8) != v18 )
        goto LABEL_35;
      *v7 = v19;
      *(_QWORD *)(v6 + 32) = v18;
      *(_QWORD *)(v19 + 8) = v7;
      *v18 = (__int64)v7;
    }
    else
    {
LABEL_38:
      v35 = (__int64 *)(v5 + 6);
      v36 = *v35;
      if ( *(__int64 **)(*v35 + 8) != v35 )
        goto LABEL_35;
      *v7 = v36;
      *(_QWORD *)(v6 + 32) = v35;
      *(_QWORD *)(v36 + 8) = v7;
      *v35 = (__int64)v7;
    }
  }
  v20 = (__int64 *)*((_QWORD *)a2 + 42);
  *((_DWORD *)a2 + 18) = 1;
  v21 = *(_QWORD *)(v2 + 16);
  v22 = *v20;
  if ( this[32] < (VIDMM_SEGMENT **)((char *)this[32] - v21) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 375;
    DxgkLogInternalTriageEvent(v23, 0x40000LL);
  }
  this[32] = (VIDMM_SEGMENT **)((char *)this[32] - v21);
  v24 = this[3];
  v25 = *((unsigned __int16 *)this + 210);
  v26 = *((int *)this + 129);
  v27 = *((_QWORD *)v24[5029] + v25);
  if ( (*(_BYTE *)(v27 + 24 * v26 + 552) & 1) != 0 )
    v28 = *(_QWORD *)(384LL * *((unsigned int *)v24[3] + 60) + *(_QWORD *)(v22 + 40) + 24) + 344 * v25;
  else
    v28 = v27 + 344 * v26 + 584;
  if ( *(_QWORD *)(v28 + 120) < (unsigned __int64)(*(_QWORD *)(v28 + 120) - v21) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 385;
    DxgkLogInternalTriageEvent(v29, 0x40000LL);
  }
  *(_QWORD *)(v28 + 120) -= v21;
  --*((_DWORD *)this + 90);
  if ( ((_DWORD)this[13] & 0x1001) != 0 )
  {
    v30 = *((_QWORD *)a2 + 43);
    if ( (!v30 || _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 44), 0xFFFFFFFF) == 1)
      && (unsigned __int64)_InterlockedExchangeAdd64(
                             (volatile signed __int64 *)(**((_QWORD **)a2 + 42) + 56LL),
                             -*(_QWORD *)(v2 + 16)) < *(_QWORD *)(v2 + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2429;
      DxgkLogInternalTriageEvent(v38, 0x40000LL);
    }
  }
  v31 = (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 248);
  v32 = (struct VIDMM_GLOBAL_ALLOC **)*((_QWORD *)a2 + 31);
  if ( v32[1] != (struct VIDMM_GLOBAL_ALLOC *)((char *)a2 + 248) )
    goto LABEL_35;
  v33 = (VIDMM_SEGMENT **)*((_QWORD *)a2 + 32);
  if ( *v33 != v31 )
    goto LABEL_35;
  *v33 = (VIDMM_SEGMENT *)v32;
  v32[1] = (struct VIDMM_GLOBAL_ALLOC *)v33;
  v34 = this[28];
  if ( *v34 != (VIDMM_SEGMENT *)(this + 27) )
    goto LABEL_35;
  *(_QWORD *)v31 = this + 27;
  *((_QWORD *)a2 + 32) = v34;
  *v34 = v31;
  this[28] = (VIDMM_SEGMENT **)v31;
}
