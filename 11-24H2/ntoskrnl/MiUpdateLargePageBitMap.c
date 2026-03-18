/*
 * XREFs of MiUpdateLargePageBitMap @ 0x1403A29EC
 * Callers:
 *     MiLinkPoolCommitChain @ 0x14023F6A0 (MiLinkPoolCommitChain.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiFreeMdlPageRun @ 0x1403A1D8C (MiFreeMdlPageRun.c)
 *     MiFreeLargePageMemory @ 0x1403A3588 (MiFreeLargePageMemory.c)
 *     MiFreeLargeZeroPages @ 0x1403A67F0 (MiFreeLargeZeroPages.c)
 *     MiFreeContiguousPages @ 0x1403A95E8 (MiFreeContiguousPages.c)
 *     MiRebuildLargePage @ 0x1403D2BAC (MiRebuildLargePage.c)
 *     MiGetFastLargePages @ 0x1403D5E44 (MiGetFastLargePages.c)
 *     MiFindLargeNodePage @ 0x1403D6288 (MiFindLargeNodePage.c)
 *     MiDemoteSlabEntry @ 0x140442F50 (MiDemoteSlabEntry.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CA9A4 (MiDeleteSubsectionLargePages.c)
 *     MiInitializeDynamicPfns @ 0x14066D8BC (MiInitializeDynamicPfns.c)
 *     MiFreeContiguousLargePageRun @ 0x1406821E4 (MiFreeContiguousLargePageRun.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140683AC8 (MiDemoteValidLargePageOneLevel.c)
 *     MiActOnPartitionNodePages @ 0x140688F24 (MiActOnPartitionNodePages.c)
 *     MiDemotePfnListChain @ 0x14069234C (MiDemotePfnListChain.c)
 *     MiCompleteMemoryAddition @ 0x1407E901C (MiCompleteMemoryAddition.c)
 *     MiFreeBootPageTable @ 0x140C4F170 (MiFreeBootPageTable.c)
 *     MiMarkLargePagePte @ 0x140C4FE80 (MiMarkLargePagePte.c)
 *     MiMarkLargePageRanges @ 0x140C4FF0C (MiMarkLargePageRanges.c)
 *     MiCreateEnclaveRegions @ 0x140C57EDC (MiCreateEnclaveRegions.c)
 *     MiCreateBootSlabEntries @ 0x140C58FDC (MiCreateBootSlabEntries.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 */

void __fastcall MiUpdateLargePageBitMap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // r15
  int v6; // r14d
  __int64 v9; // rdx
  int v10; // r12d
  BOOL v11; // r9d
  unsigned __int64 *v12; // rsi
  int v13; // ecx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // r8
  __int64 *v22; // r9
  unsigned __int64 v23; // rax
  bool v24; // zf
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rbp
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // r9
  unsigned __int8 v31; // al
  bool k; // zf
  unsigned __int64 v33; // rcx
  __int64 *v34; // rdx
  __int64 v35; // r9
  __int64 *v36; // r10
  unsigned __int64 v37; // rax
  bool i; // zf
  unsigned __int64 v39; // rcx
  __int64 *v40; // rdx
  __int64 v41; // r8
  __int64 *v42; // r9
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rbp
  __int64 *v46; // r10
  __int64 *v47; // rdi
  __int64 v48; // rdx
  bool j; // zf
  __int64 v50; // rdx
  char v52; // [rsp+70h] [rbp+18h]
  KIRQL v53; // [rsp+78h] [rbp+20h]

  LODWORD(v5) = 2;
  v6 = a4 & 1;
  v9 = a1;
  if ( a3 >= 0x200 )
  {
    v53 = 17;
    v10 = 0;
    v11 = (a4 & 2) != 0;
    while ( 1 )
    {
      v5 = (unsigned int)(v5 - 1);
      v12 = (unsigned __int64 *)(16LL * (unsigned int)v5 + v9 + 16328);
      if ( !*v12 )
      {
LABEL_11:
        if ( v10 )
          MiReleaseSpinLockExclusive(&dword_140E2EDC0, v53);
        return;
      }
      v13 = MiLargePageShifts[v5];
      v14 = a2 >> v13;
      v52 = v13;
      v15 = (~(MiPageSizes[v5] - 1) & (a3 + a2 + MiPageSizes[v5] - 1)) >> v13;
      v16 = v15 - (a2 >> v13);
      if ( !v11 )
        break;
LABEL_19:
      if ( !v10 )
      {
        v10 = 1;
        if ( (a4 & 4) != 0 )
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EDC0);
        else
          v53 = ExAcquireSpinLockExclusive(&dword_140E2EDC0);
      }
      if ( v6 )
        RtlSetBitsEx(v12, v14, v16);
      else
        RtlClearBitsEx((__int64)v12, v14, v16);
      if ( !(_DWORD)v5 )
        goto LABEL_11;
      v25 = (unsigned __int64)MiPageSizes[(unsigned int)(v5 - 1)] >> v52;
      v26 = ~(v25 - 1);
      v27 = v26 & (v25 + v15 - 1);
      v28 = v26 & v14;
      v29 = v27 - v28;
      if ( v6 )
      {
        if ( v28 >= *v12 )
          goto LABEL_30;
        if ( v25 > 1 )
        {
          if ( *v12 - v28 < v25 )
            goto LABEL_30;
          v33 = v12[1];
          v34 = (__int64 *)(v33 + 8 * (v28 >> 6));
          v35 = *v34;
          v36 = (__int64 *)(v33 + 8 * ((v28 + v25 - 1) >> 6));
          if ( v34 == v36 )
          {
            v37 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v25) << v28;
LABEL_47:
            if ( (v37 & v35) == v37 )
              goto LABEL_32;
          }
          else
          {
            for ( i = ((-1LL << v28) & v35) == -1LL << v28; i; i = v35 == -1 )
            {
              v35 = *++v34;
              if ( v34 == v36 )
              {
                v37 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v28 + (unsigned __int8)v25 - 1);
                goto LABEL_47;
              }
            }
          }
LABEL_30:
          v29 -= v25;
          if ( !v29 )
            goto LABEL_11;
          v28 += v25;
        }
        else if ( v25 != 1 || !_bittest64((const signed __int64 *)(v12[1] + 8 * (v28 >> 6)), v28 & 0x3F) )
        {
          goto LABEL_30;
        }
