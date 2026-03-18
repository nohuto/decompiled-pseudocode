/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400C82C0
 * Callers:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C8160 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x140039C6C (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x14003CC70 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1400C07AC (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C7454 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Destroy@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400C8C08 (-Destroy@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  __int64 v3; // rdi
  __int64 v5; // r13
  struct VIDMM_RECYCLE_RANGE *v6; // rbx
  int v7; // esi
  VIDMM_RECYCLE_MULTIRANGE *v8; // r8
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rbp
  int v13; // r9d
  __int64 v14; // rdx
  struct VIDMM_RECYCLE_RANGE *v15; // r15
  unsigned int v16; // r10d
  _QWORD *v17; // r8
  __int64 v18; // rax
  struct _LOOKASIDE_LIST_EX *v19; // rcx
  struct VIDMM_RECYCLE_BLOCK *v20; // rdx
  struct VIDMM_RECYCLE_BLOCK *v21; // rax
  struct VIDMM_RECYCLE_BLOCK **v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rax
  CCHAR LeastSignificantBit; // al
  __int64 v31; // rax
  __int64 v32; // rdi
  _QWORD *v33; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  bool v42; // [rsp+60h] [rbp-98h]
  unsigned __int8 v43; // [rsp+61h] [rbp-97h]
  char v44; // [rsp+62h] [rbp-96h]
  char v45; // [rsp+63h] [rbp-95h]
  char v46; // [rsp+64h] [rbp-94h]
  char v47; // [rsp+65h] [rbp-93h]
  int v48; // [rsp+68h] [rbp-90h]
  int v49; // [rsp+6Ch] [rbp-8Ch]
  __int64 v50; // [rsp+70h] [rbp-88h]
  __int64 v51; // [rsp+78h] [rbp-80h]
  __int64 v52; // [rsp+80h] [rbp-78h]
  __int64 v53; // [rsp+88h] [rbp-70h]
  _QWORD *v54; // [rsp+90h] [rbp-68h]
  __int64 v55; // [rsp+98h] [rbp-60h]
  bool v57; // [rsp+108h] [rbp+10h]
  bool v58; // [rsp+110h] [rbp+18h]
  bool v59; // [rsp+118h] [rbp+20h]

  v5 = *((_QWORD *)a2 + 17);
  v6 = a2;
  v7 = *((_DWORD *)a2 + 16);
  v8 = this;
  v50 = *((_QWORD *)a2 + 4);
  v51 = *((_QWORD *)a3 + 5);
  v49 = *((_DWORD *)a2 + 23);
  v57 = 0;
  v44 = 0;
  if ( v5 )
  {
    v57 = *(_QWORD *)(v5 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v5 + 72) == a3 )
    {
      v44 = 1;
      v57 = *(_QWORD *)(v5 + 64) == (_QWORD)a2;
    }
  }
  v9 = *((_QWORD *)a2 + 18);
  v58 = 0;
  v45 = 0;
  if ( v9 )
  {
    v58 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72) == a3 )
    {
      v45 = 1;
      v58 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    }
  }
  v10 = *((_QWORD *)a2 + 19);
  v52 = v10;
  v59 = 0;
  v46 = 0;
  if ( v10 )
  {
    v59 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v10 + 72) == a3 )
    {
      v46 = 1;
      v59 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    }
  }
  v11 = *((_QWORD *)a2 + 20);
  v53 = v11;
  v42 = 0;
  v47 = 0;
  if ( v11 )
  {
    v42 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v11 + 72) == a3 )
    {
      v47 = 1;
      v42 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    }
  }
  LOBYTE(v12) = 0;
  v54 = (_QWORD *)*((_QWORD *)a2 + 16);
  v55 = *((_QWORD *)a3 + 15);
  ++**((_QWORD **)this + 10);
  v13 = *((_DWORD *)a2 + 20);
  LOBYTE(v3) = 0;
  v43 = 0;
  v48 = v13;
LABEL_8:
  v14 = *((_QWORD *)v6 + 15);
  v15 = 0LL;
  v16 = 1;
  if ( v14 != *((_QWORD *)v6 + 9) + 72LL )
    v15 = (struct VIDMM_RECYCLE_RANGE *)(v14 - 120);
  if ( v7 != 3 && (unsigned int)(v7 - 4) >= 2 )
    goto LABEL_12;
  v20 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v6 + 13);
  v21 = (struct VIDMM_RECYCLE_RANGE *)((char *)v6 + 104);
  if ( *((struct VIDMM_RECYCLE_RANGE **)v20 + 1) != (struct VIDMM_RECYCLE_RANGE *)((char *)v6 + 104)
    || (v22 = (struct VIDMM_RECYCLE_BLOCK **)*((_QWORD *)v6 + 14), *v22 != v21) )
  {
LABEL_84:
    __fastfail(3u);
  }
  *v22 = v20;
  *((_QWORD *)v20 + 1) = v22;
  *(_QWORD *)v21 = 0LL;
  v23 = *((_DWORD *)v6 + 16);
  *((_QWORD *)v6 + 14) = 0LL;
  *((_QWORD *)v6 + 12) = 0LL;
  if ( v23 == 5 )
  {
    while ( 2 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)v6 + 4) - *((_QWORD *)v6 + 5), v20);
      v8 = this;
      v16 = 1;
      v13 = v48;
