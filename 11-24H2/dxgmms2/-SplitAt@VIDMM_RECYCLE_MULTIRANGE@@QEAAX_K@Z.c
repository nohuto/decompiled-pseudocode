/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1400C9528
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400CC078 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400CAB00 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CAC30 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400CACF0 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  VIDMM_RECYCLE_RANGE *v3; // rbx
  unsigned __int64 v4; // r15
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rdx
  VIDMM_RECYCLE_RANGE *v8; // r12
  __int64 v9; // r13
  struct _LOOKASIDE_LIST_EX *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rax
  ULONGLONG v15; // rcx
  CCHAR LeastSignificantBit; // al
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rcx
  int v20; // edx
  int v21; // edx
  __int64 v22; // r14
  __int64 v23; // r8
  __int64 v24; // rcx
  struct _RTL_BALANCED_NODE *v25; // rbx
  __int64 v26; // rax
  struct _RTL_BALANCED_NODE *v27; // rax
  __int64 v28; // r14
  __int64 v29; // r8
  __int64 v30; // rcx
  struct _RTL_BALANCED_NODE *v31; // rbx
  __int64 v32; // rax
  struct _RTL_BALANCED_NODE *v33; // rax
  __int64 v34; // r14
  __int64 v35; // r8
  __int64 v36; // rcx
  struct _RTL_BALANCED_NODE *v37; // rbx
  __int64 v38; // rax
  struct _RTL_BALANCED_NODE *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rcx
  __int64 v48; // [rsp+20h] [rbp-28h] BYREF
  __int64 v49; // [rsp+28h] [rbp-20h]
  char v50; // [rsp+30h] [rbp-18h]
  bool v51; // [rsp+90h] [rbp+48h] BYREF
  int v52; // [rsp+98h] [rbp+50h]
  __int64 v53; // [rsp+A0h] [rbp+58h]
  __int64 v54; // [rsp+A8h] [rbp+60h]

  v3 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v4 = a2 + *((_QWORD *)this + 4);
  v5 = 0;
  while ( v3 && (*((_QWORD *)v3 + 4) > v4 || *((_QWORD *)v3 + 5) <= v4) )
  {
    v42 = *((_QWORD *)v3 + 15);
    v43 = *((_QWORD *)v3 + 9);
    v3 = 0LL;
    if ( v42 != v43 + 72 )
      v3 = (VIDMM_RECYCLE_RANGE *)(v42 - 120);
  }
  v6 = *((_QWORD *)v3 + 4);
  if ( v6 == v4 )
  {
    v40 = *((_QWORD *)v3 + 16);
    v8 = v3;
    v41 = *((_QWORD *)v3 + 9);
    v3 = 0LL;
    if ( v40 != v41 + 72 )
      v3 = (VIDMM_RECYCLE_RANGE *)(v40 - 120);
  }
  else
  {
    v51 = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(v3, v4 - v6, &v51);
    if ( !v51 )
    {
      WdLogSingleEntry2(3LL, this, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL));
      WdLogGlobalForLineNumber = 4775;
      return;
    }
    if ( v3 == *((VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)v3 + 5) != *((_QWORD *)this + 5) )
    {
      v46 = *((_QWORD *)v3 + 15);
      v47 = 0LL;
      if ( v46 != *((_QWORD *)v3 + 9) + 72LL )
        v47 = v46 - 120;
      *((_QWORD *)this + 9) = v47;
    }
    v7 = *((_QWORD *)v3 + 15);
    v8 = 0LL;
    if ( v7 != *((_QWORD *)v3 + 9) + 72LL )
      v8 = (VIDMM_RECYCLE_RANGE *)(v7 - 120);
  }
  v53 = *((_QWORD *)this + 10);
  v9 = *(_QWORD *)(*(_QWORD *)(v53 + 32) + 8LL);
  v54 = *((_QWORD *)this + 5);
  v10 = *(struct _LOOKASIDE_LIST_EX **)(v9 + 1320);
  v52 = *((_DWORD *)this + 50);
  v11 = *(_DWORD *)(v9 + 1620);
  if ( v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    v13 = *(_QWORD **)(v9 + 8 * v12 + 1656);
    *(_QWORD *)(v9 + 8 * v12 + 1656) = 0LL;
    --*(_DWORD *)(v9 + 1620);
  }
  else
  {
    v13 = ExAllocateFromLookasideListEx(v10);
  }
  if ( v13 )
  {
    ++*(_DWORD *)(v9 + 1688);
    WdLogSingleEntry1(4LL, v13);
    v14 = v53;
    v13[5] = v54;
    *((_DWORD *)v13 + 50) = v52;
    v13[4] = v4;
    *((_DWORD *)v13 + 6) = 1;
    v13[8] = 0LL;
    v13[9] = 0LL;
    v13[10] = v14;
    v13[6] = v4;
    *((_WORD *)v13 + 64) = 0;
    ++*(_QWORD *)(v14 + 8);
    v15 = v13[4];
    WdLogGlobalForLineNumber = 2278;
    LeastSignificantBit = RtlFindLeastSignificantBit(v15);
    if ( LeastSignificantBit < 0 )
      v17 = 0LL;
    else
      v17 = 1LL << LeastSignificantBit;
    v13[7] = v17;
    v13[11] = 3LL;
    v13[12] = 0LL;
    v13[13] = 0LL;
    v13[14] = 0LL;
    v13[15] = 0LL;
    *((_BYTE *)v13 + 130) = 0;
    v13[17] = 0LL;
    v13[18] = 0LL;
    v13[22] = 0LL;
    *((_WORD *)v13 + 76) = 0;
    v13[20] = 0LL;
    v13[21] = 0LL;
    v13[23] = 0LL;
    v13[24] = 0LL;
    v18 = v13[10];
    *((_BYTE *)v13 + 204) = 0;
    v19 = *(_QWORD *)(v18 + 136);
    if ( v19 )
    {
      v44 = *(_QWORD *)(v19 + 24) + 144LL * *(_QWORD *)(v19 + 32);
      *(_DWORD *)v44 = 0;
      *(_QWORD *)(v44 + 8) = v13;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v44 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v18 + 136) + 32LL);
      v45 = *(_QWORD *)(v18 + 136);
      if ( *(_QWORD *)(v45 + 32) == *(_QWORD *)(v45 + 48) )
      {
        *(_QWORD *)(v45 + 32) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v18 + 136) + 40LL) = 1;
      }
    }
    v13[8] = v8;
    v13[9] = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v3;
    *((_QWORD *)this + 5) = v4;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v13);
    v20 = *((_DWORD *)this + 50);
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
          return;
        v22 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
        WdLogSingleEntry2(4LL, v13, 0LL);
        LOBYTE(v23) = 0;
        v24 = v13[5] - v13[4];
        v25 = *(struct _RTL_BALANCED_NODE **)(v22 + 48);
        v26 = v13[7];
        WdLogGlobalForLineNumber = 8517;
        v48 = v24;
        v49 = v26;
        v50 = 0;
        if ( !v25 )
          goto LABEL_37;
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v48, v25) < 0 )
          {
            v27 = v25->Children[0];
            if ( !v25->Children[0] )
            {
              LOBYTE(v23) = 0;
              goto LABEL_37;
            }
          }
          else
          {
            v27 = v25->Children[1];
            if ( !v27 )
            {
              LOBYTE(v23) = 1;
LABEL_37:
              RtlAvlInsertNodeEx(v22 + 48, v25, v23, v13);
              *((_DWORD *)v13 + 22) = 0;
              return;
            }
          }
          v25 = v27;
        }
      }
      v34 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
      WdLogSingleEntry2(4LL, v13, 1LL);
      v36 = v13[5] - v13[4];
      v37 = *(struct _RTL_BALANCED_NODE **)(v34 + 56);
      v38 = v13[7];
      WdLogGlobalForLineNumber = 8517;
      v48 = v36;
      v49 = v38;
      v50 = 0;
      if ( v37 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(&v48, v37) < 0 )
          {
            v39 = v37->Children[0];
            if ( !v37->Children[0] )
              break;
          }
          else
          {
            v39 = v37->Children[1];
            if ( !v39 )
            {
              v5 = 1;
              break;
            }
          }
          v37 = v39;
        }
      }
      LOBYTE(v35) = v5;
      RtlAvlInsertNodeEx(v34 + 56, v37, v35, v13);
      *((_DWORD *)v13 + 22) = 1;
      return;
    }
    v28 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    WdLogSingleEntry2(4LL, v13, 2LL);
    v30 = v13[5] - v13[4];
    v31 = *(struct _RTL_BALANCED_NODE **)(v28 + 64);
    v32 = v13[7];
    WdLogGlobalForLineNumber = 8517;
    v48 = v30;
    v49 = v32;
    v50 = 0;
    if ( v31 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(&v48, v31) < 0 )
        {
          v33 = v31->Children[0];
          if ( !v31->Children[0] )
            break;
        }
        else
        {
          v33 = v31->Children[1];
          if ( !v33 )
          {
            v5 = 1;
            break;
          }
        }
        v31 = v33;
      }
    }
    LOBYTE(v29) = v5;
    RtlAvlInsertNodeEx(v28 + 64, v31, v29, v13);
    *((_DWORD *)v13 + 22) = 2;
  }
}
