/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1400CACF0
 * Callers:
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x14009D6B0 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1400C9528 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400CB60C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEG.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x140039C6C (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x14003CC70 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C68DC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C7454 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400CD024 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400CD1BC (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, _QWORD *a2, bool *a3, __int64 a4)
{
  _QWORD *v5; // rbx
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // r12
  __int64 v11; // rax
  bool v12; // r13
  __int64 v13; // rax
  char v14; // cl
  unsigned int v15; // ebp
  _QWORD *v16; // r15
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rax
  CCHAR LeastSignificantBit; // al
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rcx
  _DWORD *v26; // r8
  __int64 v27; // rdx
  char *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  struct VIDMM_RECYCLE_BLOCK *v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // [rsp+50h] [rbp-68h]
  __int64 v40; // [rsp+58h] [rbp-60h]
  char *v41; // [rsp+60h] [rbp-58h]
  bool v42; // [rsp+C0h] [rbp+8h]
  char v44; // [rsp+D0h] [rbp+18h]
  __int64 v45; // [rsp+D8h] [rbp+20h]

  *a3 = 1;
  v5 = a2;
  v42 = 0;
  v7 = 1;
  v8 = *((_QWORD *)this + 17);
  if ( v8 )
    v42 = *(_QWORD *)(v8 + 72) == (_QWORD)this;
  v9 = *((_QWORD *)this + 18);
  v10 = 0;
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 72) == (_QWORD)this;
  v11 = *((_QWORD *)this + 19);
  v12 = 0;
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 72) == (_QWORD)this;
  v13 = *((_QWORD *)this + 20);
  v14 = 0;
  v44 = 0;
  if ( v13 )
    goto LABEL_37;
  while ( 1 )
  {
    v15 = *((_DWORD *)this + 22);
    if ( v15 != 3 )
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v15, this, a4);
    v16 = (_QWORD *)*((_QWORD *)this + 9);
    v17 = *((_QWORD *)this + 5);
    v18 = (char *)v5 + *((_QWORD *)this + 4);
    v45 = v17;
    v41 = v18;
    v19 = *(_QWORD *)(v16[4] + 8LL);
    v20 = *(_DWORD *)(v19 + 1616);
    if ( v20 )
    {
      v21 = (unsigned int)(v20 - 1);
      v5 = *(_QWORD **)(v19 + 8 * v21 + 1624);
      *(_QWORD *)(v19 + 8 * v21 + 1624) = 0LL;
      --*(_DWORD *)(v19 + 1616);
    }
    else
    {
      v29 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v19 + 1312));
      v17 = v45;
      v5 = v29;
      v18 = v41;
    }
    if ( !v5 )
      break;
    ++*(_DWORD *)(v19 + 1688);
    v5[4] = v18;
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 16) = 0;
    v5[12] = 0LL;
    v5[9] = v16;
    v5[5] = v17;
    v5[11] = 3LL;
    ++*v16;
    LeastSignificantBit = RtlFindLeastSignificantBit(v5[4]);
    if ( LeastSignificantBit < 0 )
      v23 = 0LL;
    else
      v23 = 1LL << LeastSignificantBit;
    v5[7] = v23;
    v5[6] = 0LL;
    *((_DWORD *)v5 + 20) = 0;
    v5[13] = 0LL;
    v5[14] = 0LL;
    v5[15] = 0LL;
    v5[16] = 0LL;
    v24 = v5[9];
    v5[17] = 0LL;
    v5[18] = 0LL;
    v5[19] = 0LL;
    v5[20] = 0LL;
    *((_BYTE *)v5 + 168) = 0;
    v25 = *(_QWORD **)(v24 + 136);
    if ( v25 )
    {
      v37 = *v25 + 144LL * v25[1];
      *(_DWORD *)v37 = 0;
      *(_QWORD *)(v37 + 8) = v5;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v37 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v24 + 136) + 8LL);
      v38 = *(_QWORD *)(v24 + 136);
      if ( *(_QWORD *)(v38 + 8) == *(_QWORD *)(v38 + 48) )
      {
        *(_QWORD *)(v38 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v24 + 136) + 16LL) = 1;
      }
    }
    v26 = (_DWORD *)((char *)this + 64);
    *((_DWORD *)v5 + 16) = *((_DWORD *)this + 16);
    *((_DWORD *)v5 + 23) = *((_DWORD *)this + 23);
    v27 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 5) = (char *)a2 + *((_QWORD *)this + 4);
    *(_QWORD *)(v27 + 8) = v5 + 15;
    *((_QWORD *)this + 15) = v5 + 15;
    v5[16] = (char *)this + 120;
    v5[15] = v27;
    v5[17] = *((_QWORD *)this + 17);
    v5[18] = *((_QWORD *)this + 18);
    v5[19] = *((_QWORD *)this + 19);
    v5[20] = *((_QWORD *)this + 20);
    *((_DWORD *)v5 + 20) = *((_DWORD *)this + 20);
    *((_BYTE *)v5 + 84) = *((_BYTE *)this + 84);
    if ( v42 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v5;
    v28 = (char *)this + 64;
    if ( v10 )
    {
      v28 = (char *)this + 64;
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v5;
    }
    if ( v12 )
    {
      v26 = v28;
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v5;
    }
    if ( v44 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v5;
    if ( *v26 != 3 && *v26 != 4 )
    {
      if ( *v26 == 5 )
      {
        VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
          (struct VIDMM_RECYCLE_RANGE *)v5);
        VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(v5[4] - v5[5], v36);
      }
LABEL_28:
      if ( (byte_140081242 & 4) != 0 )
      {
        McTemplateK0p_EtwWriteTransfer();
        if ( (byte_140081242 & 4) != 0 )
        {
          v31 = *((_QWORD *)this + 9);
          McTemplateK0pppppppqq_EtwWriteTransfer(
            *(_QWORD *)(v31 + 32),
            v31,
            v30,
            **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v31 + 32) + 8LL) + 8LL),
            this,
            v31,
            *(_QWORD *)(v31 + 56),
            *(_QWORD *)(v31 + 32),
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 5),
            **(_DWORD **)(v31 + 32),
            *((_DWORD *)this + 16));
          if ( (byte_140081242 & 4) != 0 )
          {
            v33 = *((_QWORD *)this + 9);
            v34 = *(_QWORD *)(v33 + 32);
            LODWORD(v40) = *((_DWORD *)v5 + 16);
            LODWORD(v39) = *(_DWORD *)v34;
            McTemplateK0pppppppqq_EtwWriteTransfer(
              v34,
              v33,
              v32,
              **(_QWORD **)(*(_QWORD *)(v34 + 8) + 8LL),
              v5,
              v33,
              *(_QWORD *)(v33 + 56),
              v34,
              v5[4],
              v5[5],
              v39,
              v40);
          }
        }
      }
      return;
    }
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
      (struct VIDMM_RECYCLE_RANGE *)v5);
    v35 = v5[4] - v5[5];
    if ( (__int64)(v35
                 + _InterlockedExchangeAdd64(
                     (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                     v35)) >= 0
      || !g_IsInternalRelease )
    {
      goto LABEL_28;
    }
    g_DxgMmsBugcheckExportIndex = 1;
    v13 = WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
LABEL_37:
    if ( *(VIDMM_RECYCLE_RANGE **)(v13 + 72) == this )
      v14 = v7;
    v44 = v14;
  }
  WdLogSingleEntry2(3LL, this, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL));
  WdLogGlobalForLineNumber = 2027;
  if ( v15 != 3 )
    VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v15, this);
  *a3 = 0;
}