LABEL_12:
      if ( v6 == a3 )
        LOBYTE(v12) = 1;
      if ( !(_BYTE)v3 )
      {
        v43 = 1;
        goto LABEL_16;
      }
      v25 = *((unsigned int *)v6 + 20);
      if ( (_DWORD)v25 == 2 )
      {
        if ( dword_140081500 && !v13 )
          goto LABEL_104;
        goto LABEL_35;
      }
      if ( !(_DWORD)v25 )
      {
        if ( dword_140081500 && v13 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(v25, 270LL, (unsigned int)(v25 + 9), 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 195;
          continue;
        }
        goto LABEL_16;
      }
      break;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      if ( v26 != 2 )
        goto LABEL_16;
      if ( dword_140081500 && !v13 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        WdLogGlobalForLineNumber = 195;
LABEL_104:
        if ( g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = v16;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 195;
          JUMPOUT(0x1400C8C01LL);
        }
LABEL_35:
        if ( v13 == 1 )
          v48 = 2;
        goto LABEL_16;
      }
      if ( v13 == 1 || v13 == 2 )
        v48 = 3;
      goto LABEL_16;
    }
    goto LABEL_91;
  }
  if ( (unsigned int)(v23 - 3) > 1 )
    goto LABEL_12;
  v24 = *((_QWORD *)v6 + 4) - *((_QWORD *)v6 + 5);
  if ( (__int64)(v24
               + _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                   v24)) >= 0
    || !g_IsInternalRelease )
  {
    goto LABEL_12;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  WdLogGlobalForLineNumber = 195;
LABEL_29:
  ExFreeToLookasideListEx(v19, v6);
  while ( 1 )
  {
    --*(_DWORD *)(v3 + 1688);
    if ( !(_BYTE)v12 )
    {
      v3 = v43;
      v6 = v15;
      v8 = this;
      v13 = v48;
      goto LABEL_8;
    }
    a3 = this;
    v12 = (_QWORD *)*((_QWORD *)this + 10);
    v27 = *(_QWORD *)(v12[4] + 8LL);
    v28 = *(_DWORD *)(v27 + 1616);
    if ( v28 )
    {
      v29 = (unsigned int)(v28 - 1);
      v15 = 0LL;
      v6 = *(struct VIDMM_RECYCLE_RANGE **)(v27 + 8 * v29 + 1624);
      *(_QWORD *)(v27 + 8 * v29 + 1624) = 0LL;
      --*(_DWORD *)(v27 + 1616);
    }
    else
    {
      v6 = (struct VIDMM_RECYCLE_RANGE *)ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v27 + 1312));
      v15 = 0LL;
    }
    if ( v6 )
    {
      ++*(_DWORD *)(v27 + 1688);
      *((_QWORD *)v6 + 4) = v50;
      *((_QWORD *)v6 + 5) = v51;
      *((_DWORD *)v6 + 6) = 0;
      *((_QWORD *)v6 + 9) = v12;
      *((_DWORD *)v6 + 16) = 0;
      *((_QWORD *)v6 + 11) = 3LL;
      *((_QWORD *)v6 + 12) = 0LL;
      ++*v12;
      LeastSignificantBit = RtlFindLeastSignificantBit(*((_QWORD *)v6 + 4));
      v31 = LeastSignificantBit < 0 ? 0LL : 1LL << LeastSignificantBit;
      *((_QWORD *)v6 + 7) = v31;
      *((_QWORD *)v6 + 6) = 0LL;
      *((_DWORD *)v6 + 20) = 0;
      *((_QWORD *)v6 + 13) = 0LL;
      *((_QWORD *)v6 + 14) = 0LL;
      *((_QWORD *)v6 + 15) = 0LL;
      *((_QWORD *)v6 + 16) = 0LL;
      v32 = *((_QWORD *)v6 + 9);
      *((_QWORD *)v6 + 17) = 0LL;
      *((_QWORD *)v6 + 18) = 0LL;
      *((_QWORD *)v6 + 19) = 0LL;
      *((_QWORD *)v6 + 20) = 0LL;
      *((_BYTE *)v6 + 168) = 0;
      v33 = *(_QWORD **)(v32 + 136);
      if ( v33 )
      {
        v40 = *v33 + 144LL * v33[1];
        *(_DWORD *)v40 = 0;
        *(_QWORD *)(v40 + 8) = v6;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v40 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v32 + 136) + 8LL);
        v41 = *(_QWORD *)(v32 + 136);
        if ( *(_QWORD *)(v41 + 8) == *(_QWORD *)(v41 + 48) )
        {
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v32 + 136) + 16LL) = 1;
        }
      }
    }
    v3 = *((_QWORD *)this + 10);
    if ( (*(_QWORD *)v3)-- == 1LL )
    {
LABEL_95:
      if ( !*(_QWORD *)(v3 + 8) )
      {
        VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK((VIDMM_RECYCLE_BLOCK *)v3);
        operator delete((void *)v3);
      }
    }
    *((_DWORD *)v6 + 23) = v49;
    *((_DWORD *)v6 + 20) = v48;
    *((_QWORD *)v6 + 19) = v52;
    *((_DWORD *)v6 + 16) = v7;
    *((_QWORD *)v6 + 17) = v5;
    *((_QWORD *)v6 + 18) = v9;
    *((_QWORD *)v6 + 20) = v53;
    if ( v57 )
      *(_QWORD *)(v5 + 64) = v6;
    if ( v44 )
      *(_QWORD *)(v5 + 72) = v6;
    if ( v58 )
      *(_QWORD *)(v9 + 64) = v6;
    if ( v45 )
      *(_QWORD *)(v9 + 72) = v6;
    if ( v59 )
      *(_QWORD *)(v52 + 64) = v6;
    if ( v46 )
      *(_QWORD *)(v52 + 72) = v6;
    if ( v42 )
      *(_QWORD *)(v53 + 64) = v6;
    if ( v47 )
      *(_QWORD *)(v53 + 72) = v6;
    *((_QWORD *)v6 + 16) = v54;
    *v54 = (char *)v6 + 120;
    *((_QWORD *)v6 + 15) = v55;
    *(_QWORD *)(v55 + 8) = (char *)v6 + 120;
    v7 -= 3;
    if ( v7 )
    {
      if ( --v7 )
        break;
    }
    v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 10) + 32LL) + 8LL);
    *((_QWORD *)v6 + 12) = *(_QWORD *)(v35 + 1576) + (unsigned int)dword_1400814EC;
    v36 = (_QWORD *)((char *)v6 + 104);
    v17 = *(_QWORD **)(v35 + 1552);
    if ( *v17 != v35 + 1544 )
      goto LABEL_84;
    *v36 = v35 + 1544;
    *((_QWORD *)v6 + 14) = v17;
    *v17 = v36;
    *(_QWORD *)(v35 + 1552) = v36;
    if ( !_InterlockedExchange((volatile __int32 *)(v35 + 1536), 1) && !*(_DWORD *)(v35 + 1584) )
      KeSetTimer((PKTIMER)(v35 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v35 + 1440));
    v39 = *((_QWORD *)v6 + 5) - *((_QWORD *)v6 + 4);
    if ( (__int64)(v39
                 + _InterlockedExchangeAdd64(
                     (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                     v39)) >= 0
      || !g_IsInternalRelease )
    {
      goto LABEL_81;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, v15, v15);
    WdLogGlobalForLineNumber = 195;
LABEL_91:
    if ( dword_140081500 && !v13 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = v16;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
      goto LABEL_95;
    }
LABEL_16:
    v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 10) + 32LL) + 8LL);
    if ( (byte_140081242 & 4) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    VIDMM_RECYCLE_RANGE::Destroy(v6);
    v18 = *(unsigned int *)(v3 + 1616);
    v19 = *(struct _LOOKASIDE_LIST_EX **)(v3 + 1312);
    if ( (unsigned int)v18 >= 4 )
      goto LABEL_29;
    *(_QWORD *)(v3 + 8 * v18 + 1624) = v6;
    ++*(_DWORD *)(v3 + 1616);
  }
  if ( v7 == 1 )
    VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)a3 + 10) + 32LL) + 8LL),
      v6);
LABEL_81:
  if ( (byte_140081242 & 4) != 0 )
  {
    v37 = *((_QWORD *)a3 + 10);
    v38 = *(_QWORD *)(v37 + 32);
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v38,
      v37,
      (__int64)v17,
      **(_QWORD **)(*(_QWORD *)(v38 + 8) + 8LL),
      v6,
      v37,
      *(_QWORD *)(v37 + 56),
      v38,
      *((_QWORD *)v6 + 4),
      *((_QWORD *)v6 + 5),
      *(_DWORD *)v38,
      *((_DWORD *)v6 + 16));
  }
}
