/*
 * XREFs of MiUpdateLargePageBitMap @ 0x140219EE0
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 *     MiFreeMdlPageRun @ 0x1402189BC (MiFreeMdlPageRun.c)
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiGetFastLargePages @ 0x14026499C (MiGetFastLargePages.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiDemoteSlabEntry @ 0x14043BE9C (MiDemoteSlabEntry.c)
 *     MiDeleteSubsectionLargePages @ 0x1404C3EC4 (MiDeleteSubsectionLargePages.c)
 *     MiFindLargeNodePage @ 0x1404CB09C (MiFindLargeNodePage.c)
 *     MiInitializeDynamicPfns @ 0x14066EA90 (MiInitializeDynamicPfns.c)
 *     MiFreeContiguousLargePageRun @ 0x1406833D4 (MiFreeContiguousLargePageRun.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140684C24 (MiDemoteValidLargePageOneLevel.c)
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiDemotePfnListChain @ 0x14069341C (MiDemotePfnListChain.c)
 *     MiCompleteMemoryAddition @ 0x1407E95EC (MiCompleteMemoryAddition.c)
 *     MiFreeBootPageTable @ 0x140C51300 (MiFreeBootPageTable.c)
 *     MiMarkLargePagePte @ 0x140C52010 (MiMarkLargePagePte.c)
 *     MiMarkLargePageRanges @ 0x140C5209C (MiMarkLargePageRanges.c)
 *     MiCreateEnclaveRegions @ 0x140C5A06C (MiCreateEnclaveRegions.c)
 *     MiCreateBootSlabEntries @ 0x140C5B16C (MiCreateBootSlabEntries.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

char __fastcall MiUpdateLargePageBitMap(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // r15
  int v6; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v10; // rdx
  int v11; // r12d
  BOOL v12; // r9d
  unsigned __int64 *v13; // rsi
  int v14; // ecx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  bool v23; // zf
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // r9
  bool i; // zf
  unsigned __int64 v31; // rcx
  __int64 v32; // r9
  unsigned __int64 v33; // r10
  bool j; // zf
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rbp
  __int64 *v41; // r10
  __int64 *v42; // rdi
  __int64 v43; // rdx
  bool k; // zf
  char v47; // [rsp+70h] [rbp+18h]
  KIRQL v48; // [rsp+78h] [rbp+20h]

  LODWORD(v5) = 2;
  v6 = a4 & 1;
  LODWORD(v7) = a4 & 2;
  v10 = a1;
  if ( a3 < 0x200 )
    return v7;
  v48 = 17;
  v11 = 0;
  v12 = v7 != 0;
  while ( 1 )
  {
    v5 = (unsigned int)(v5 - 1);
    v7 = 16LL * (unsigned int)v5;
    v13 = (unsigned __int64 *)(v7 + v10 + 16328);
    if ( !*v13 )
      break;
    v14 = MiLargePageShifts[v5];
    v10 = MiPageSizes[v5];
    v15 = a2 >> v14;
    v47 = v14;
    v16 = (~(v10 - 1) & (a3 + a2 + v10 - 1)) >> v14;
    v17 = v16 - (a2 >> v14);
    if ( v12 )
      goto LABEL_19;
    v18 = *v13;
    if ( v6 )
    {
      if ( v15 < v18 )
      {
        if ( v17 > 1 )
        {
          if ( v18 - v15 >= v17 )
          {
            v35 = v13[1];
            v10 = v35 + 8 * (v15 >> 6);
            v36 = *(_QWORD *)v10;
            v37 = v35 + 8 * ((v16 - 1) >> 6);
            if ( v10 == v37 )
            {
              v38 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17) << v15;
              goto LABEL_62;
            }
            if ( ((-1LL << v15) & v36) == -1LL << v15 )
            {
              while ( 1 )
              {
                v10 += 8LL;
                v36 = *(_QWORD *)v10;
                if ( v10 == v37 )
                  break;
                if ( v36 != -1 )
                  goto LABEL_66;
              }
              v38 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v16 - 1);
LABEL_62:
              v23 = (v38 & v36) == v38;
LABEL_18:
              LOBYTE(v7) = v23;
              goto LABEL_10;
            }
          }
        }
        else if ( v17 == 1 )
        {
          v10 = (a2 >> v14) & 0x3F;
          LOBYTE(v7) = _bittest64((const signed __int64 *)(v13[1] + 8 * (v15 >> 6)), v10);
          goto LABEL_10;
        }
      }
    }
    else if ( v15 < v18 )
    {
      if ( v17 > 1 )
      {
        if ( v18 - v15 >= v17 )
        {
          v19 = v13[1];
          v10 = v19 + 8 * (v15 >> 6);
          v20 = *(_QWORD *)v10;
          v21 = v19 + 8 * ((v16 - 1) >> 6);
          if ( v10 == v21 )
          {
            v22 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v17) << v15;
LABEL_17:
            v23 = (v20 & v22) == 0;
            goto LABEL_18;
          }
          for ( i = (v20 & (-1LL << v15)) == 0; i; i = v20 == 0 )
          {
            v10 += 8LL;
            v20 = *(_QWORD *)v10;
            if ( v10 == v21 )
            {
              v22 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v16 - 1);
              goto LABEL_17;
            }
          }
        }
      }
      else if ( v17 == 1 )
      {
        v10 = (a2 >> v14) & 0x3F;
        LOBYTE(v7) = !_bittest64((const signed __int64 *)(v13[1] + 8 * (v15 >> 6)), v10);
        goto LABEL_10;
      }
    }
LABEL_66:
    LOBYTE(v7) = 0;
LABEL_10:
    if ( (_BYTE)v7 )
      break;
LABEL_19:
    if ( !v11 )
    {
      v11 = 1;
      if ( (a4 & 4) != 0 )
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EF00);
      else
        v48 = ExAcquireSpinLockExclusive(&dword_140E2EF00);
    }
    if ( v6 )
      LOBYTE(v7) = RtlSetBitsEx(v13, v15, v17);
    else
      LOBYTE(v7) = RtlClearBitsEx(v13, v15, v17);
    if ( !(_DWORD)v5 )
      break;
    v24 = (unsigned __int64)MiPageSizes[(unsigned int)(v5 - 1)] >> v47;
    v25 = ~(v24 - 1);
    v26 = v25 & (v24 + v16 - 1);
    v27 = v25 & v15;
    v28 = v26 - v27;
    if ( v6 )
    {
      v7 = *v13;
      if ( v27 >= *v13 )
        goto LABEL_30;
      if ( v24 > 1 )
      {
        v7 -= v27;
        if ( v7 < v24 )
          goto LABEL_30;
        v31 = v13[1];
        v10 = v31 + 8 * (v27 >> 6);
        v32 = *(_QWORD *)v10;
        v33 = v31 + 8 * ((v27 + v24 - 1) >> 6);
        if ( v10 == v33 )
        {
          v7 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v24) << v27;
LABEL_47:
          if ( (v7 & v32) == v7 )
            goto LABEL_32;
        }
        else
        {
          v7 = -1LL << v27;
          for ( j = ((-1LL << v27) & v32) == -1LL << v27; j; j = v32 == -1 )
          {
            v10 += 8LL;
            v32 = *(_QWORD *)v10;
            if ( v10 == v33 )
            {
              v7 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v27 + (unsigned __int8)v24 - 1);
              goto LABEL_47;
            }
          }
        }
LABEL_30:
        v28 -= v24;
        if ( !v28 )
          break;
        v27 += v24;
      }
      else
      {
        if ( v24 != 1 )
          goto LABEL_30;
        v10 = v27 & 0x3F;
        LOBYTE(v7) = _bittest64((const signed __int64 *)(v13[1] + 8 * (v27 >> 6)), v10);
        if ( !(_BYTE)v7 )
          goto LABEL_30;
      }
LABEL_32:
      v7 = *v13;
      v29 = v26 - v24;
      if ( v26 - v24 < *v13 )
      {
        if ( v24 > 1 )
        {
          v7 -= v29;
          if ( v7 >= v24 )
          {
            v39 = v13[1];
            v40 = v26 - 1;
            v41 = (__int64 *)(v39 + 8 * (v29 >> 6));
            v42 = (__int64 *)(v39 + 8 * (v40 >> 6));
            v43 = *v41;
            if ( v41 == v42 )
            {
              v7 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v24) << v29;
              v10 = v7 & v43;
              LOBYTE(v7) = v10 == v7;
              goto LABEL_36;
            }
            v7 = -1LL << v29;
            v10 = (-1LL << v29) & v43;
            for ( k = v10 == -1LL << v29; k; k = v10 == -1LL )
            {
              v10 = *++v41;
              if ( v41 == v42 )
              {
                v7 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v40;
                v10 &= v7;
                if ( v10 == v7 )
                  goto LABEL_37;
                break;
              }
            }
          }
        }
        else if ( v24 == 1 )
        {
          LOBYTE(v7) = _bittest64((const signed __int64 *)(v13[1] + 8 * (v29 >> 6)), ((_BYTE)v26 - 1) & 0x3F);
LABEL_36:
          if ( (_BYTE)v7 )
            goto LABEL_37;
        }
      }
      v28 -= v24;
      if ( !v28 )
        break;
    }
LABEL_37:
    v10 = a1;
    v12 = v6;
    a2 = v27 << v47;
    a3 = v28 << v47;
  }
  if ( v11 )
  {
    LOBYTE(v10) = v48;
    LOBYTE(v7) = MiReleaseSpinLockExclusive(&dword_140E2EF00, v10);
  }
  return v7;
}
