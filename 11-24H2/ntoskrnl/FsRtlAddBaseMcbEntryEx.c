/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x1403BFA60
 * Callers:
 *     FsRtlAddBaseMcbEntry @ 0x1403BFA40 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     FsRtlAddEntry @ 0x1403BFF80 (FsRtlAddEntry.c)
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     FsRtlRemoveLargeEntry @ 0x1403C0240 (FsRtlRemoveLargeEntry.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // r13d
  int v5; // r14d
  unsigned int v6; // ebx
  int v8; // esi
  signed int v9; // r8d
  ULONG PairCount; // r15d
  signed int v11; // r9d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  _DWORD *Mapping; // r10
  int v15; // r8d
  unsigned int *v16; // r9
  unsigned int v17; // ebp
  int v18; // edx
  int v19; // eax
  int v20; // eax
  ULONG MaximumPairCount; // edx
  char *v22; // rsi
  ULONG v23; // eax
  __int64 v24; // rdx
  __int64 v26; // r14
  unsigned int v27; // ebp
  unsigned int v28; // edx
  int v29; // r11d
  int v30; // esi
  int v31; // eax
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rcx
  _DWORD *v36; // r11
  __int64 v37; // r15
  signed int v38; // r10d
  signed int i; // r9d
  unsigned int v40; // eax
  __int64 v41; // rsi
  __int64 v42; // r9
  unsigned int v43; // r8d
  int v44; // r10d
  unsigned int v45; // ecx
  __int64 v46; // rcx
  unsigned int v47; // ecx
  unsigned __int64 v48; // rax
  ULONG v49; // ebp
  char *PoolWithTag; // rax
  PVOID v51; // rdx
  int v52; // edx
  int v53; // r9d
  int v54; // eax
  __int64 v55; // rax
  int v56; // ecx
  _DWORD *v57; // rdx
  int v58; // r8d
  int v59; // eax
  unsigned int v60; // ecx
  _DWORD *v61; // r10
  __int64 v62; // rbp
  int v63; // ecx
  int v64; // ebp
  int v65; // edx
  int v66; // edx
  int v67; // eax
  __int64 v68; // rcx
  int v69; // edx
  __int64 v70; // r8
  __int64 v71; // rdx
  int v72; // ecx
  __int64 v73; // rcx
  int v74; // r9d
  _DWORD *v75; // r8
  int v76; // eax
  unsigned int v77; // [rsp+60h] [rbp+8h]
  ULONG v78; // [rsp+68h] [rbp+10h]
  int v79; // [rsp+70h] [rbp+18h]

  v79 = Lbn;
  v4 = SectorCount;
  v5 = Lbn;
  v6 = Vbn;
  if ( Vbn >= 0 && Lbn >= 0 && SectorCount > 0 )
  {
    v8 = 0;
    v9 = 0;
    PairCount = Mcb->PairCount;
    v78 = PairCount;
    v77 = PairCount - 1;
    v11 = PairCount - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v9 > v11 )
          goto LABEL_26;
        v12 = (v11 + v9) / 2;
        v13 = v12;
        if ( !v12 || (unsigned int)Vbn >= *((_DWORD *)Mcb->Mapping + 2 * (int)v12 - 2) )
          break;
        v11 = v12 - 1;
      }
      Mapping = Mcb->Mapping;
      if ( (unsigned int)Vbn <= Mapping[2 * v12] - 1 )
        break;
      v9 = v12 + 1;
    }
    v15 = Mapping[2 * v12 + 1];
    v16 = &Mapping[2 * v12];
    v17 = v4 + Vbn - 1;
    if ( v15 != -1 )
    {
      if ( v12 )
        v18 = Mapping[2 * v12 - 2];
      else
        v18 = 0;
      if ( v5 == v6 + v15 - v18 )
      {
        if ( v17 <= *v16 - 1 )
          return 0;
        if ( v12 < PairCount )
        {
          v6 = *v16;
          if ( v12 == -1 )
            v6 = 0;
        }
        else
        {
          v6 = 0;
        }
        if ( v12 )
          v19 = Mapping[2 * v12 - 2];
        else
          v19 = 0;
        v5 = v15 + *v16 - v19;
        v79 = v5;
        v4 = v17 - v6 + 1;
LABEL_26:
        if ( !PairCount )
          goto LABEL_27;
        v36 = Mcb->Mapping;
        v37 = PairCount - 1;
        if ( v36[2 * v37] <= v6 )
        {
LABEL_85:
          PairCount = v78;
          v52 = v36[2 * v78 - 2];
          if ( v52 == v6 )
          {
            v53 = v36[2 * v78 - 1];
            if ( v53 != -1 )
            {
              if ( v78 == 1 )
                v54 = 0;
              else
                v54 = v36[2 * v78 - 4];
              v8 = v52 + v53 - v54;
            }
            if ( v8 == v5 )
            {
              v36[2 * (Mcb->PairCount - 1)] = v52 + v4;
              return 0;
            }
          }
LABEL_27:
          if ( v6 && (!PairCount || *((_DWORD *)Mcb->Mapping + 2 * PairCount - 2) != v6) )
          {
            if ( (unsigned __int8)FsRtlAddEntry(Mcb, PairCount, 2LL) )
            {
              v35 = 8LL * PairCount;
              *(_DWORD *)((char *)Mcb->Mapping + v35 + 4) = -1;
              *(_DWORD *)((char *)Mcb->Mapping + v35) = v6;
              v24 = 8LL * (PairCount + 1);
              *(_DWORD *)((char *)Mcb->Mapping + v24 + 4) = v5;
LABEL_33:
              *(_DWORD *)((char *)Mcb->Mapping + v24) = v6 + v4;
              return 0;
            }
            return -1073741670;
          }
          MaximumPairCount = Mcb->MaximumPairCount;
          if ( Mcb->PairCount + 1 <= Mcb->MaximumPairCount )
          {
            v22 = (char *)Mcb->Mapping;
LABEL_30:
            v23 = Mcb->PairCount;
            if ( PairCount < v23 )
            {
              memmove(
                (char *)Mcb->Mapping + 8 * PairCount + 8,
                (char *)Mcb->Mapping + 8 * PairCount,
                8LL * (v23 - PairCount));
              v22 = (char *)Mcb->Mapping;
            }
            ++Mcb->PairCount;
            v24 = 8LL * PairCount;
            *(_DWORD *)&v22[v24 + 4] = v5;
            goto LABEL_33;
          }
          v47 = 2 * MaximumPairCount;
          if ( MaximumPairCount >= 0x800 )
            v47 = MaximumPairCount + 2048;
          v48 = 8LL * v47;
          v49 = v47;
          if ( v48 <= 0xFFFFFFFF )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)Mcb->PoolType, (unsigned int)v48, 0x6D695346u);
            v22 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Mcb->Mapping, 8LL * Mcb->PairCount);
              if ( Mcb->MaximumPairCount == 15 )
              {
                v51 = Mcb->Mapping;
                if ( Mcb->PoolType == 1 )
                  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlFirstPagedMappingLookasideList, v51);
                else
                  ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, v51);
                Mcb->Mapping = v22;
                Mcb->MaximumPairCount = v49;
              }
              else
              {
                ExFreePoolWithTag(Mcb->Mapping, 0);
                Mcb->Mapping = v22;
                Mcb->MaximumPairCount = v49;
              }
              goto LABEL_30;
            }
          }
          if ( (Mcb->Flags & 1) != 0 )
            RtlRaiseStatus(-1073741670);
          return -1073741670;
        }
        v38 = v77;
        for ( i = 0; ; i = v40 + 1 )
        {
          while ( 1 )
          {
            if ( i > v38 )
            {
              v8 = 0;
              goto LABEL_85;
            }
            v40 = (v38 + i) / 2;
            v41 = v40;
            if ( !v40 || v6 >= v36[2 * v40 - 2] )
              break;
            v38 = v40 - 1;
          }
          if ( v6 <= v36[2 * v40] - 1 )
            break;
        }
        v26 = 8LL * v40;
        v27 = v6 + v4;
        v28 = v6 + v4 - 1;
        if ( v36[(unsigned __int64)v26 / 4 + 1] == -1 )
        {
          v42 = v40 - 1;
          if ( !v40 || v36[2 * v42] <= v6 )
          {
            v43 = v36[2 * v40] - 1;
            if ( v28 <= v43 )
            {
              v44 = 0;
              if ( v40 )
                v45 = v36[2 * v42];
              else
                v45 = 0;
              if ( v45 < v6 && v28 < v43 )
              {
                if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v40, 2LL) )
                  return -1073741670;
                v46 = (unsigned int)(v41 + 1);
                *(_DWORD *)((char *)Mcb->Mapping + v26 + 4) = -1;
                *(_DWORD *)((char *)Mcb->Mapping + v26) = v6;
                *((_DWORD *)Mcb->Mapping + 2 * v46 + 1) = v79;
                *((_DWORD *)Mcb->Mapping + 2 * v46) = v27;
                return 0;
              }
              v55 = 2 * v42;
              v56 = 0;
              if ( (_DWORD)v41 )
                v56 = v36[2 * v42];
              if ( v56 == v6 && v28 < v43 )
              {
                v57 = &v36[v55];
                if ( (_DWORD)v41 )
                {
                  v58 = v57[1];
                  if ( v58 != -1 )
                  {
                    if ( (_DWORD)v41 == 1 )
                      v59 = 0;
                    else
                      v59 = v36[2 * (unsigned int)(v41 - 2)];
                    v44 = *v57 + v58 - v59;
                  }
                }
                if ( v44 == v79 )
                {
                  if ( (_DWORD)v41 )
                  {
                    *v57 += v4;
                    return 0;
                  }
                  if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
                  {
                    *((_DWORD *)Mcb->Mapping + 1) = v79;
                    *(_DWORD *)Mcb->Mapping = v4;
                    return 0;
                  }
                }
                else if ( (unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v41, 1LL) )
                {
                  *(_DWORD *)((char *)Mcb->Mapping + v26 + 4) = v79;
                  *(_DWORD *)((char *)Mcb->Mapping + v26) = v27;
                  return 0;
                }
                return -1073741670;
              }
              if ( (_DWORD)v41 )
                v60 = v36[2 * v42];
              else
                v60 = 0;
              v61 = &v36[v55];
              if ( v60 < v6 && v28 == v43 )
              {
                v62 = (unsigned int)(v41 + 1);
                v63 = -1;
                if ( (unsigned int)v41 < v77 )
                  v63 = v36[2 * v62 + 1];
                if ( v63 == v79 + v4 )
                {
                  v36[2 * v41] = v6;
                  *((_DWORD *)Mcb->Mapping + 2 * v62 + 1) = v79;
                  return 0;
                }
                if ( (unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v41, 1LL) )
                {
                  *(_DWORD *)((char *)Mcb->Mapping + v26 + 4) = -1;
                  *(_DWORD *)((char *)Mcb->Mapping + v26) = v6;
                  *((_DWORD *)Mcb->Mapping + 2 * v62 + 1) = v79;
                  return 0;
                }
                return -1073741670;
              }
              v64 = 0;
              if ( (_DWORD)v41 )
              {
                v66 = v61[1];
                if ( v66 == -1 )
                {
                  v65 = 0;
                }
                else
                {
                  if ( (_DWORD)v41 == 1 )
                    v67 = 0;
                  else
                    v67 = v36[2 * (unsigned int)(v41 - 2)];
                  v65 = *v61 + v66 - v67;
                }
              }
              else
              {
                v65 = 0;
              }
              if ( v65 != v79 )
                goto LABEL_142;
              v68 = (unsigned int)(v41 + 1);
              v69 = -1;
              if ( (unsigned int)v41 < v77 )
                v69 = v36[2 * v68 + 1];
              if ( v69 == v79 + v4 )
              {
                if ( !(_DWORD)v41 )
                {
                  v36[3] = v79;
                  v70 = 1LL;
                  v71 = 0LL;
LABEL_157:
                  FsRtlRemoveLargeEntry(Mcb, v71, v70);
                  return 0;
                }
                v70 = 2LL;
                *v61 = v36[2 * v68];
              }
              else
              {
LABEL_142:
                if ( (unsigned int)v41 < (unsigned int)v37 )
                  v72 = v36[2 * (unsigned int)(v41 + 1) + 1];
                else
                  v72 = -1;
                if ( v72 == v79 + v4 )
                {
                  v36[2 * (unsigned int)(v41 + 1) + 1] = v79;
                }
                else
                {
                  if ( !(_DWORD)v41 )
                    goto LABEL_158;
                  v73 = (unsigned int)(v41 - 1);
                  v74 = v36[2 * v73 + 1];
                  v75 = &v36[2 * v73];
                  if ( v74 != -1 )
                  {
                    if ( (_DWORD)v41 == 1 )
                      v76 = 0;
                    else
                      v76 = v36[2 * (unsigned int)(v41 - 2)];
                    v64 = v74 + *v75 - v76;
                  }
                  if ( v64 != v79 )
                  {
LABEL_158:
                    v36[2 * v41 + 1] = v79;
                    return 0;
                  }
                  *v75 = v36[2 * v41];
                }
                v70 = 1LL;
              }
              v71 = (unsigned int)v41;
              goto LABEL_157;
            }
          }
        }
      }
      return -1073741823;
    }
    v29 = 0;
    v30 = PairCount - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v29 > v30 )
          goto LABEL_25;
        v31 = (v30 + v29) / 2;
        v32 = (unsigned int)v31;
        if ( !v31 || v17 >= Mapping[2 * v31 - 2] )
          break;
        v30 = v31 - 1;
      }
      if ( v17 <= Mapping[2 * v31] - 1 )
        break;
      v29 = v31 + 1;
    }
    v33 = (unsigned int)(v31 - 1);
    if ( v13 == (_DWORD)v33 )
    {
      v34 = 0;
      if ( (_DWORD)v32 )
        v34 = Mapping[2 * v33];
      if ( Mapping[2 * v32 + 1] != v5 + v34 - (_DWORD)Vbn )
        return -1073741823;
      if ( (_DWORD)v32 )
        v20 = Mapping[2 * v33];
      else
        v20 = 0;
      v4 = v20 - Vbn;
    }
LABEL_25:
    v8 = 0;
    goto LABEL_26;
  }
  return -1073741811;
}
