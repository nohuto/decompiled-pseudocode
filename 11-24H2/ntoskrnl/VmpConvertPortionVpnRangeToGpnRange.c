/*
 * XREFs of VmpConvertPortionVpnRangeToGpnRange @ 0x14039ECB4
 * Callers:
 *     VmpFlushTb @ 0x1402A1F80 (VmpFlushTb.c)
 *     VmpFillGpnRanges @ 0x140398FC4 (VmpFillGpnRanges.c)
 *     VmpQueryAccessedState @ 0x140399630 (VmpQueryAccessedState.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x140649B80 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     VmpVaMemoryRangeGetNext @ 0x14049DF3C (VmpVaMemoryRangeGetNext.c)
 *     VmpFindNextPinnedPageStateHelper @ 0x140648D94 (VmpFindNextPinnedPageStateHelper.c)
 */

unsigned __int64 __fastcall VmpConvertPortionVpnRangeToGpnRange(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 *a4,
        _QWORD *a5,
        _DWORD *a6,
        char a7)
{
  unsigned __int64 *v9; // r10
  __int64 v10; // r11
  __int64 v11; // r12
  _DWORD *v12; // rbp
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r15
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  int v25; // r8d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // r15
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rax
  bool v36; // cc
  __int64 NextPinnedPageStateHelper; // rax
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 Next; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int128 v47; // [rsp+20h] [rbp-48h]

  v47 = 0uLL;
  v9 = a2;
  v10 = a1;
  while ( 1 )
  {
    v11 = 0LL;
    v12 = a6;
    v13 = *v9;
    v14 = v9[1] - 1;
    a5[1] = 0LL;
    v15 = v13 + v14;
    *a6 = 0;
    v16 = *a4;
    if ( !*a4 )
      goto LABEL_5;
    v17 = a4[1];
    if ( v17 )
    {
      a4[1] = 0LL;
      v11 = v17;
      v13 = a4[2];
      a4[2] = 0LL;
      goto LABEL_14;
    }
    if ( v13 < *(_QWORD *)(v16 + 24) || v13 > *(_QWORD *)(v16 + 32) )
    {
LABEL_5:
      v18 = *(_QWORD *)(v10 + 24);
      if ( (*(_BYTE *)(v10 + 32) & 1) != 0 && v18 )
        v18 ^= v10 + 24;
      v16 = 0LL;
      while ( v18 )
      {
        if ( v13 > *(_QWORD *)(v18 + 32) )
        {
          v19 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v16 = v18;
          v19 = *(_QWORD *)v18;
          if ( v13 >= *(_QWORD *)(v18 + 24) )
          {
            if ( (*(_BYTE *)(v10 + 32) & 1) != 0 && v19 )
              v19 ^= v18;
            v29 = 0LL;
            if ( v19 )
            {
              do
              {
                if ( v13 > *(_QWORD *)(v19 + 32) )
                {
                  v30 = *(_QWORD *)(v19 + 8);
                }
                else
                {
                  v30 = *(_QWORD *)v19;
                  if ( v13 >= *(_QWORD *)(v19 + 24) )
                    v29 = v19;
                }
                if ( (*(_BYTE *)(v10 + 32) & 1) != 0 && v30 )
                  v19 ^= v30;
                else
                  v19 = v30;
              }
              while ( v19 );
              if ( v29 )
                v16 = v29;
            }
            break;
          }
        }
        if ( (*(_BYTE *)(v10 + 32) & 1) != 0 && v19 )
          v18 ^= v19;
        else
          v18 = v19;
      }
      if ( !v16 )
        goto LABEL_30;
    }
LABEL_14:
    v20 = *(_QWORD *)(v16 + 24);
    if ( v13 < v20 )
    {
      if ( v15 < v20 )
        goto LABEL_30;
      v13 = *(_QWORD *)(v16 + 24);
    }
    *a4 = v16;
    if ( !v11 )
      v11 = *(_QWORD *)(v16 + 40);
    if ( (*(_DWORD *)(v11 + 64) & 1) == 0 || (a7 & 2) != 0 )
      goto LABEL_18;
    v31 = *(_QWORD *)(v11 + 56);
    v32 = *(_QWORD *)(v11 + 48) - v20;
    v33 = *(_QWORD *)(v16 + 32);
    v34 = v13 + v32;
    if ( v15 < v33 )
      v31 += v15 - v33;
    NextPinnedPageStateHelper = VmpFindNextPinnedPageStateHelper(v10, v34, v31, 1LL);
    if ( NextPinnedPageStateHelper == -1 )
      goto LABEL_80;
    if ( NextPinnedPageStateHelper != v34 )
    {
      v46 = NextPinnedPageStateHelper - v34;
      if ( v46 < a3 )
        a3 = v46;
LABEL_80:
      v12 = a6;
      v9 = a2;
LABEL_18:
      v21 = a1;
      goto LABEL_19;
    }
    v38 = VmpFindNextPinnedPageStateHelper(a1, NextPinnedPageStateHelper, v31, 0LL);
    v39 = v38;
    if ( v38 != -1 )
      break;
    if ( *(_QWORD *)v11 == v16 + 40 )
    {
      v13 = *(_QWORD *)(v16 + 32) + 1LL;
      if ( v13 > v15 )
        goto LABEL_30;
      Next = VmpVaMemoryRangeGetNext(a1, v16);
      v9 = a2;
      *a4 = Next;
      *a2 = v13;
      a2[1] = v15 - v13 + 1;
    }
    else
    {
      v41 = *(_QWORD *)(v16 + 24);
      v9 = a2;
      v10 = a1;
      a4[1] = *(_QWORD *)v11;
      v42 = *a2;
      if ( *a2 <= v41 )
        v42 = v41;
      a4[2] = v42;
    }
  }
  v43 = v31;
  v21 = a1;
  v13 = v38 + *(_QWORD *)(v16 + 24) - *(_QWORD *)(v11 + 48);
  v44 = VmpFindNextPinnedPageStateHelper(a1, v38, v43, 1LL);
  v9 = a2;
  if ( v44 == -1 )
  {
    v12 = a6;
  }
  else
  {
    v45 = v44 - v39;
    v12 = a6;
    if ( v45 < a3 )
      a3 = v45;
  }
LABEL_19:
  v22 = *(_QWORD *)(v16 + 24);
  *a5 = v13 + *(_QWORD *)(v11 + 48) - v22;
  if ( v15 - v13 + 1 > a3 )
    v23 = v13 + a3 - 1;
  else
    v23 = v15;
  v24 = *(_QWORD *)(v16 + 32);
  v25 = 0;
  if ( v23 >= v24 )
  {
    a5[1] = v24 - v13 + 1;
    v26 = v24 + 1;
    *(_QWORD *)&v47 = v24 + 1;
LABEL_23:
    v25 = 1;
  }
  else
  {
    a5[1] = v23 - v13 + 1;
    v26 = v23 + 1;
    *(_QWORD *)&v47 = v23 + 1;
    if ( v23 == v15 )
      goto LABEL_23;
    a4[1] = v11;
    a4[2] = v26;
  }
  v27 = v15 - v26;
  *((_QWORD *)&v47 + 1) = v27 + 1;
  if ( (*(_DWORD *)(v16 + 72) & 2) != 0 )
    *v12 |= 2u;
  if ( v25 )
  {
    if ( *(_QWORD *)v11 == v16 + 40 )
    {
      if ( v27 != -1LL )
        *a4 = VmpVaMemoryRangeGetNext(v21, v16);
LABEL_30:
      *(_OWORD *)a2 = v47;
      return v13;
    }
    v35 = *v9;
    v36 = *v9 <= v22;
    a4[1] = *(_QWORD *)v11;
    if ( !v36 )
      v22 = v35;
    a4[2] = v22;
  }
  return v13;
}
