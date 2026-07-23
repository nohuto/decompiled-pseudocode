/*
 * XREFs of MiAllocateLargeZeroPages @ 0x14026F2E8
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiAllocateFastLargePagesForMdl @ 0x14026EEC8 (MiAllocateFastLargePagesForMdl.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AA81E4 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiInsertMdlPageNeedsZero @ 0x140217C1C (MiInsertMdlPageNeedsZero.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiIsFreeZeroPfnCold @ 0x140250EDC (MiIsFreeZeroPfnCold.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiGetFastLargePages @ 0x14026499C (MiGetFastLargePages.c)
 *     MiProcessPageGroupInfo @ 0x1402709E8 (MiProcessPageGroupInfo.c)
 *     MiAssemblePfnList @ 0x140270A88 (MiAssemblePfnList.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiZeroAndConvertPage @ 0x1403F8F1C (MiZeroAndConvertPage.c)
 *     MiPfnBestZeroAttribute @ 0x1403F90A0 (MiPfnBestZeroAttribute.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x140435CBC (MiIssuePageHeatList.c)
 *     MiCreatePageChains @ 0x14048E910 (MiCreatePageChains.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateLargeZeroPages(unsigned int *a1)
{
  BOOL v2; // esi
  _DWORD *v3; // r14
  int v4; // ebx
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  _QWORD *i; // r14
  __int64 *v12; // rdx
  unsigned int v13; // r13d
  __int64 v14; // r12
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 *v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // ebx
  __int64 PageChains; // rax
  _QWORD **v23; // rax
  __int64 *v24; // r12
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rbx
  unsigned int v31; // [rsp+38h] [rbp-D0h]
  __int64 *v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  __int64 v34[3]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v35[128]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v36[12]; // [rsp+E8h] [rbp-20h] BYREF

  memset_0(v35, 0, sizeof(v35));
  memset_0(v36, 0, sizeof(v36));
  v2 = 0;
  v3 = 0LL;
  v4 = 1;
  if ( (*a1 & 0x10) == 0 )
    v2 = (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0;
  v5 = a1[9];
  *(_OWORD *)&v34[1] = 0LL;
  LODWORD(v34[1]) = 129;
  v31 = MiProtectionToCacheAttribute(v5);
LABEL_4:
  v8 = *((_QWORD *)a1 + 9);
  v9 = *((_QWORD *)a1 + 2);
  if ( v8 < v9 && v9 - v8 >= *((_QWORD *)a1 + 3) )
  {
    MiGetFastLargePages((__int64)a1, v36);
    LODWORD(v33) = 0;
    v12 = MiPageSizes;
    v13 = 0;
    v32 = MiPageSizes;
    v14 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = &v36[v14];
          v16 = v36[v14];
          if ( (_QWORD *)*v15 != v15 )
            break;
          ++v12;
          ++v13;
          v14 += 3LL;
          v32 = v12;
          if ( v13 >= 4 )
          {
            if ( (_DWORD)v33 )
              goto LABEL_4;
            goto LABEL_5;
          }
        }
        LODWORD(v33) = 1;
        if ( *(_QWORD **)(v16 + 8) != v15 || (v17 = *(_QWORD *)v16, *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16) )
LABEL_24:
          __fastfail(3u);
        *v15 = v17;
        *(_QWORD *)(v17 + 8) = v15;
        --v15[2];
        if ( (*a1 & 4) != 0 || (*(_QWORD *)(v16 + 16) & 0x3E0LL) == 0 )
          v4 = 0;
        v34[0] = *v12;
        if ( (unsigned int)MiIsFreeZeroPfnCold(v16) && (HvlEnlightenments & 0x200000) != 0 )
        {
          MiAddPageToHeatList(&v34[1], 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v16 + 0x220000000000LL) >> 4), v13);
          MiSetFreeZeroPfnCold(v16, 0LL);
        }
        if ( v4 )
          break;
LABEL_23:
        v18 = v14 * 8 + *((_QWORD *)a1 + 10);
        v19 = *(unsigned __int64 **)(v18 + 8);
        if ( *v19 != v18 )
          goto LABEL_24;
        v12 = v32;
        v4 = 1;
        *(_QWORD *)v16 = v18;
        *(_QWORD *)(v16 + 8) = v19;
        *v19 = v16;
        *(_QWORD *)(v18 + 8) = v16;
        ++*(_QWORD *)(v14 * 8 + *((_QWORD *)a1 + 10) + 16);
      }
      if ( (HIWORD(*(_DWORD *)(v16 + 32)) & 0xC0) == 0xC0 )
      {
        v20 = MiPfnBestZeroAttribute(v16, v31);
        MiChangePageAttribute(v16, v20);
      }
      if ( !v3 )
      {
        v21 = (*a1 & 0x10 | 2) >> 1;
        if ( !v2
          || (PageChains = MiCreatePageChains(*((_QWORD *)a1 + 1), a1[8], v31), (v3 = (_DWORD *)PageChains) == 0LL) )
        {
          MiZeroAndConvertPage(0, v16, v13, v31, v21);
          goto LABEL_23;
        }
        *(_DWORD *)(PageChains + 16) = v21;
      }
      MiInsertMdlPageNeedsZero(v3, v16, v34[0]);
      v12 = v32;
      v4 = 1;
    }
  }
LABEL_5:
  if ( HIDWORD(v34[1]) )
    MiIssuePageHeatList(&v34[1]);
  if ( v3 )
    MiProcessPageGroupInfo(v3, *((_QWORD *)a1 + 10), v6, v7);
  result = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 9) != result )
  {
    if ( v2 )
    {
      result = *a1;
      if ( (result & 8) == 0 )
      {
        v32 = 0LL;
        MiFindLargePageMemory(a1, &v32);
        result = (__int64)v32;
        i = 0LL;
        while ( result )
        {
          i = (_QWORD *)result;
          result = *(_QWORD *)result;
        }
        for ( ; i; result = MiAssemblePfnList(*((_QWORD *)a1 + 10), 48 * v29 - 0x220000000000LL, (unsigned int)v28) )
        {
          v23 = (_QWORD **)i[1];
          v24 = i - 2;
          v25 = i;
          v26 = i;
          if ( v23 )
          {
            v27 = *v23;
            for ( i = (_QWORD *)i[1]; v27; v27 = (_QWORD *)*v27 )
              i = v27;
          }
          else
          {
            while ( 1 )
            {
              i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !i || (_QWORD *)*i == v26 )
                break;
              v26 = i;
            }
          }
          RtlAvlRemoveNode(&v32, v25);
          v28 = *((unsigned int *)v24 + 2);
          v29 = *v24;
          v30 = MiPageSizes[v28];
          ExFreePoolWithTag(v24, 0);
          *((_QWORD *)a1 + 9) += v30;
        }
      }
    }
  }
  return result;
}
