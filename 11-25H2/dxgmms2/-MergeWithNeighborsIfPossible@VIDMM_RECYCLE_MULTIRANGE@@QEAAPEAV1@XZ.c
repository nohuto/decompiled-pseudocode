/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400C9E40
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C802C (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CA8A0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400CAA50 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CAA8C (-Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CAB80 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400CB188 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CB37C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400ECCC0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(int *Entry)
{
  __int64 v1; // rbx
  int *v2; // rsi
  __int64 v3; // r12
  __int64 v4; // rax
  _QWORD *v6; // r13
  unsigned int v7; // r15d
  _QWORD *v8; // rcx
  __int64 v9; // r8
  int *v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // r8
  __int64 v13; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rax
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rbx
  ULONGLONG v29; // rcx
  CCHAR LeastSignificantBit; // al
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  _QWORD *v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rax
  struct _RTL_BALANCED_NODE *v38; // rdi
  struct _RTL_BALANCED_NODE *v39; // rax
  struct _RTL_BALANCED_NODE *v40; // rax
  _QWORD *v41; // rcx
  struct _RTL_BALANCED_NODE *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rdi
  struct VIDMM_RECYCLE_RANGE *v52; // rdi
  __int64 v53; // r8
  __int64 v54; // rcx
  _QWORD v55[2]; // [rsp+30h] [rbp-58h] BYREF
  char v56; // [rsp+40h] [rbp-48h]
  __int64 v57; // [rsp+50h] [rbp-38h]
  int *v58; // [rsp+60h] [rbp-28h]
  __int64 v59; // [rsp+90h] [rbp+8h]
  __int64 v60; // [rsp+90h] [rbp+8h]
  __int64 v61; // [rsp+98h] [rbp+10h]
  __int64 v62; // [rsp+98h] [rbp+10h]
  __int64 v63; // [rsp+A0h] [rbp+18h]

  v4 = *((_QWORD *)Entry + 8);
  v6 = (_QWORD *)*((_QWORD *)Entry + 10);
  v7 = Entry[50];
  v8 = 0LL;
  v9 = *(_QWORD *)(v4 + 128);
  if ( v9 != *(_QWORD *)(v4 + 72) + 72LL )
    v8 = (_QWORD *)(v9 - 120);
  v10 = 0LL;
  if ( v8 )
  {
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v10 = (int *)v8[18];
      }
      else
      {
        if ( v7 != 2 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 195;
          goto LABEL_104;
        }
        v10 = (int *)v8[19];
      }
    }
    else
    {
      v10 = (int *)v8[17];
    }
  }
  v11 = *((_QWORD *)Entry + 9);
  v12 = 0LL;
  v58 = v2;
  v13 = *(_QWORD *)(v11 + 120);
  if ( v13 != *(_QWORD *)(v11 + 72) + 72LL )
    v12 = (_QWORD *)(v13 - 120);
  v2 = 0LL;
  if ( v12 )
  {
    switch ( v7 )
    {
      case 0u:
        v2 = (int *)v12[17];
        goto LABEL_15;
      case 1u:
        v2 = (int *)v12[18];
        goto LABEL_15;
      case 2u:
        v2 = (int *)v12[19];
        goto LABEL_15;
    }
LABEL_104:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, v2, v2);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_105;
  }
LABEL_15:
  v57 = v3;
  if ( v10 )
  {
    if ( !v2 )
    {
      v2 = Entry;
      goto LABEL_25;
    }
    v3 = Entry[22];
    v43 = v6[4];
    v60 = *((_QWORD *)v10 + 8);
    v62 = *((_QWORD *)v2 + 9);
    v1 = v3;
    WdLogSingleEntry2(4LL, v10, v3);
    WdLogGlobalForLineNumber = 8567;
    if ( (_DWORD)v3 == 2 )
    {
      v44 = v43 + 64;
    }
    else
    {
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 1 )
        {
          v44 = v43 + 56;
          goto LABEL_82;
        }
LABEL_105:
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v1, 0LL);
        WdLogGlobalForLineNumber = 195;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v1, 0LL);
        WdLogGlobalForLineNumber = 195;
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v1, 0LL);
        WdLogGlobalForLineNumber = 195;
        goto LABEL_106;
      }
      v44 = v43 + 48;
    }
