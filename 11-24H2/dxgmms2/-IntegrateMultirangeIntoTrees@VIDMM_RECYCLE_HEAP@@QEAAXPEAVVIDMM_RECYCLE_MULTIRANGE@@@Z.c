/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400C5600 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400CC078 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C5670 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C8160 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C8CDC (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1400C9EF0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CA950 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1400CB238 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CB42C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400CD024 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // r15
  __int64 v6; // rcx
  __int64 Multirange; // rax
  __int64 v8; // r13
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  int v12; // edx
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // rdx
  _QWORD *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // r8
  char v31; // si
  _QWORD *v32; // rbx
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rdi
  _QWORD **v37; // rbx
  _DWORD *v38; // rdi
  _QWORD *v39; // r15
  _QWORD *v40; // rsi
  unsigned __int8 v41; // dl
  struct VIDMM_RECYCLE_MULTIRANGE *v42; // rdi
  _QWORD *v43; // rbx
  __int64 v44; // rdx
  unsigned __int8 v45; // al
  struct VIDMM_RECYCLE_RANGE *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r8
  _QWORD *v49; // rbx
  struct VIDMM_RECYCLE_MULTIRANGE *v50; // rdx
  __int64 v51; // rbx
  int v52; // ecx
  int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // [rsp+20h] [rbp-20h]
  _QWORD *v57; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v58; // [rsp+38h] [rbp-8h]
  char v59; // [rsp+80h] [rbp+40h]
  __int64 v60; // [rsp+88h] [rbp+48h]

  v2 = *((_QWORD *)a2 + 8);
  v3 = (_QWORD *)*((_QWORD *)a2 + 9);
  v58 = &v57;
  v6 = *((_QWORD *)this + 1);
  v57 = &v57;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(v6, 0LL, *(_QWORD *)(v2 + 72), *(_QWORD *)(v2 + 32), v3[5]);
  v60 = Multirange;
  v8 = Multirange;
  if ( !Multirange )
  {
LABEL_57:
    v47 = *((_QWORD *)a2 + 10);
    v48 = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
    v56 = **(_QWORD **)(*((_QWORD *)this + 1) + 8LL);
    WdLogSingleEntry4(3LL, v47, v48);
    v49 = v57;
    WdLogGlobalForLineNumber = 8947;
    while ( v49 != &v57 )
    {
      v50 = (struct VIDMM_RECYCLE_MULTIRANGE *)(v49 - 23);
      v49 = (_QWORD *)*v49;
      *((_DWORD *)v50 + 22) = 3;
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v50);
    }
    v51 = *((_QWORD *)a2 + 8);
    while ( 1 )
    {
      *(_QWORD *)(v51 + 136) = 0LL;
      *(_QWORD *)(v51 + 144) = 0LL;
      *(_QWORD *)(v51 + 152) = 0LL;
      *(_QWORD *)(v51 + 160) = 0LL;
      v52 = *(_DWORD *)(v51 + 64);
      if ( v52 )
      {
        v53 = v52 - 4;
        if ( v53 )
        {
          if ( v53 != 1 )
            goto LABEL_68;
          v54 = 1LL;
        }
        else
        {
          v54 = 0LL;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v54, v51);
      }
      else
      {
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, 2LL, v51);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(
          *(VIDMM_RECYCLE_BLOCK **)(v51 + 72),
          (struct VIDMM_RECYCLE_RANGE *)v51);
        VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*(VIDMM_RECYCLE_BLOCK **)(v51 + 72), (struct VIDMM_RECYCLE_RANGE *)v51);
      }
LABEL_68:
      if ( v51 == *((_QWORD *)a2 + 9) )
        return;
      v55 = *(_QWORD *)(v51 + 120);
      if ( v55 == *(_QWORD *)(v51 + 72) + 72LL )
        v51 = 0LL;
      else
        v51 = v55 - 120;
    }
  }
  *(_QWORD *)(Multirange + 64) = v2;
  v9 = (_QWORD *)(Multirange + 184);
  *(_QWORD *)(Multirange + 72) = v3;
  *(_DWORD *)(Multirange + 88) = 2;
  v10 = v58;
  if ( *v58 != &v57 )
    goto LABEL_56;
  *(_QWORD *)(Multirange + 192) = v58;
  *v9 = &v57;
  *v10 = v9;
  v11 = *((_QWORD *)a2 + 10);
  v58 = (_QWORD **)v9;
  v12 = **(_DWORD **)(v11 + 32);
  if ( (unsigned int)(v12 - 3) <= 3 || (unsigned int)(v12 - 9) <= 1 )
    goto LABEL_38;
  v13 = 0LL;
  v14 = v2;
  v15 = 0;
