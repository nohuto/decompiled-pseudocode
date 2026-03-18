/*
 * XREFs of ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C9138
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400C4444 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5A0C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400C73F4 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CA8A0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400CAA8C (-Destroy@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400CB188 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1400CB4B4 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400ECDD8 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400ECF70 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // r15
  __int64 v20; // r8
  __int64 v21; // rbx
  __int64 Multirange; // r13
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx

  if ( *((_DWORD *)a2 + 16) != 4 )
  {
    if ( *((_DWORD *)a2 + 16) != 5 )
    {
      v8 = 3;
      v7 = 3;
      goto LABEL_23;
    }
    v6 = *((_QWORD *)a2 + 18);
    v7 = 1;
    goto LABEL_4;
  }
  v7 = 0;
  v6 = *((_QWORD *)a2 + 19);
  v15 = **(_DWORD **)(*((_QWORD *)a2 + 9) + 32LL);
  if ( (unsigned int)(v15 - 3) <= 3 || (v8 = 1, (unsigned int)(v15 - 9) <= 1) )
LABEL_4:
    v8 = 2;
  if ( !v6 )
  {
LABEL_23:
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, v7, a2, a4);
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v8, a2);
    return;
  }
  WdLogSingleEntry2(4LL, v6, v7);
  WdLogGlobalForLineNumber = 8567;
  if ( v7 )
    v16 = (char *)this + 56;
  else
    v16 = (char *)this + 48;
  RtlAvlRemoveNode(v16, v6);
  v9 = *(_QWORD *)(v6 + 32);
  v10 = *(_QWORD *)(v6 + 40);
  *(_DWORD *)(v6 + 88) = 3;
  v11 = *((_QWORD *)a2 + 4);
  v12 = *((_QWORD *)a2 + 5);
  if ( v9 < v11 )
  {
    if ( v10 > v12 )
    {
      v18 = *((_QWORD *)a2 + 15);
      v19 = 0LL;
      v20 = *((_QWORD *)a2 + 9);
      v21 = *(_QWORD *)(v6 + 72);
      if ( v18 != v20 + 72 )
        v19 = (_QWORD *)(v18 - 120);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     *((_QWORD *)this + 1),
                     *(unsigned int *)(v6 + 200),
                     v20,
                     v12,
                     v10);
      *(_QWORD *)(Multirange + 64) = v19;
      *(_QWORD *)(Multirange + 72) = v21;
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v6, *(_QWORD *)(v6 + 32), *((_QWORD *)a2 + 4));
      while ( 1 )
      {
        v23 = *(_DWORD *)(Multirange + 200);
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 == 1 )
              v19[19] = Multirange;
          }
          else
          {
            v19[18] = Multirange;
          }
        }
        else
        {
          v19[17] = Multirange;
        }
        if ( v19 == *(_QWORD **)(Multirange + 72) )
          break;
        v25 = v19[15];
        if ( v25 == v19[9] + 72LL )
          v19 = 0LL;
        else
          v19 = (_QWORD *)(v25 - 120);
      }
      if ( *((_DWORD *)a2 + 16) == 4 )
      {
        *((_QWORD *)a2 + 19) = 0LL;
      }
      else if ( *((_DWORD *)a2 + 16) == 5 )
      {
        *((_QWORD *)a2 + 18) = 0LL;
      }
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v7, v6);
      v17 = Multirange;
      goto LABEL_29;
    }
LABEL_25:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v6, v9, v11);
    if ( *((_DWORD *)a2 + 16) == 4 )
    {
      *((_QWORD *)a2 + 19) = 0LL;
    }
    else if ( *((_DWORD *)a2 + 16) == 5 )
    {
      *((_QWORD *)a2 + 18) = 0LL;
    }
    v17 = v6;
LABEL_29:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v7, v17);
    return;
  }
  if ( v10 > v12 )
  {
    v11 = v10;
    v9 = *((_QWORD *)a2 + 5);
    goto LABEL_25;
  }
  v13 = *((_QWORD *)this + 1);
  VIDMM_RECYCLE_MULTIRANGE::Destroy((VIDMM_RECYCLE_MULTIRANGE *)v6);
  v14 = *(unsigned int *)(v13 + 1620);
  if ( (unsigned int)v14 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v13 + 1320), (PVOID)v6);
  }
  else
  {
    *(_QWORD *)(v13 + 8 * v14 + 1656) = v6;
    ++*(_DWORD *)(v13 + 1620);
  }
  --*(_DWORD *)(v13 + 1688);
  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( *((_DWORD *)a2 + 16) == 5 )
  {
    *((_QWORD *)a2 + 18) = 0LL;
  }
}