LABEL_82:
    RtlAvlRemoveNode(v44, v10);
    v10[22] = 3;
    v45 = *(_QWORD *)(*((_QWORD *)Entry + 10) + 32LL);
    WdLogSingleEntry2(4LL, Entry, v3);
    WdLogGlobalForLineNumber = 8567;
    if ( (_DWORD)v3 == 2 )
    {
      v46 = v45 + 64;
    }
    else if ( (_DWORD)v3 )
    {
      v46 = v45 + 56;
    }
    else
    {
      v46 = v45 + 48;
    }
    RtlAvlRemoveNode(v46, Entry);
    v47 = *((_QWORD *)Entry + 10);
    Entry[22] = 3;
    v48 = *(_QWORD *)(v47 + 32);
    WdLogSingleEntry2(4LL, v2, v3);
    WdLogGlobalForLineNumber = 8567;
    if ( (_DWORD)v3 == 2 )
    {
      v49 = v48 + 64;
    }
    else if ( (_DWORD)v3 )
    {
      v49 = v48 + 56;
    }
    else
    {
      v49 = v48 + 48;
    }
    RtlAvlRemoveNode(v49, v2);
    v50 = *((_QWORD *)v2 + 5);
    v2[22] = 3;
    v51 = *((_QWORD *)v10 + 4);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
      *(VIDMM_RECYCLE_HEAP_MGR **)(v6[4] + 8LL),
      (struct VIDMM_RECYCLE_MULTIRANGE *)v10);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
      *(VIDMM_RECYCLE_HEAP_MGR **)(v6[4] + 8LL),
      (struct VIDMM_RECYCLE_MULTIRANGE *)Entry);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
      *(VIDMM_RECYCLE_HEAP_MGR **)(v6[4] + 8LL),
      (struct VIDMM_RECYCLE_MULTIRANGE *)v2);
    Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                               *(_QWORD *)(v6[4] + 8LL),
                                               v7,
                                               v6,
                                               v51,
                                               v50);
    *((_QWORD *)Multirange + 8) = v60;
    *((_QWORD *)Multirange + 9) = v62;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v6[4], (unsigned int)v3, Multirange);
    if ( *v6 == 1LL && !v7 )
    {
      v52 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)Multirange + 8);
      if ( !*((_DWORD *)v52 + 16) )
        goto LABEL_100;
    }
    return Multirange;
  }
  if ( !v2 )
    return (struct VIDMM_RECYCLE_MULTIRANGE *)Entry;
  v10 = Entry;
LABEL_25:
  v3 = Entry[22];
  v15 = v6[4];
  v1 = v3;
  WdLogSingleEntry2(4LL, v10, v3);
  WdLogGlobalForLineNumber = 8567;
  if ( (_DWORD)v3 == 2 )
  {
    v16 = v15 + 64;
    goto LABEL_30;
  }
  if ( !(_DWORD)v3 )
  {
    v16 = v15 + 48;
    goto LABEL_30;
  }
  if ( (_DWORD)v3 != 1 )
  {
LABEL_106:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v1, 0LL);
    WdLogGlobalForLineNumber = 195;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v1, 0LL);
    WdLogGlobalForLineNumber = 195;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v3, v10);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400CA88FLL);
  }
  v16 = v15 + 56;
