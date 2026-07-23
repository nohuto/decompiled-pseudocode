/*
 * XREFs of MiGetPageChain @ 0x140307540
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiGetHardFaultPages @ 0x1402F4630 (MiGetHardFaultPages.c)
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 *     MiGetPoolPages @ 0x14034B598 (MiGetPoolPages.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiZeroPhysicalPage @ 0x14024B990 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiGetLargePagesForChain @ 0x140251524 (MiGetLargePagesForChain.c)
 *     MiGetPageChainSmallPageProcess @ 0x140253A70 (MiGetPageChainSmallPageProcess.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiPageAvailable @ 0x140260D7C (MiPageAvailable.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiGetPageChainYield @ 0x14038F588 (MiGetPageChainYield.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiMakeLinkedListPte @ 0x1403F8EF0 (MiMakeLinkedListPte.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x140446A68 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiPerformFinalZeroing @ 0x1404F5E44 (MiPerformFinalZeroing.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetPageChain(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 *v3; // r15
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // esi
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  ULONG *v9; // r9
  int v10; // edx
  unsigned int v11; // ecx
  unsigned __int32 v12; // edx
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // edx
  __int64 SlabPage; // r13
  unsigned int v17; // ecx
  int v18; // r8d
  unsigned int v19; // r15d
  __int64 v20; // rdi
  int v21; // ecx
  int v22; // eax
  char v23; // r10
  int v24; // ecx
  signed __int64 v25; // rdx
  signed __int64 v26; // r8
  signed __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rax
  unsigned int i; // edi
  __int64 *v31; // rcx
  __int64 result; // rax
  __int64 *j; // rdx
  int v34; // ecx
  int v35; // eax
  __int64 Page; // rax
  __int64 v37; // rax
  __int64 *v38; // rax
  unsigned int v39; // r9d
  char v40; // r8
  __int64 v41; // rcx
  __int64 LinkedListPte; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rdi
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // ecx
  signed __int32 v51[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 *v52; // [rsp+20h] [rbp-88h]
  unsigned int v53; // [rsp+28h] [rbp-80h]
  int v54; // [rsp+30h] [rbp-78h]
  __int64 *v55; // [rsp+38h] [rbp-70h]
  int v56; // [rsp+40h] [rbp-68h]
  int v57; // [rsp+44h] [rbp-64h]
  int v58; // [rsp+48h] [rbp-60h]
  __int64 v59; // [rsp+50h] [rbp-58h] BYREF
  __int64 v60; // [rsp+58h] [rbp-50h]
  __int64 v61; // [rsp+60h] [rbp-48h]
  __int64 v62; // [rsp+68h] [rbp-40h]

  v1 = (_QWORD *)a1[9];
  if ( v1 )
    *v1 = 0LL;
  v3 = a1 + 7;
  v4 = *((_DWORD *)a1 + 8);
  v5 = *((_DWORD *)a1 + 12) >> 9;
  v6 = 0;
  v59 = 0x7FFFFFFFFFLL;
  v7 = v5 & 0x3F;
  v60 = 0LL;
  v61 = 0x7FFFFFFFFFLL;
  v8 = 0;
  v62 = 0LL;
  v58 = v5;
  while ( 2 )
  {
    v9 = &MiState;
    v55 = v3;
    if ( v8 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_37;
    v6 &= ~1u;
    v10 = *(_DWORD *)(qword_140E2DC10 + 4LL * (v8 + v7 * (unsigned __int16)KeNumberNodes));
    *((_DWORD *)a1 + 12) ^= ((unsigned __int16)*((_DWORD *)a1 + 12) ^ (unsigned __int16)((_WORD)v10 << 9)) & 0x7E00;
    if ( (*((_BYTE *)a1 + 28) & 0xF) == 9 )
    {
      if ( *v3 == -1 )
      {
        if ( a1[10] - a1[13] >= 0x10uLL )
        {
          v6 |= 1u;
          MiGetLargePagesForChain((__int64)a1, v10);
          v37 = a1[13];
          if ( v37 && (v37 == a1[10] || (unsigned int)MiGetPageChainYield(a1, 0LL)) )
            break;
          v9 = &MiState;
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
      v11 = *((_DWORD *)a1 + 12);
      v12 = _InterlockedExchangeAdd((volatile signed __int32 *)a1[5], 1u) % *(&MiState + (HIWORD(v11) & 3) + 1120);
      v13 = *v3;
      v14 = v11 ^ (unsigned __int8)(v11 ^ v12);
      if ( *v3 == -1 )
      {
        v15 = *((_DWORD *)a1 + 7) & 0xF;
        if ( v15 == 9 )
          break;
        v38 = (__int64 *)a1[9];
        v53 = 0;
        v52 = v38;
        v39 = (v4 >> 12) & 1 | 0x10;
        if ( (v4 & 1) == 0 )
          v39 = (v4 >> 12) & 1;
        SlabPage = MiGetSlabPage(*a1, v15, v14, v39, v52, v53);
        if ( SlabPage == -1 )
          goto LABEL_26;
      }
      else
      {
        v47 = 15LL;
        if ( (unsigned int)dword_140E2DD0C < 0xFuLL )
          v47 = (unsigned int)dword_140E2DD0C;
        v48 = v47 & v13;
        *v55 = v48;
        v14 = (unsigned __int8)(v12 ^ ((unsigned int)v48
                                     % *(&MiState + (((v11 ^ (unsigned __int8)(v11 ^ v12)) >> 16) & 3) + 1120))) ^ v11 ^ (unsigned __int8)(v11 ^ v12);
        SlabPage = MiGetPage(*a1, v14, v4, &MiState);
        v49 = v47 & (*v55 + 1);
        v3 = v55;
        *v55 = v49;
        v50 = v4 & 0xFFFFFFBF;
        if ( SlabPage != -1 )
          v50 = v4;
        v4 = v50;
      }
      if ( SlabPage == -1 )
        break;
LABEL_12:
      v17 = v4;
      v4 |= 0x40u;
      if ( *v3 == -1 )
        v4 = v17;
      if ( (v4 & 0x20000) != 0 && (v6 & 2) == 0 && (unsigned int)MiPageToNode(SlabPage) != v7 )
      {
        v45 = *((unsigned int *)a1 + 8);
        LODWORD(v45) = v45 | 0x1000;
        v46 = SlabPage;
        SlabPage = MiSwapNumaStandbyPage(SlabPage, v7, 0LL, v45);
        if ( SlabPage == v46 )
          v6 |= 2u;
      }
      v18 = *((_DWORD *)a1 + 8);
      v19 = (*((_DWORD *)a1 + 12) >> 18) & 3;
      v20 = 48 * SlabPage - 0x220000000000LL;
      v21 = (unsigned __int8)BYTE2(*(_DWORD *)(v20 + 32)) >> 6;
      if ( v21 != v19 && ((unsigned __int8)((1 << v21) | (1 << v19)) & (unsigned __int8)byte_140E2DD18) != 0 )
      {
        *(_QWORD *)(v20 + 16) = MiMakeLinkedListPte(v59);
        v59 = SlabPage;
        if ( ++v60 == 16 )
          MiPerformFinalZeroing(&v59, v19, v40 & 1);
        goto LABEL_23;
      }
      v54 = 0;
      v22 = v18 & 1;
      v56 = 16 * v22;
      v23 = 2 * v22;
      v57 = 2 * v22;
      if ( (v18 & 0x20) != 0 && (*(_QWORD *)(v20 + 16) & 0x3E0LL) != 0 )
      {
        MiZeroPhysicalPage(0LL, SlabPage, v23, v19);
        *(_QWORD *)(v20 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        MiSetPfnTbFlushStamp(48 * SlabPage - 0x220000000000LL, 0LL, 0);
        v23 = v57;
        v54 = 1;
      }
      v24 = (unsigned __int8)BYTE2(*(_DWORD *)(v20 + 32)) >> 6;
      if ( v24 == v19 )
        goto LABEL_20;
      if ( v24 != 1 )
      {
        if ( v24 == 3
          || (v41 = (*(_QWORD *)(v20 + 24) >> 59) & 7LL, ((*(_QWORD *)(v20 + 24) >> 59) & 7) != 0)
          && (_InterlockedOr(v51, 0),
              !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v41, (unsigned int)KiTbFlushTimeStamp, 7LL)) )
        {
          MiChangePageAttribute(48 * SlabPage - 0x220000000000LL, v19);
LABEL_20:
          if ( !v54 )
          {
            v25 = *(_QWORD *)(v20 + 24);
            v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 24), v25 & 0xC7FFFFFFFFFFFFFFuLL, v25);
            if ( v25 != v26 )
            {
              do
              {
                v27 = v26;
                v26 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v20 + 24),
                        v26 & 0xC7FFFFFFFFFFFFFFuLL,
                        v26);
              }
              while ( v27 != v26 );
            }
          }
          goto LABEL_23;
        }
      }
      if ( (*(_QWORD *)(v20 + 16) & 0x3E0LL) != 0 )
        MiZeroPhysicalPage(0LL, SlabPage, v23, v19);
      LinkedListPte = MiMakeLinkedListPte(v61);
      ++v62;
      *(_QWORD *)(v20 + 16) = LinkedListPte;
      v61 = SlabPage;
LABEL_23:
      *(_QWORD *)v20 = a1[11];
      v28 = a1[12] == 0LL;
      a1[11] = v20;
      if ( v28 )
        a1[12] = v20;
      v29 = ++a1[13];
      if ( v29 == a1[10] )
        goto LABEL_26;
      if ( (v29 & 0xF) == 0 && (a1[4] & 1) != 0 )
      {
        v43 = (*((_DWORD *)a1 + 7) >> 4) & 3;
        if ( (_DWORD)v43 != 2 )
        {
          if ( (unsigned int)MiWorkingSetIsContended(a1[1], v43) )
            goto LABEL_26;
        }
        if ( KeShouldYieldProcessor() )
          goto LABEL_26;
      }
      v3 = v55;
      v9 = &MiState;
    }
    SlabPage = MiGetPage(*a1, v14, v4, v9);
    if ( SlabPage != -1 )
      goto LABEL_12;
    v35 = *((_DWORD *)a1 + 8);
    if ( (v35 & 0x1000) != 0 || (v4 & 0x1000) == 0 )
    {
LABEL_37:
      if ( (v4 & 0x10000) != 0 )
      {
        v4 = v4 & 0xFFFAFFFF | 0x40000;
        *((_DWORD *)a1 + 12) ^= ((unsigned __int16)*((_DWORD *)a1 + 12) ^ (unsigned __int16)((_WORD)v58 << 9)) & 0x7E00;
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
                   v4,
                   &MiState);
          if ( Page == -1 )
            break;
          MiGetPageChainSmallPageProcess((__int64)a1, &v59, Page);
          if ( a1[13] == a1[10] )
            break;
        }
        while ( !(unsigned int)MiGetPageChainYield(a1, 16LL) );
      }
      break;
    }
    if ( (unsigned int)MiPageAvailable(*a1, v35) )
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
    v31 = &v59 + 2 * i;
    if ( *v31 != 0x7FFFFFFFFFLL )
    {
      v44 = (*((_DWORD *)a1 + 12) >> 18) & 3;
      if ( i )
        MiChangePageAttributeBatch(v31, v44, CLFS_LSN_NULL_EXT, v4 & 1);
      else
        MiPerformFinalZeroing(v31, v44, v4 & 1);
    }
    result = 16LL * (i + 1);
    if ( *(__int64 *)((char *)&v59 + result) != 0x7FFFFFFFFFLL )
      result = MiChangePageAttributeBatch(
                 (char *)&v59 + result,
                 (*((_DWORD *)a1 + 12) >> 18) & 3,
                 CLFS_LSN_NULL_EXT,
                 v4 & 1);
  }
  for ( j = (__int64 *)a1[11]; j; j = (__int64 *)*j )
  {
    result = j[5];
    v34 = 0;
    if ( (result & 0x10000000000LL) != 0 )
      v34 = *((_DWORD *)j + 9) & 0x18000000;
    *((_DWORD *)j + 9) = v34;
  }
  return result;
}
