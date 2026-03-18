/*
 * XREFs of MiGetPageChain @ 0x1402FCDC0
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiGetHardFaultPages @ 0x1402D0AC8 (MiGetHardFaultPages.c)
 *     MiGetPoolPages @ 0x1402E9F58 (MiGetPoolPages.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402FE070 (MiResolvePrivateZeroFault.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiMakeLinkedListPte @ 0x1402D1A40 (MiMakeLinkedListPte.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiGetLargePagesForChain @ 0x1402F32E0 (MiGetLargePagesForChain.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402FBB90 (MiGetPageChainSmallPageProcess.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiGetPageChainYield @ 0x1403CF100 (MiGetPageChainYield.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MiPageAvailable @ 0x140442ECC (MiPageAvailable.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x1404519BC (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiPerformFinalZeroing @ 0x1404F8564 (MiPerformFinalZeroing.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall MiGetPageChain(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 *v3; // r15
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  int v9; // edx
  unsigned int v10; // ecx
  unsigned __int32 v11; // edx
  __int64 v12; // rax
  unsigned int v13; // edi
  int v14; // edx
  __int64 SlabPage; // r13
  unsigned int v16; // ecx
  int v17; // r8d
  unsigned int v18; // r15d
  __int64 v19; // rdi
  int v20; // ecx
  int v21; // eax
  char v22; // r10
  int v23; // ecx
  signed __int64 v24; // rdx
  signed __int64 v25; // r8
  signed __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  unsigned int i; // edi
  __int64 *v30; // rcx
  __int64 *v31; // rcx
  __int64 *j; // rdx
  int v33; // ecx
  unsigned int v34; // eax
  __int64 Page; // rax
  __int64 v36; // rax
  __int64 *v37; // rax
  unsigned int v38; // r9d
  char v39; // r8
  __int64 v40; // rcx
  __int64 LinkedListPte; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rdi
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // ecx
  signed __int32 v50[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 *v51; // [rsp+20h] [rbp-88h]
  unsigned int v52; // [rsp+28h] [rbp-80h]
  int v53; // [rsp+30h] [rbp-78h]
  __int64 *v54; // [rsp+38h] [rbp-70h]
  int v55; // [rsp+40h] [rbp-68h]
  int v56; // [rsp+44h] [rbp-64h]
  int v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+50h] [rbp-58h] BYREF
  __int64 v59; // [rsp+58h] [rbp-50h]
  __int64 v60; // [rsp+60h] [rbp-48h]
  __int64 v61; // [rsp+68h] [rbp-40h]

  v1 = (_QWORD *)a1[9];
  if ( v1 )
    *v1 = 0LL;
  v3 = a1 + 7;
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_DWORD *)a1 + 12) >> 9;
  v6 = 0;
  v58 = 0x7FFFFFFFFFLL;
  v7 = v5 & 0x3F;
  v59 = 0LL;
  v60 = 0x7FFFFFFFFFLL;
  v8 = 0;
  v61 = 0LL;
  v57 = v5;
  while ( 2 )
  {
    v54 = v3;
    if ( v8 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_37;
    v6 &= ~1u;
    v9 = *(_DWORD *)(qword_140E2DAD0 + 4LL * (v8 + v7 * (unsigned __int16)KeNumberNodes));
    *((_DWORD *)a1 + 12) ^= ((unsigned __int16)*((_DWORD *)a1 + 12) ^ (unsigned __int16)((_WORD)v9 << 9)) & 0x7E00;
    if ( (*((_BYTE *)a1 + 28) & 0xF) == 9 )
    {
      if ( *v3 == -1 )
      {
        if ( a1[10] - a1[13] >= 0x10uLL )
        {
          v6 |= 1u;
          MiGetLargePagesForChain((__int64)a1, v9);
          v36 = a1[13];
          if ( v36 )
          {
            if ( v36 == a1[10] || (unsigned int)MiGetPageChainYield(a1, 0LL) )
              break;
          }
        }
      }
      else
      {
        v4 |= 0x40u;
      }
    }
    if ( (v6 & 1) != 0 && a1[10] - a1[13] >= 0x10uLL && (a1[4] & 0x3000) == 0 && (unsigned __int16)KeNumberNodes > 1u )
      v4 |= 0x31000u;
    while ( 1 )
    {
      v10 = *((_DWORD *)a1 + 12);
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)a1[5], 1u) % *(&MiState + (HIWORD(v10) & 3) + 1120);
      v12 = *v3;
      v13 = v10 ^ (unsigned __int8)(v10 ^ v11);
      if ( *v3 == -1 )
      {
        v14 = *((_DWORD *)a1 + 7) & 0xF;
        if ( v14 == 9 )
          break;
        v37 = (__int64 *)a1[9];
        v52 = 0;
        v51 = v37;
        v38 = (v4 >> 12) & 1 | 0x10;
        if ( (v4 & 1) == 0 )
          v38 = (v4 >> 12) & 1;
        SlabPage = MiGetSlabPage(*a1, v14, v13, v38, v51, v52);
        if ( SlabPage == -1 )
          goto LABEL_26;
      }
      else
      {
        v46 = 15LL;
        if ( (unsigned int)dword_140E2DBCC < 0xFuLL )
          v46 = (unsigned int)dword_140E2DBCC;
        v47 = v46 & v12;
        *v54 = v47;
        v13 = (unsigned __int8)(v11 ^ ((unsigned int)v47
                                     % *(&MiState + (((v10 ^ (unsigned __int8)(v10 ^ v11)) >> 16) & 3) + 1120))) ^ v10 ^ (unsigned __int8)(v10 ^ v11);
        SlabPage = MiGetPage(*a1, v13, v4);
        v48 = v46 & (*v54 + 1);
        v3 = v54;
        *v54 = v48;
        v49 = v4 & 0xFFFFFFBF;
        if ( SlabPage != -1 )
          v49 = v4;
        v4 = v49;
      }
      if ( SlabPage == -1 )
        break;
LABEL_12:
      v16 = v4;
      v4 |= 0x40u;
      if ( *v3 == -1 )
        v4 = v16;
      if ( (v4 & 0x20000) != 0 && (v6 & 2) == 0 && (unsigned int)MiPageToNode(SlabPage) != v7 )
      {
        v44 = *((unsigned int *)a1 + 8);
        LODWORD(v44) = v44 | 0x1000;
        v45 = SlabPage;
        SlabPage = MiSwapNumaStandbyPage(SlabPage, v7, 0LL, v44);
        if ( SlabPage == v45 )
          v6 |= 2u;
      }
      v17 = *((_DWORD *)a1 + 8);
      v18 = (*((_DWORD *)a1 + 12) >> 18) & 3;
      v19 = 48 * SlabPage - 0x220000000000LL;
      v20 = (unsigned __int8)BYTE2(*(_DWORD *)(v19 + 32)) >> 6;
      if ( v20 != v18 && ((unsigned __int8)((1 << v20) | (1 << v18)) & (unsigned __int8)byte_140E2DBD8) != 0 )
      {
        *(_QWORD *)(v19 + 16) = MiMakeLinkedListPte(v58);
        v58 = SlabPage;
        if ( ++v59 == 16 )
          MiPerformFinalZeroing(&v58, v18, v39 & 1);
        goto LABEL_23;
      }
      v53 = 0;
      v21 = v17 & 1;
      v55 = 16 * v21;
      v22 = 2 * v21;
      v56 = 2 * v21;
      if ( (v17 & 0x20) != 0 && (*(_QWORD *)(v19 + 16) & 0x3E0LL) != 0 )
      {
        MiZeroPhysicalPage(0LL, SlabPage, v22, v18);
        *(_QWORD *)(v19 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        MiSetPfnTbFlushStamp(48 * SlabPage - 0x220000000000LL, 0LL, 0);
        v22 = v56;
        v53 = 1;
      }
      v23 = (unsigned __int8)BYTE2(*(_DWORD *)(v19 + 32)) >> 6;
      if ( v23 == v18 )
        goto LABEL_20;
      if ( v23 != 1 )
      {
        if ( v23 == 3
          || (v40 = (*(_QWORD *)(v19 + 24) >> 59) & 7LL, ((*(_QWORD *)(v19 + 24) >> 59) & 7) != 0)
          && (_InterlockedOr(v50, 0),
              !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v40, (unsigned int)KiTbFlushTimeStamp, 7LL)) )
        {
          MiChangePageAttribute(48 * SlabPage - 0x220000000000LL, v18);
LABEL_20:
          if ( !v53 )
          {
            v24 = *(_QWORD *)(v19 + 24);
            v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), v24 & 0xC7FFFFFFFFFFFFFFuLL, v24);
            if ( v24 != v25 )
            {
              do
              {
                v26 = v25;
                v25 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v19 + 24),
                        v25 & 0xC7FFFFFFFFFFFFFFuLL,
                        v25);
              }
              while ( v26 != v25 );
            }
          }
          goto LABEL_23;
        }
      }
      if ( (*(_QWORD *)(v19 + 16) & 0x3E0LL) != 0 )
        MiZeroPhysicalPage(0LL, SlabPage, v22, v18);
      LinkedListPte = MiMakeLinkedListPte(v60);
      ++v61;
      *(_QWORD *)(v19 + 16) = LinkedListPte;
      v60 = SlabPage;
LABEL_23:
      *(_QWORD *)v19 = a1[11];
      v27 = a1[12] == 0LL;
      a1[11] = v19;
      if ( v27 )
        a1[12] = v19;
      v28 = ++a1[13];
      if ( v28 == a1[10] )
        goto LABEL_26;
      if ( (v28 & 0xF) == 0 && (a1[4] & 1) != 0 )
      {
        v42 = (*((_DWORD *)a1 + 7) >> 4) & 3;
        if ( (_DWORD)v42 != 2 )
        {
          if ( (unsigned int)MiWorkingSetIsContended(a1[1], v42) )
            goto LABEL_26;
        }
        if ( KeShouldYieldProcessor() )
          goto LABEL_26;
      }
      v3 = v54;
    }
    SlabPage = MiGetPage(*a1, v13, v4);
    if ( SlabPage != -1 )
      goto LABEL_12;
    v34 = *((_DWORD *)a1 + 8);
    if ( (v34 & 0x1000) != 0 || (v4 & 0x1000) == 0 )
    {
LABEL_37:
      if ( (v4 & 0x10000) != 0 )
      {
        v4 = v4 & 0xFFFAFFFF | 0x40000;
        *((_DWORD *)a1 + 12) ^= ((unsigned __int16)*((_DWORD *)a1 + 12) ^ (unsigned __int16)((_WORD)v57 << 9)) & 0x7E00;
        do
        {
          Page = MiGetPage(
                   *a1,
                   *((_DWORD *)a1 + 12) ^ (unsigned int)(unsigned __int8)(*((_DWORD *)a1 + 12) ^ (_InterlockedExchangeAdd(
                                                                                                    (volatile signed __int32 *)a1[5],
                                                                                                    1u)
                                                                                                % *(&MiState
                                                                                                  + (HIWORD(*((_DWORD *)a1 + 12)) & 3)
                                                                                                  + 1120))),
                   v4);
          if ( Page == -1 )
            break;
          MiGetPageChainSmallPageProcess((__int64)a1, &v58, Page);
          if ( a1[13] == a1[10] )
            break;
        }
        while ( !(unsigned int)MiGetPageChainYield(a1, 16LL) );
      }
      break;
    }
    if ( (unsigned int)MiPageAvailable(*a1, v34) )
    {
      v4 &= ~0x1000u;
      ++v8;
      continue;
    }
    break;
  }
LABEL_26:
  for ( i = 0; i < 2; i += 2 )
  {
    v30 = &v58 + 2 * i;
    if ( *v30 != 0x7FFFFFFFFFLL )
    {
      v43 = (*((_DWORD *)a1 + 12) >> 18) & 3;
      if ( i )
        MiChangePageAttributeBatch(v30, v43, CLFS_LSN_NULL_EXT, v4 & 1);
      else
        MiPerformFinalZeroing(v30, v43, v4 & 1);
    }
    v31 = &v58 + 2 * i + 2;
    if ( *v31 != 0x7FFFFFFFFFLL )
      MiChangePageAttributeBatch(v31, (*((_DWORD *)a1 + 12) >> 18) & 3, CLFS_LSN_NULL_EXT, v4 & 1);
  }
  for ( j = (__int64 *)a1[11]; j; j = (__int64 *)*j )
  {
    v33 = 0;
    if ( (j[5] & 0x10000000000LL) != 0 )
      v33 = *((_DWORD *)j + 9) & 0x18000000;
    *((_DWORD *)j + 9) = v33;
  }
}