LABEL_30:
  RtlAvlRemoveNode(v16, v10);
  v10[22] = 3;
  v17 = *(_QWORD *)(*((_QWORD *)Entry + 10) + 32LL);
  WdLogSingleEntry2(4LL, v2, v3);
  WdLogGlobalForLineNumber = 8567;
  if ( (_DWORD)v3 == 2 )
  {
    v18 = v17 + 64;
  }
  else if ( (_DWORD)v3 )
  {
    v18 = v17 + 56;
  }
  else
  {
    v18 = v17 + 48;
  }
  RtlAvlRemoveNode(v18, v2);
  v19 = *((_QWORD *)v2 + 5);
  v2[22] = 3;
  v20 = *((_QWORD *)v10 + 4);
  v59 = v19;
  v61 = *((_QWORD *)v10 + 8);
  v63 = *((_QWORD *)v2 + 9);
  v21 = *(_QWORD *)(v6[4] + 8LL);
  VIDMM_RECYCLE_MULTIRANGE::Destroy((VIDMM_RECYCLE_MULTIRANGE *)v10);
  v22 = *(unsigned int *)(v21 + 1620);
  if ( (unsigned int)v22 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v21 + 1320), v10);
  }
  else
  {
    *(_QWORD *)(v21 + 8 * v22 + 1656) = v10;
    ++*(_DWORD *)(v21 + 1620);
  }
  --*(_DWORD *)(v21 + 1688);
  v23 = *(_QWORD *)(v6[4] + 8LL);
  VIDMM_RECYCLE_MULTIRANGE::Destroy((VIDMM_RECYCLE_MULTIRANGE *)v2);
  v24 = *(unsigned int *)(v23 + 1620);
  if ( (unsigned int)v24 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v23 + 1320), v2);
  }
  else
  {
    *(_QWORD *)(v23 + 8 * v24 + 1656) = v2;
    ++*(_DWORD *)(v23 + 1620);
  }
  --*(_DWORD *)(v23 + 1688);
  v25 = *(_QWORD *)(v6[4] + 8LL);
  v26 = *(_DWORD *)(v25 + 1620);
  if ( v26 )
  {
    v27 = (unsigned int)(v26 - 1);
    Multirange = *(VIDMM_RECYCLE_MULTIRANGE **)(v25 + 8 * v27 + 1656);
    *(_QWORD *)(v25 + 8 * v27 + 1656) = 0LL;
    --*(_DWORD *)(v25 + 1620);
  }
  else
  {
    Multirange = (VIDMM_RECYCLE_MULTIRANGE *)ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v25 + 1320));
  }
  if ( Multirange )
  {
    ++*(_DWORD *)(v25 + 1688);
    WdLogSingleEntry1(4LL, Multirange);
    *((_QWORD *)Multirange + 4) = v20;
    *((_QWORD *)Multirange + 5) = v59;
    *((_DWORD *)Multirange + 6) = 1;
    *((_QWORD *)Multirange + 8) = 0LL;
    *((_QWORD *)Multirange + 9) = 0LL;
    *((_QWORD *)Multirange + 10) = v6;
    *((_QWORD *)Multirange + 6) = v20;
    *((_DWORD *)Multirange + 50) = v7;
    *((_WORD *)Multirange + 64) = 0;
    ++v6[1];
    v29 = *((_QWORD *)Multirange + 4);
    WdLogGlobalForLineNumber = 2278;
    LeastSignificantBit = RtlFindLeastSignificantBit(v29);
    if ( LeastSignificantBit < 0 )
      v31 = 0LL;
    else
      v31 = 1LL << LeastSignificantBit;
    *((_QWORD *)Multirange + 7) = v31;
    *((_QWORD *)Multirange + 11) = 3LL;
    *((_QWORD *)Multirange + 12) = 0LL;
    *((_QWORD *)Multirange + 13) = 0LL;
    *((_QWORD *)Multirange + 14) = 0LL;
    *((_QWORD *)Multirange + 15) = 0LL;
    *((_BYTE *)Multirange + 130) = 0;
    *((_QWORD *)Multirange + 17) = 0LL;
    *((_QWORD *)Multirange + 18) = 0LL;
    *((_QWORD *)Multirange + 22) = 0LL;
    *((_WORD *)Multirange + 76) = 0;
    *((_QWORD *)Multirange + 20) = 0LL;
    *((_QWORD *)Multirange + 21) = 0LL;
    *((_QWORD *)Multirange + 23) = 0LL;
    *((_QWORD *)Multirange + 24) = 0LL;
    v32 = *((_QWORD *)Multirange + 10);
    *((_BYTE *)Multirange + 204) = 0;
    v33 = *(_QWORD *)(v32 + 136);
    if ( v33 )
    {
      v53 = *(_QWORD *)(v33 + 24) + 144LL * *(_QWORD *)(v33 + 32);
      *(_DWORD *)v53 = 0;
      *(_QWORD *)(v53 + 8) = Multirange;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v53 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v32 + 136) + 32LL);
      v54 = *(_QWORD *)(v32 + 136);
      if ( *(_QWORD *)(v54 + 32) == *(_QWORD *)(v54 + 48) )
      {
        *(_QWORD *)(v54 + 32) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v32 + 136) + 40LL) = 1;
      }
    }
  }
  *((_QWORD *)Multirange + 8) = v61;
  *((_QWORD *)Multirange + 9) = v63;
  VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
  v34 = (_QWORD *)v6[4];
  WdLogSingleEntry2(4LL, Multirange, v3);
  v36 = *((_QWORD *)Multirange + 5) - *((_QWORD *)Multirange + 4);
  v37 = *((_QWORD *)Multirange + 7);
  WdLogGlobalForLineNumber = 8517;
  v55[0] = v36;
  v55[1] = v37;
  v56 = 0;
  if ( (_DWORD)v3 != 2 )
  {
    if ( (_DWORD)v3 )
    {
      v38 = (struct _RTL_BALANCED_NODE *)v34[7];
      LOBYTE(v35) = 0;
      if ( v38 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v55, v38) < 0 )
          {
            v40 = v38->Children[0];
            if ( !v38->Children[0] )
            {
              LOBYTE(v35) = 0;
              break;
            }
          }
          else
          {
            v40 = v38->Children[1];
            if ( !v40 )
            {
              LOBYTE(v35) = 1;
              break;
            }
          }
          v38 = v40;
        }
      }
      v41 = v34 + 7;
      goto LABEL_60;
    }
    v38 = (struct _RTL_BALANCED_NODE *)v34[6];
    LOBYTE(v35) = 0;
    if ( v38 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v55, v38) < 0 )
        {
          v42 = v38->Children[0];
          if ( !v38->Children[0] )
          {
            LOBYTE(v35) = 0;
            break;
          }
        }
        else
        {
          v42 = v38->Children[1];
          if ( !v42 )
          {
            LOBYTE(v35) = 1;
            break;
          }
        }
        v38 = v42;
      }
    }
    v41 = v34 + 6;
    goto LABEL_60;
  }
  v38 = (struct _RTL_BALANCED_NODE *)v34[8];
  LOBYTE(v35) = 0;
  if ( !v38 )
    goto LABEL_59;
  while ( (int)VidMmCompareForInsertAlignedRange(v55, v38) < 0 )
  {
    v39 = v38->Children[0];
    if ( !v38->Children[0] )
    {
      LOBYTE(v35) = 0;
      goto LABEL_59;
    }
LABEL_48:
    v38 = v39;
  }
  v39 = v38->Children[1];
  if ( v39 )
    goto LABEL_48;
  LOBYTE(v35) = 1;
LABEL_59:
  v41 = v34 + 8;
LABEL_60:
  RtlAvlInsertNodeEx(v41, v38, v35, Multirange);
  *((_DWORD *)Multirange + 22) = v3;
  if ( *v6 == 1LL && !v7 )
  {
    v52 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)Multirange + 8);
    if ( !*((_DWORD *)v52 + 16) )
    {
LABEL_100:
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v6[4], 2LL, Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v6[4] + 8LL), Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(PLOOKASIDE_LIST_EX **)(v6[4] + 8LL), v52);
    }
  }
  return Multirange;
}
