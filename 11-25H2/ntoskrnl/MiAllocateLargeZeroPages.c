/*
 * XREFs of MiAllocateLargeZeroPages @ 0x140390BD8
 * Callers:
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiAllocateFastLargePagesForMdl @ 0x1403907B8 (MiAllocateFastLargePagesForMdl.c)
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AA7D14 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     MiIsFreeZeroPfnCold @ 0x1402C80AC (MiIsFreeZeroPfnCold.c)
 *     MiInsertMdlPageNeedsZero @ 0x14038C62C (MiInsertMdlPageNeedsZero.c)
 *     MiProcessPageGroupInfo @ 0x14038D61C (MiProcessPageGroupInfo.c)
 *     MiCreatePageChains @ 0x14038D9F0 (MiCreatePageChains.c)
 *     MiGetFastLargePages @ 0x140392454 (MiGetFastLargePages.c)
 *     MiZeroAndConvertPage @ 0x1403F8AEC (MiZeroAndConvertPage.c)
 *     MiPfnBestZeroAttribute @ 0x1403F8C70 (MiPfnBestZeroAttribute.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     MiAddPageToHeatList @ 0x14044047C (MiAddPageToHeatList.c)
 *     MiIssuePageHeatList @ 0x14044059C (MiIssuePageHeatList.c)
 *     MiAssemblePfnList @ 0x140472ABC (MiAssemblePfnList.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateLargeZeroPages(unsigned int *a1)
{
  BOOL v2; // esi
  _DWORD *v3; // r14
  int v4; // ebx
  unsigned int v5; // ecx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  _QWORD *i; // r14
  __int64 *v10; // rdx
  unsigned int v11; // r13d
  __int64 v12; // r12
  _QWORD *v13; // rax
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 *v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 PageChains; // rax
  _QWORD **v21; // rax
  __int64 *v22; // r12
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  unsigned int v29; // [rsp+38h] [rbp-D0h]
  __int64 *v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h]
  __int64 v32[3]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v33[128]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v34[96]; // [rsp+E8h] [rbp-20h] BYREF

  memset_0(v33, 0, sizeof(v33));
  memset_0(v34, 0, sizeof(v34));
  v2 = 0;
  v3 = 0LL;
  v4 = 1;
  if ( (*a1 & 0x10) == 0 )
    v2 = (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0;
  v5 = a1[9];
  *(_OWORD *)&v32[1] = 0LL;
  LODWORD(v32[1]) = 129;
  v29 = MiProtectionToCacheAttribute(v5);
LABEL_4:
  v6 = *((_QWORD *)a1 + 9);
  v7 = *((_QWORD *)a1 + 2);
  if ( v6 < v7 && v7 - v6 >= *((_QWORD *)a1 + 3) )
  {
    MiGetFastLargePages(a1, v34);
    LODWORD(v31) = 0;
    v10 = MiPageSizes;
    v11 = 0;
    v30 = MiPageSizes;
    v12 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = &v34[v12];
          v14 = *(_QWORD *)&v34[v12];
          if ( (_QWORD *)*v13 != v13 )
            break;
          ++v10;
          ++v11;
          v12 += 24LL;
          v30 = v10;
          if ( v11 >= 4 )
          {
            if ( (_DWORD)v31 )
              goto LABEL_4;
            goto LABEL_5;
          }
        }
        LODWORD(v31) = 1;
        if ( *(_QWORD **)(v14 + 8) != v13 || (v15 = *(_QWORD *)v14, *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14) )
LABEL_24:
          __fastfail(3u);
        *v13 = v15;
        *(_QWORD *)(v15 + 8) = v13;
        --v13[2];
        if ( (*a1 & 4) != 0 || (*(_QWORD *)(v14 + 16) & 0x3E0LL) == 0 )
          v4 = 0;
        v32[0] = *v10;
        if ( (unsigned int)MiIsFreeZeroPfnCold(v14) && (HvlEnlightenments & 0x200000) != 0 )
        {
          MiAddPageToHeatList(&v32[1], 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v14 + 0x220000000000LL) >> 4), v11);
          MiSetFreeZeroPfnCold(v14, 0LL);
        }
        if ( v4 )
          break;
LABEL_23:
        v16 = v12 + *((_QWORD *)a1 + 10);
        v17 = *(unsigned __int64 **)(v16 + 8);
        if ( *v17 != v16 )
          goto LABEL_24;
        v10 = v30;
        v4 = 1;
        *(_QWORD *)v14 = v16;
        *(_QWORD *)(v14 + 8) = v17;
        *v17 = v14;
        *(_QWORD *)(v16 + 8) = v14;
        ++*(_QWORD *)(v12 + *((_QWORD *)a1 + 10) + 16);
      }
      if ( (HIWORD(*(_DWORD *)(v14 + 32)) & 0xC0) == 0xC0 )
      {
        v18 = MiPfnBestZeroAttribute(v14, v29);
        MiChangePageAttribute(v14, v18);
      }
      if ( !v3 )
      {
        v19 = (*a1 & 0x10 | 2) >> 1;
        if ( !v2
          || (PageChains = MiCreatePageChains(*((_QWORD *)a1 + 1), a1[8], v29, 0LL), (v3 = (_DWORD *)PageChains) == 0LL) )
        {
          MiZeroAndConvertPage(0, v14, v11, v29, v19);
          goto LABEL_23;
        }
        *(_DWORD *)(PageChains + 16) = v19;
      }
      MiInsertMdlPageNeedsZero(v3, v14, v32[0]);
      v10 = v30;
      v4 = 1;
    }
  }
LABEL_5:
  if ( HIDWORD(v32[1]) )
    MiIssuePageHeatList(&v32[1]);
  if ( v3 )
    MiProcessPageGroupInfo((__int64)v3, *((_QWORD *)a1 + 10));
  result = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 9) != result )
  {
    if ( v2 )
    {
      result = *a1;
      if ( (result & 8) == 0 )
      {
        v30 = 0LL;
        MiFindLargePageMemory(a1, &v30);
        result = (__int64)v30;
        i = 0LL;
        while ( result )
        {
          i = (_QWORD *)result;
          result = *(_QWORD *)result;
        }
        for ( ; i; result = MiAssemblePfnList(*((_QWORD *)a1 + 10), 48 * v27 - 0x220000000000LL, (unsigned int)v26) )
        {
          v21 = (_QWORD **)i[1];
          v22 = i - 2;
          v23 = (__int64)i;
          v24 = i;
          if ( v21 )
          {
            v25 = *v21;
            for ( i = (_QWORD *)i[1]; v25; v25 = (_QWORD *)*v25 )
              i = v25;
          }
          else
          {
            while ( 1 )
            {
              i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !i || (_QWORD *)*i == v24 )
                break;
              v24 = i;
            }
          }
          RtlAvlRemoveNode((unsigned __int64 *)&v30, v23);
          v26 = *((unsigned int *)v22 + 2);
          v27 = *v22;
          v28 = MiPageSizes[v26];
          ExFreePoolWithTag(v22, 0);
          *((_QWORD *)a1 + 9) += v28;
        }
      }
    }
  }
  return result;
}