LABEL_6:
  v59 = v15;
  while ( !v15 )
  {
    if ( *(_DWORD *)(v14 + 64) )
    {
      if ( !v13 )
        v13 = (_QWORD *)v14;
    }
    else if ( v13 )
    {
      v16 = *(_QWORD *)(v14 + 128);
      v17 = 0LL;
      if ( v16 != *(_QWORD *)(v14 + 72) + 72LL )
        v17 = (_QWORD *)(v16 - 120);
      v18 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(*((_QWORD *)this + 1), 1LL, *(_QWORD *)(v2 + 72), v13[4], v17[5]);
      v19 = v18;
      if ( !v18 )
        goto LABEL_57;
      *(_QWORD *)(v18 + 64) = v13;
      *(_QWORD *)(v18 + 72) = v17;
      *(_DWORD *)(v18 + 88) = 1;
      while ( 1 )
      {
        v13[18] = v18;
        if ( v13 == v17 )
          break;
        v20 = v13[15];
        v21 = v13[9];
        v13 = 0LL;
        if ( v20 != v21 + 72 )
          v13 = (_QWORD *)(v20 - 120);
      }
      v22 = v58;
      v23 = (_QWORD *)(v19 + 184);
      if ( *v58 != &v57 )
        goto LABEL_56;
      v23[1] = v58;
      *v23 = &v57;
      v13 = 0LL;
      *v22 = v23;
      v58 = (_QWORD **)v23;
    }
    if ( (_QWORD *)v14 == v3 )
    {
      v15 = 1;
      goto LABEL_6;
    }
    v24 = *(_QWORD *)(v14 + 120);
    if ( v24 == *(_QWORD *)(v14 + 72) + 72LL )
      v14 = 0LL;
    else
      v14 = v24 - 120;
    v15 = v59;
  }
  if ( v13 )
  {
    v25 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(*((_QWORD *)this + 1), 1LL, *(_QWORD *)(v2 + 72), v13[4], v3[5]);
    v26 = v25;
    if ( v25 )
    {
      *(_QWORD *)(v25 + 64) = v13;
      *(_QWORD *)(v25 + 72) = v3;
      *(_DWORD *)(v25 + 88) = 1;
      while ( 1 )
      {
        v13[18] = v25;
        if ( v13 == v3 )
          break;
        v27 = v13[15];
        v28 = v13[9];
        v13 = 0LL;
        if ( v27 != v28 + 72 )
          v13 = (_QWORD *)(v27 - 120);
      }
      v29 = v58;
      v30 = (_QWORD *)(v26 + 184);
      if ( *v58 == &v57 )
      {
        v30[1] = v58;
        *v30 = &v57;
        *v29 = v30;
        v58 = (_QWORD **)v30;
        goto LABEL_37;
      }
LABEL_56:
      __fastfail(3u);
    }
    goto LABEL_57;
  }
LABEL_37:
  v8 = v60;
LABEL_38:
  v31 = 0;
  while ( !v31 )
  {
    v32 = (_QWORD *)(v2 + 72);
    if ( *(_DWORD *)(v2 + 64) == 4 )
    {
      v33 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
              *((_QWORD *)this + 1),
              2LL,
              *v32,
              *(_QWORD *)(v2 + 32),
              *(_QWORD *)(v2 + 40));
      if ( !v33 )
        goto LABEL_57;
      *(_QWORD *)(v33 + 64) = v2;
      *(_QWORD *)(v33 + 72) = v2;
      *(_QWORD *)(v2 + 152) = v33;
      *(_DWORD *)(v33 + 88) = 0;
      v34 = (_QWORD *)(v33 + 184);
      v35 = v58;
      if ( *v58 != &v57 )
        goto LABEL_56;
      v34[1] = v58;
      *v34 = &v57;
      *v35 = v34;
      v58 = (_QWORD **)v34;
    }
    *(_QWORD *)(v2 + 160) = 0LL;
    *(_QWORD *)(v2 + 136) = v8;
    if ( (_QWORD *)v2 == v3 )
    {
      v31 = 1;
    }
    else
    {
      v36 = *(_QWORD *)(v2 + 120);
      if ( v36 == *v32 + 72LL )
        v2 = 0LL;
      else
        v2 = v36 - 120;
    }
  }
  v37 = (_QWORD **)v57;
  v38 = v57 - 23;
  v38[22] = 3;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, v38);
  v39 = *v37;
  v40 = *v37;
  v42 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v38);
  if ( v39 != &v57 )
  {
    do
    {
      v43 = v40 - 23;
      v44 = *((unsigned int *)v40 - 24);
      *((_DWORD *)v40 - 24) = 3;
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v44, v40 - 23);
      v40 = (_QWORD *)*v40;
      VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v43);
    }
    while ( v40 != &v57 );
  }
  v45 = VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v42, v41);
  if ( v39 == &v57 && !v45 )
  {
    v46 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v42 + 8);
    if ( v46 == *((struct VIDMM_RECYCLE_RANGE **)v42 + 9) )
    {
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v42 + 10), v46);
      VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(
        *((VIDMM_RECYCLE_BLOCK **)v42 + 10),
        *((struct VIDMM_RECYCLE_RANGE **)v42 + 8));
    }
  }
}
