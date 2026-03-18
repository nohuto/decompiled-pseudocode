/*
 * XREFs of MiGetPageChain @ 0x140241940
 * Callers:
 *     MiCreateSharedZeroPages @ 0x14023B000 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x1402420D0 (MiResolvePrivateZeroFault.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiGetHardFaultPages @ 0x140339578 (MiGetHardFaultPages.c)
 *     MiGetPoolPages @ 0x140378DE4 (MiGetPoolPages.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiGetLargePagesForChain @ 0x140222408 (MiGetLargePagesForChain.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402C7A50 (MiGetPageChainSmallPageProcess.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiChangePageAttributeBatch @ 0x1403B70F4 (MiChangePageAttributeBatch.c)
 *     MiMakeLinkedListPte @ 0x1403B7F30 (MiMakeLinkedListPte.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiPageAvailable @ 0x1403BFA7C (MiPageAvailable.c)
 *     MiTbFlushTimeStampMayNeedFlush @ 0x14044FFB8 (MiTbFlushTimeStampMayNeedFlush.c)
 *     MiGetPageChainYield @ 0x14045F44C (MiGetPageChainYield.c)
 *     MiPerformFinalZeroing @ 0x1404F5DB0 (MiPerformFinalZeroing.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetPageChain(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 *v3; // r15
  unsigned int v4; // ebx
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  int v9; // edx
  unsigned int v10; // ecx
  unsigned __int32 v11; // edx
  __int64 v12; // rax
  unsigned int v13; // edi
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r9
  ULONG_PTR SlabPage; // r13
  unsigned int v18; // ecx
  __int64 v19; // r8
  unsigned int v20; // r15d
  __int64 v21; // rdi
  int v22; // ecx
  __int64 v23; // r9
  unsigned int v24; // r10d
  int v25; // ecx
  signed __int64 v26; // rdx
  signed __int64 v27; // r8
  signed __int64 v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned int i; // edi
  __int64 *v33; // rcx
  __int64 result; // rax
  __int64 *j; // rdx
  int v36; // ecx
  __int64 *v37; // rax
  unsigned int v38; // r9d
  __int64 v39; // rax
  char v40; // r8
  __int64 v41; // rcx
  __int64 LinkedListPte; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 Page; // rax
  __int64 v46; // r9
  ULONG_PTR v47; // rdi
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // ecx
  signed __int32 v52[8]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 *v53; // [rsp+20h] [rbp-88h]
  unsigned int v54; // [rsp+28h] [rbp-80h]
  int v55; // [rsp+30h] [rbp-78h]
  __int64 *v56; // [rsp+38h] [rbp-70h]
  unsigned int v57; // [rsp+40h] [rbp-68h]
  unsigned int v58; // [rsp+44h] [rbp-64h]
  int v59; // [rsp+48h] [rbp-60h]
  __int64 v60; // [rsp+50h] [rbp-58h] BYREF
  __int64 v61; // [rsp+58h] [rbp-50h]
  __int64 v62; // [rsp+60h] [rbp-48h]
  __int64 v63; // [rsp+68h] [rbp-40h]

  v1 = (_QWORD *)a1[9];
  if ( v1 )
    *v1 = 0LL;
  v3 = a1 + 7;
  v4 = *((_DWORD *)a1 + 8);
  v5 = 0;
  v6 = *((_DWORD *)a1 + 12) >> 9;
  v60 = 0x7FFFFFFFFFLL;
  v7 = v6 & 0x3F;
  v61 = 0LL;
  v8 = 0;
  v62 = 0x7FFFFFFFFFLL;
  v63 = 0LL;
  v59 = v6;
  while ( 2 )
  {
    v56 = v3;
    if ( v8 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_30;
    v5 &= ~1u;
    v9 = *(_DWORD *)(qword_140E2D890 + 4LL * (v8 + v7 * (unsigned __int16)KeNumberNodes));
    *((_DWORD *)a1 + 12) ^= ((unsigned __int16)*((_DWORD *)a1 + 12) ^ (unsigned __int16)((_WORD)v9 << 9)) & 0x7E00;
    if ( (*((_BYTE *)a1 + 28) & 0xF) == 9 )
    {
      if ( *v3 == -1 )
      {
        if ( a1[10] - a1[13] >= 0x10uLL )
        {
          v5 |= 1u;
          MiGetLargePagesForChain((__int64)a1, v9);
          v39 = a1[13];
          if ( v39 )
          {
            if ( v39 == a1[10] || (unsigned int)MiGetPageChainYield(a1, 0LL) )
              break;
          }
        }
      }
      else
      {
        v4 |= 0x40u;
      }
    }
    if ( (v5 & 1) != 0 && a1[10] - a1[13] >= 0x10uLL && (a1[4] & 0x3000) == 0 && (unsigned __int16)KeNumberNodes > 1u )
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
        v54 = 0;
        v53 = v37;
        v38 = (v4 >> 12) & 1 | 0x10;
        if ( (v4 & 1) == 0 )
          v38 = (v4 >> 12) & 1;
        SlabPage = MiGetSlabPage(*a1, v14, v13, v38, v53, v54);
        if ( SlabPage == -1LL )
          goto LABEL_31;
      }
      else
      {
        v48 = 15LL;
        if ( (unsigned int)dword_140E2D98C < 0xFuLL )
          v48 = (unsigned int)dword_140E2D98C;
        v49 = v48 & v12;
        *v56 = v49;
        v13 = (unsigned __int8)(v11 ^ ((unsigned int)v49
                                     % *(&MiState + (((v10 ^ (unsigned __int8)(v10 ^ v11)) >> 16) & 3) + 1120))) ^ v10 ^ (unsigned __int8)(v10 ^ v11);
        SlabPage = MiGetPage(*a1, v13, v4);
        v50 = v48 & (*v56 + 1);
        v3 = v56;
        *v56 = v50;
        v51 = v4 & 0xFFFFFFBF;
        if ( SlabPage != -1LL )
          v51 = v4;
        v4 = v51;
      }
      if ( SlabPage == -1LL )
        break;
LABEL_12:
      v18 = v4;
      v4 |= 0x40u;
      if ( *v3 == -1 )
        v4 = v18;
      if ( (v4 & 0x20000) != 0 && (v5 & 2) == 0 && (unsigned int)MiPageToNode(SlabPage) != v7 )
      {
        v46 = *((unsigned int *)a1 + 8);
        LODWORD(v46) = v46 | 0x1000;
        v47 = SlabPage;
        SlabPage = MiSwapNumaStandbyPage(SlabPage, v7, 0LL, v46);
        if ( SlabPage == v47 )
          v5 |= 2u;
      }
      v19 = *((unsigned int *)a1 + 8);
      v20 = (*((_DWORD *)a1 + 12) >> 18) & 3;
      v21 = 48 * SlabPage - 0x220000000000LL;
      v22 = (unsigned __int8)BYTE2(*(_DWORD *)(v21 + 32)) >> 6;
      if ( v22 != v20 && ((unsigned __int8)((1 << v22) | (1 << v20)) & (unsigned __int8)byte_140E2D998) != 0 )
      {
        *(_QWORD *)(v21 + 16) = MiMakeLinkedListPte(v60, v15, v19, v16, v53);
        v60 = SlabPage;
        if ( ++v61 == 16 )
          MiPerformFinalZeroing(&v60, v20, v40 & 1);
        goto LABEL_23;
      }
      v55 = 0;
      v23 = 16 * (unsigned int)(v19 & 1);
      v57 = 16 * (v19 & 1);
      v24 = 2 * (v19 & 1);
      v58 = v24;
      if ( (v19 & 0x20) != 0 && (*(_QWORD *)(v21 + 16) & 0x3E0LL) != 0 )
      {
        MiZeroPhysicalPage(0LL, SlabPage, v24, v20);
        *(_QWORD *)(v21 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        MiSetPfnTbFlushStamp(48 * SlabPage - 0x220000000000LL, 0LL, 0LL);
        v23 = v57;
        v24 = v58;
        v55 = 1;
      }
      v25 = (unsigned __int8)BYTE2(*(_DWORD *)(v21 + 32)) >> 6;
      if ( v25 == v20 )
        goto LABEL_20;
      if ( v25 != 1 )
      {
        if ( v25 == 3 )
          goto LABEL_72;
        v41 = (*(_QWORD *)(v21 + 24) >> 59) & 7LL;
        if ( ((*(_QWORD *)(v21 + 24) >> 59) & 7) != 0 )
        {
          _InterlockedOr(v52, 0);
          if ( !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush(v41, (unsigned int)KiTbFlushTimeStamp, 7LL) )
          {
            LODWORD(v23) = v23 | 4;
LABEL_72:
            MiChangePageAttribute(48 * SlabPage - 0x220000000000LL, v20, (unsigned int)v23);
LABEL_20:
            if ( !v55 )
            {
              v26 = *(_QWORD *)(v21 + 24);
              v27 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v21 + 24),
                      v26 & 0xC7FFFFFFFFFFFFFFuLL,
                      v26);
              if ( v26 != v27 )
              {
                do
                {
                  v28 = v27;
                  v27 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(v21 + 24),
                          v27 & 0xC7FFFFFFFFFFFFFFuLL,
                          v27);
                }
                while ( v28 != v27 );
              }
            }
            goto LABEL_23;
          }
        }
      }
      if ( (*(_QWORD *)(v21 + 16) & 0x3E0LL) != 0 )
        MiZeroPhysicalPage(0LL, SlabPage, v24, v20);
      LinkedListPte = MiMakeLinkedListPte(v62, v15, v19, v23, v53);
      ++v63;
      *(_QWORD *)(v21 + 16) = LinkedListPte;
      v62 = SlabPage;
LABEL_23:
      *(_QWORD *)v21 = a1[11];
      v29 = a1[12] == 0LL;
      a1[11] = v21;
      if ( v29 )
        a1[12] = v21;
      v30 = ++a1[13];
      if ( v30 == a1[10] )
        goto LABEL_31;
      if ( (v30 & 0xF) == 0 && (a1[4] & 1) != 0 )
      {
        v43 = (*((_DWORD *)a1 + 7) >> 4) & 3;
        if ( (_DWORD)v43 != 2 )
        {
          if ( (unsigned int)MiWorkingSetIsContended(a1[1], v43) )
            goto LABEL_31;
        }
        if ( KeShouldYieldProcessor() )
          goto LABEL_31;
      }
      v3 = v56;
    }
    SlabPage = MiGetPage(*a1, v13, v4);
    if ( SlabPage != -1LL )
      goto LABEL_12;
    v31 = *((_DWORD *)a1 + 8);
    if ( (v31 & 0x1000) != 0 || (v4 & 0x1000) == 0 )
    {
LABEL_30:
      if ( (v4 & 0x10000) != 0 )
      {
        v4 = v4 & 0xFFFAFFFF | 0x40000;
        *((_DWORD *)a1 + 12) ^= ((unsigned __int16)*((_DWORD *)a1 + 12) ^ (unsigned __int16)((_WORD)v59 << 9)) & 0x7E00;
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
          MiGetPageChainSmallPageProcess(a1, &v60, Page);
          if ( a1[13] == a1[10] )
            break;
        }
        while ( !(unsigned int)MiGetPageChainYield(a1, 16LL) );
      }
      break;
    }
    if ( (unsigned int)MiPageAvailable(*a1, v31) )
    {
      v4 &= ~0x1000u;
      ++v8;
      continue;
    }
    break;
  }
LABEL_31:
  for ( i = 0; i < 2; i += 2 )
  {
    v33 = &v60 + 2 * i;
    if ( *v33 != 0x7FFFFFFFFFLL )
    {
      v44 = (*((_DWORD *)a1 + 12) >> 18) & 3;
      if ( i )
        MiChangePageAttributeBatch(v33, v44, CLFS_LSN_NULL_EXT, v4 & 1);
      else
        MiPerformFinalZeroing(v33, v44, v4 & 1);
    }
    result = 16LL * (i + 1);
    if ( *(__int64 *)((char *)&v60 + result) != 0x7FFFFFFFFFLL )
      result = MiChangePageAttributeBatch(
                 (char *)&v60 + result,
                 (*((_DWORD *)a1 + 12) >> 18) & 3,
                 CLFS_LSN_NULL_EXT,
                 v4 & 1);
  }
  for ( j = (__int64 *)a1[11]; j; j = (__int64 *)*j )
  {
    result = j[5];
    v36 = 0;
    if ( (result & 0x10000000000LL) != 0 )
      v36 = *((_DWORD *)j + 9) & 0x18000000;
    *((_DWORD *)j + 9) = v36;
  }
  return result;
}
