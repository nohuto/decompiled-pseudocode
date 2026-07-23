/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x1403BF560
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x1403BF1F0 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x1403BFF80 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x1403C0240 (FsRtlRemoveLargeEntry.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  LONGLONG v3; // rbp
  LONGLONG v4; // rsi
  ULONG v6; // r10d
  int v7; // r8d
  unsigned int v8; // r14d
  int v9; // r9d
  unsigned int v10; // eax
  __int64 v11; // rbx
  int v12; // edx
  unsigned int v13; // eax
  _DWORD *Mapping; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // r11d
  int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // r11
  int v21; // r9d
  __int64 v22; // rax
  ULONG PairCount; // eax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  int v28; // r9d
  int v29; // ecx
  __int64 v30; // r9
  int v31; // r10d
  int v32; // r10d
  __int64 v33; // rax
  _DWORD *v34; // r10
  unsigned int v35; // r9d
  int v36; // r8d
  __int64 v37; // r8
  __int64 v38; // rdx
  int v39; // r15d
  int v40; // r8d
  __int64 v41; // r8
  _DWORD *v42; // rdx
  int v43; // r9d
  int v44; // r8d
  int v45; // eax
  int v46; // eax
  unsigned int v47; // r15d
  __int64 v48; // rcx
  __int64 v49; // rbx
  int v50; // eax

  v3 = SectorCount;
  v4 = Vbn;
  if ( !Vbn )
  {
    PairCount = Mcb->PairCount;
    if ( PairCount )
    {
      if ( SectorCount >= *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
      {
        Mcb->PairCount = 0;
        return 1;
      }
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      if ( v3 <= 0 )
        return 1;
      v6 = Mcb->PairCount;
      v7 = 0;
      v8 = v6 - 1;
      v9 = v6 - 1;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v7 > v9 )
            return 1;
          v10 = (v9 + v7) / 2;
          v11 = v10;
          if ( v10 )
          {
            v12 = v10 - 1;
            v13 = *((_DWORD *)Mcb->Mapping + 2 * (int)(v10 - 1));
          }
          else
          {
            v13 = 0;
            v12 = -1;
          }
          if ( (unsigned int)v4 >= v13 )
            break;
          v9 = v12;
        }
        Mapping = Mcb->Mapping;
        if ( (unsigned int)v4 <= Mapping[2 * (int)v11] - 1 )
          break;
        v7 = v11 + 1;
      }
      v15 = (unsigned int)(v11 - 1);
      v16 = (_DWORD)v11 ? (unsigned int)Mapping[2 * v15] : 0LL;
      if ( v16 != v4 )
        break;
      v17 = Mapping[2 * v11];
      if ( (unsigned int)(v17 - 1) >= v4 + v3 )
        break;
      if ( (_DWORD)v11 )
        v18 = Mapping[2 * v15];
      else
        v18 = 0;
      v19 = (unsigned int)(v17 - v18);
      v4 += v19;
      v3 -= v19;
      if ( Mapping[2 * v11 + 1] != -1 )
      {
        if ( (_DWORD)v11 == v8 )
        {
          if ( !(_DWORD)v11 )
            goto LABEL_65;
          v20 = &Mapping[2 * (unsigned int)v15];
          v21 = v20[1];
          if ( v21 != -1 )
          {
            v45 = (_DWORD)v11 == 1 ? 0 : Mapping[2 * (unsigned int)(v11 - 2)];
            if ( *v20 + v21 - v45 )
              goto LABEL_65;
          }
          v22 = (unsigned int)(v15 + 2);
          if ( (unsigned int)v22 < v6 )
            memmove(v20, &Mapping[2 * v22], 8LL * (v6 - (unsigned int)v15 - 2));
          Mcb->PairCount -= 2;
        }
        else
        {
          v30 = 2LL * (unsigned int)v15;
          if ( (_DWORD)v11
            && ((v31 = Mapping[v30 + 1], v31 == -1)
             || ((_DWORD)v11 == 1 ? (v46 = 0) : (v46 = Mapping[2 * (unsigned int)(v11 - 2)]), !(Mapping[v30] + v31 - v46))) )
          {
LABEL_43:
            v32 = Mapping[v30 + 1];
            if ( v32 == -1 )
              goto LABEL_44;
            v50 = (_DWORD)v11 == 1 ? 0 : Mapping[2 * (unsigned int)(v11 - 2)];
            if ( !(Mapping[v30] + v32 - v50) )
              goto LABEL_44;
LABEL_89:
            if ( (unsigned int)v11 < v8 && Mapping[2 * (unsigned int)(v11 + 1) + 1] != -1 )
            {
              if ( (_DWORD)v11 )
              {
LABEL_44:
                v33 = (unsigned int)(v11 - 1);
                v34 = &Mapping[2 * v33];
                v35 = v11 - 1;
                v36 = v34[1];
                if ( v36 != -1 )
                {
                  if ( (_DWORD)v11 != 1 )
                    LODWORD(v33) = Mapping[2 * (unsigned int)(v11 - 2)];
                  if ( *v34 + v36 - (_DWORD)v33 )
                    goto LABEL_59;
                }
              }
              else
              {
                v35 = -1;
              }
              if ( (unsigned int)v11 < v8 && Mapping[2 * (unsigned int)(v11 + 1) + 1] != -1 )
              {
                Mapping[2 * v11 + 1] = -1;
                v37 = 1LL;
LABEL_48:
                v38 = v35;
                goto LABEL_49;
              }
LABEL_59:
              v37 = 2LL;
              goto LABEL_48;
            }
LABEL_65:
            v37 = 1LL;
            v38 = (unsigned int)v11;
LABEL_49:
            FsRtlRemoveLargeEntry(Mcb, v38, v37);
          }
          else
          {
            if ( (unsigned int)v11 >= v8 || Mapping[2 * (unsigned int)(v11 + 1) + 1] == -1 )
            {
              if ( !(_DWORD)v11 )
                goto LABEL_89;
              goto LABEL_43;
            }
            Mapping[2 * v11 + 1] = -1;
          }
        }
      }
    }
    v25 = (_DWORD)v11 ? (unsigned int)Mapping[2 * v15] : 0LL;
    v26 = v11;
    if ( v25 == v4 )
      break;
    v39 = Mapping[2 * v11];
    v40 = Mapping[2 * v11 + 1];
    if ( (unsigned int)(v39 - 1) >= v4 + v3 )
    {
      if ( v40 == -1 )
        goto LABEL_40;
      if ( (unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v11, 2LL) )
      {
        v41 = (unsigned int)(v11 + 1);
        *((_DWORD *)Mcb->Mapping + 2 * v11 + 1) = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v11 + 2) + 1);
        *((_DWORD *)Mcb->Mapping + 2 * v11) = v4;
        *((_DWORD *)Mcb->Mapping + 2 * v41 + 1) = -1;
        *((_DWORD *)Mcb->Mapping + 2 * v41) = v4 + v3;
        v42 = Mcb->Mapping;
        if ( (_DWORD)v11 )
          v43 = v42[2 * (unsigned int)(v11 - 1)];
        else
          v43 = 0;
        if ( (_DWORD)v11 == -1 )
          v44 = 0;
        else
          v44 = v42[2 * v11];
        v42[2 * (unsigned int)(v11 + 2) + 1] += v42[2 * (unsigned int)(v11 + 1)] + v42[2 * v11] - v44 - v43;
        goto LABEL_40;
      }
      return 0;
    }
    v47 = v39 - v4;
    if ( v40 != -1 )
    {
      if ( (unsigned int)v11 < v6 - 1 )
      {
        v48 = (unsigned int)(v11 + 1);
        v49 = v48;
        if ( Mapping[2 * v48 + 1] == -1 )
        {
LABEL_75:
          Mapping[2 * v26] = v4;
          goto LABEL_76;
        }
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v48, 1LL) )
          return 0;
        *((_DWORD *)Mcb->Mapping + 2 * v49 + 1) = -1;
        *((_DWORD *)Mcb->Mapping + 2 * v49) = *((_DWORD *)Mcb->Mapping + 2 * v26);
        *((_DWORD *)Mcb->Mapping + 2 * v26) -= v47;
      }
      else
      {
        if ( (_DWORD)v11 != v6 - 1 )
          goto LABEL_75;
        Mapping[2 * v11] = v4;
      }
    }
LABEL_76:
    v4 += v47;
    v3 -= v47;
  }
  if ( Mapping[2 * v11 + 1] == -1 )
  {
LABEL_40:
    v4 += v3;
    v3 = 0LL;
    goto LABEL_2;
  }
  if ( (_DWORD)v11 )
  {
    v27 = (unsigned int)(v11 - 1);
    v28 = Mapping[2 * v27 + 1];
    if ( v28 == -1
      || ((_DWORD)v27 ? (v29 = Mapping[2 * (unsigned int)(v11 - 2)]) : (v29 = 0), !(v28 + Mapping[2 * v27] - v29)) )
    {
      Mapping[2 * v27] += v3;
      *((_DWORD *)Mcb->Mapping + 2 * v11 + 1) += v3;
      goto LABEL_40;
    }
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v11, 1LL) )
  {
    *((_DWORD *)Mcb->Mapping + 2 * v11 + 1) = -1;
    *((_DWORD *)Mcb->Mapping + 2 * v11) = v4 + v3;
    *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v11 + 1) + 1) += v3;
    goto LABEL_40;
  }
  return 0;
}