LABEL_32:
        v30 = v27 - v25;
        if ( v27 - v25 < *v12 )
        {
          if ( v25 > 1 )
          {
            if ( *v12 - v30 >= v25 )
            {
              v44 = v12[1];
              v45 = v27 - 1;
              v46 = (__int64 *)(v44 + 8 * (v30 >> 6));
              v47 = (__int64 *)(v44 + 8 * (v45 >> 6));
              v48 = *v46;
              if ( v46 == v47 )
              {
                v31 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v25) << v30) & v48) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v25) << v30;
                goto LABEL_36;
              }
              for ( j = ((-1LL << v30) & v48) == -1LL << v30; j; j = v50 == -1 )
              {
                v50 = *++v46;
                if ( v46 == v47 )
                {
                  if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v45) & v50) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v45 )
                    goto LABEL_37;
                  break;
                }
              }
            }
          }
          else if ( v25 == 1 )
          {
            v31 = _bittest64((const signed __int64 *)(v12[1] + 8 * (v30 >> 6)), ((_BYTE)v27 - 1) & 0x3F);
LABEL_36:
            if ( v31 )
              goto LABEL_37;
          }
        }
        v29 -= v25;
        if ( !v29 )
          goto LABEL_11;
      }
LABEL_37:
      v9 = a1;
      v11 = v6;
      a2 = v28 << v52;
      a3 = v29 << v52;
    }
    v17 = *v12;
    if ( v6 )
    {
      if ( v14 < v17 )
      {
        if ( v16 > 1 )
        {
          if ( v17 - v14 >= v16 )
          {
            v39 = v12[1];
            v40 = (__int64 *)(v39 + 8 * (v14 >> 6));
            v41 = *v40;
            v42 = (__int64 *)(v39 + 8 * ((v15 - 1) >> 6));
            if ( v40 == v42 )
            {
              v43 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v14;
            }
            else
            {
              if ( ((-1LL << v14) & v41) != -1LL << v14 )
                goto LABEL_66;
              while ( 1 )
              {
                v41 = *++v40;
                if ( v40 == v42 )
                  break;
                if ( v41 != -1 )
                  goto LABEL_66;
              }
              v43 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v15 - 1);
            }
            v24 = (v43 & v41) == v43;
LABEL_18:
            v18 = v24;
            goto LABEL_10;
          }
        }
        else if ( v16 == 1 )
        {
          v18 = _bittest64((const signed __int64 *)(v12[1] + 8 * (v14 >> 6)), (a2 >> v13) & 0x3F);
          goto LABEL_10;
        }
      }
    }
    else if ( v14 < v17 )
    {
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
        {
          v18 = !_bittest64((const signed __int64 *)(v12[1] + 8 * (a2 >> v13 >> 6)), (a2 >> v13) & 0x3F);
          goto LABEL_10;
        }
        goto LABEL_66;
      }
      if ( v17 - v14 >= v16 )
      {
        v19 = v12[1];
        v20 = (__int64 *)(v19 + 8 * (v14 >> 6));
        v21 = *v20;
        v22 = (__int64 *)(v19 + 8 * ((v15 - 1) >> 6));
        if ( v20 == v22 )
        {
          v23 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v14;
LABEL_17:
          v24 = (v21 & v23) == 0;
          goto LABEL_18;
        }
        for ( k = (v21 & (-1LL << v14)) == 0; k; k = v21 == 0 )
        {
          v21 = *++v20;
          if ( v20 == v22 )
          {
            v23 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v15 - 1);
            goto LABEL_17;
          }
        }
      }
    }
LABEL_66:
    v18 = 0;
LABEL_10:
    if ( v18 )
      goto LABEL_11;
    goto LABEL_19;
  }
}
