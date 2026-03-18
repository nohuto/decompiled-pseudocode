/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DED20
 * Callers:
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400DECB0 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(VIDMM_SEGMENT *this, unsigned __int64 **a2)
{
  unsigned __int64 *v3; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 *v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int16 v13; // cx
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 *v21; // rcx
  char *v22; // rax
  unsigned __int64 *v23; // rdx
  unsigned __int64 *v24; // rcx
  char *v25; // rdi
  char **v26; // rcx
  __int64 v27; // rcx

  v3 = *a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 2317;
  }
  if ( (*((_DWORD *)this + 26) & 0x1000) == 0 )
  {
    v5 = *((_QWORD *)this + 26);
    v6 = v3[10];
    if ( !*(_DWORD *)(v5 + 16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2329;
      DxgkLogInternalTriageEvent(v27, 0x40000LL);
    }
    --*(_DWORD *)(v5 + 16);
    v7 = (_QWORD *)(v6 + 24);
    v8 = *(_QWORD *)(v6 + 24);
    if ( *(_QWORD *)(v8 + 8) != v6 + 24
      || (v9 = *(_QWORD **)(v6 + 32), (_QWORD *)*v9 != v7)
      || (*v9 = v8, v10 = (__int64 *)(v5 + 64), *(_QWORD *)(v8 + 8) = v9, v11 = *v10, *(__int64 **)(*v10 + 8) != v10) )
    {
LABEL_20:
      __fastfail(3u);
    }
    *v7 = v11;
    *(_QWORD *)(v6 + 32) = v10;
    *(_QWORD *)(v11 + 8) = v7;
    *v10 = (__int64)v7;
    *(_BYTE *)(v6 + 56) = 3;
  }
  *((_DWORD *)a2 + 18) = 2;
  v12 = v3[8];
  if ( (*(_DWORD *)(v12 + 104) & 0x1000) != 0 )
    v13 = 0;
  else
    v13 = *(_WORD *)(v12 + 40) + 1;
  *((_WORD *)a2[49] + 5) = v13;
  a2[49][5] = v3[9] + *(_QWORD *)(v3[8] + 48);
  v14 = *((_QWORD *)this + 3);
  v15 = v3[2];
  v16 = *((unsigned __int16 *)this + 210);
  v17 = *a2[44];
  *((_QWORD *)this + 32) += v15;
  v18 = *((int *)this + 129);
  v19 = *(_QWORD *)(*(_QWORD *)(v14 + 40232) + 8 * v16);
  if ( (*(_BYTE *)(v19 + 24 * v18 + 552) & 1) != 0 )
    v20 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v14 + 24) + 240LL) + *(_QWORD *)(v17 + 40) + 24) + 344 * v16;
  else
    v20 = v19 + 344 * v18 + 584;
  *(_QWORD *)(v20 + 120) += v15;
  ++*((_DWORD *)this + 90);
  if ( (*((_DWORD *)this + 26) & 0x1001) != 0 )
  {
    v21 = a2[45];
    if ( !v21 || _InterlockedIncrement((volatile signed __int32 *)v21 + 11) == 1 )
      _InterlockedAdd64((volatile signed __int64 *)(*a2[44] + 56), v3[2]);
  }
  v22 = (char *)(a2 + 33);
  v23 = a2[33];
  if ( (unsigned __int64 **)v23[1] != a2 + 33 )
    goto LABEL_20;
  v24 = a2[34];
  if ( (char *)*v24 != v22 )
    goto LABEL_20;
  *v24 = (unsigned __int64)v23;
  v25 = (char *)this + 8;
  v23[1] = (unsigned __int64)v24;
  v26 = (char **)*((_QWORD *)v25 + 1);
  if ( *v26 != v25 )
    goto LABEL_20;
  *(_QWORD *)v22 = v25;
  a2[34] = (unsigned __int64 *)v26;
  *v26 = v22;
  *((_QWORD *)v25 + 1) = v22;
}
