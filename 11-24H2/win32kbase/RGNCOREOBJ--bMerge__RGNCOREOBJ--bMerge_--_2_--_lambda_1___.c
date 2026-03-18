/*
 * XREFs of RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400296C0
 * Callers:
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140019860 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x14001A350 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z @ 0x1400DB59C (-bMerge@RGNCOREOBJ@@QEAA_NAEAV1@0E@Z.c)
 * Callees:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140029090 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x140029BD4 (-RegionCore_get_sizeScanAlloc@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14002A15C (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140065A98 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140066AF0 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x14019B794 (-RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

char __fastcall RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___(
        Win32kRS **a1,
        Win32kRS **a2,
        Win32kRS **a3,
        unsigned __int8 a4,
        RGNCOREOBJ *a5)
{
  Win32kRS **v7; // r15
  struct SCAN *pScan_mut; // r14
  struct SCAN *v9; // rsi
  Win32kRS *v10; // rcx
  struct SCAN *v11; // rbp
  struct SCAN *pscnTail_mut; // rax
  __int64 v13; // rbx
  Win32kRS *v14; // rcx
  struct SCAN *v15; // rax
  __int64 v16; // rdx
  Win32kRS *v17; // rax
  struct SCAN *v18; // rbx
  unsigned int v19; // r12d
  unsigned int sizeScanAlloc; // edi
  unsigned int sizeScan; // eax
  int v22; // r12d
  _DWORD *v23; // r11
  int *v24; // rdi
  unsigned __int64 v25; // rdx
  int *v26; // r13
  int v27; // ecx
  unsigned __int8 v28; // r10
  int v29; // eax
  int v30; // r9d
  __int64 v31; // rax
  Win32kRS *v32; // rdi
  unsigned int v33; // ecx
  int v34; // ecx
  __int64 v35; // r8
  unsigned __int8 *v36; // rdx
  unsigned int v37; // ecx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  int v40; // r9d
  int v41; // eax
  __int32 v42; // eax
  __int32 v43; // eax
  __int32 v44; // eax
  Win32kRS *v45; // rcx
  struct SCAN *v46; // rax
  Win32kRS *v47; // rcx
  struct SCAN *v48; // rax
  int v50; // edx
  unsigned int v51; // eax
  unsigned __int64 v52; // rax
  unsigned int v53; // ecx
  struct SCAN *pscnTail; // rax
  struct SCAN *v55; // [rsp+28h] [rbp-60h]
  __m128i v56; // [rsp+28h] [rbp-60h]

  v7 = a1;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    pScan_mut = Win32kRS::RegionCore_get_pScan_mut(*a2, (struct REGION_CORE *)a2);
  else
    pScan_mut = *(struct SCAN **)*a2;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    v9 = Win32kRS::RegionCore_get_pScan_mut(*a3, (struct REGION_CORE *)a2);
  else
    v9 = *(struct SCAN **)*a3;
  v10 = *a2;
  v11 = 0LL;
  v55 = 0LL;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    pscnTail_mut = Win32kRS::RegionCore_get_pscnTail_mut(v10, (struct REGION_CORE *)a2);
  else
    pscnTail_mut = (struct SCAN *)(*(_QWORD *)v10 + *((_QWORD *)v10 + 2));
  v13 = (__int64)pscnTail_mut - (unsigned int)(4 * *((_DWORD *)pscnTail_mut - 1) + 16) - 4;
  v14 = *a3;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    v15 = Win32kRS::RegionCore_get_pscnTail_mut(v14, (struct REGION_CORE *)a2);
  else
    v15 = (struct SCAN *)(*(_QWORD *)v14 + *((_QWORD *)v14 + 2));
  if ( *(_DWORD *)(v13 + 12) != 0x7FFFFFFF )
    return 0;
  v16 = (__int64)v15 - (unsigned int)(4 * *((_DWORD *)v15 - 1) + 16) - 4;
  if ( *(_DWORD *)(v16 + 12) != 0x7FFFFFFF )
    return 0;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    Win32kRS::RegionCore_set_sizeScan(*v7, 0LL);
  else
    *((_QWORD *)*v7 + 2) = 0LL;
  *((_DWORD *)*v7 + 6) = 0;
  v17 = *v7;
  *((_DWORD *)v17 + 7) = 0x7FFFFFFF;
  *((_DWORD *)v17 + 8) = 0x7FFFFFFF;
  *((_DWORD *)v17 + 9) = 0x80000000;
  *((_DWORD *)v17 + 10) = 0x80000000;
  while ( 2 )
  {
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      v18 = Win32kRS::RegionCore_get_pscnTail_mut(*v7, (struct REGION_CORE *)v16);
    else
      v18 = (struct SCAN *)(*(_QWORD *)*v7 + *((_QWORD *)*v7 + 2));
    v19 = 4 * (*(_DWORD *)v9 + *(_DWORD *)pScan_mut) + 16;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      sizeScanAlloc = Win32kRS::RegionCore_get_sizeScanAlloc(*v7, (const struct REGION_CORE *)v16);
    else
      sizeScanAlloc = *((_DWORD *)*v7 + 2);
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      sizeScan = Win32kRS::RegionCore_get_sizeScan(*v7, (const struct REGION_CORE *)v16);
    else
      sizeScan = *((_DWORD *)*v7 + 4);
    if ( v19 > sizeScanAlloc - sizeScan )
    {
      v52 = 2LL * REGION_CORE::get_sizeScanAlloc(*v7);
      if ( v52 > 0xFFFFFFFF )
        return 0;
      v53 = v52 + v19;
      if ( (unsigned int)v52 + v19 < (unsigned int)v52 || v53 + 1120 < v53 || !RGNCOREOBJ::bExpand(a5, v53 + 1120) )
        return 0;
      pscnTail = REGION_CORE::get_pscnTail(*v7);
      v18 = pscnTail;
      if ( v11 )
        v55 = (struct SCAN *)((char *)pscnTail - (unsigned int)(4 * *((_DWORD *)pscnTail - 1) + 16));
    }
    v22 = *((_DWORD *)pScan_mut + 2);
    v23 = (_DWORD *)((char *)v18 + 12);
    v24 = (int *)((char *)pScan_mut + 12);
    v25 = *((unsigned int *)pScan_mut + 1);
    v26 = (int *)((char *)v9 + 12);
    v27 = *((_DWORD *)v9 + 1);
    v28 = a4;
    if ( v22 >= *((_DWORD *)v9 + 2) )
      v22 = *((_DWORD *)v9 + 2);
    *((_DWORD *)v18 + 2) = v22;
    if ( (int)v25 <= v27 )
      v25 = (unsigned int)v27;
    *((_DWORD *)v18 + 1) = v25;
    v29 = *(_DWORD *)pScan_mut;
    LOBYTE(v25) = 1;
    v30 = *(_DWORD *)v9;
    *(_DWORD *)v18 = 0;
    while ( 1 )
    {
      if ( v29 )
      {
        v34 = *v24;
        v35 = (unsigned __int8)v25;
        if ( v30 && (v50 = *v26, v34 >= *v26) )
        {
          ++v26;
          --v30;
          if ( v34 > v50 )
          {
            v34 = v50;
            v36 = (unsigned __int8 *)&afjB + v35;
          }
          else
          {
            ++v24;
            --v29;
            v36 = (unsigned __int8 *)&afjAB + v35;
          }
        }
        else
        {
          ++v24;
          --v29;
          v36 = (unsigned __int8 *)&afjA + v35;
        }
        goto LABEL_35;
      }
      if ( !v30 )
        break;
      v34 = *v26;
      --v30;
      ++v26;
      v36 = (unsigned __int8 *)&afjB + (unsigned __int8)v25;
LABEL_35:
      v25 = *v36;
      if ( ((unsigned __int8)v25 & v28) != 0 )
      {
        ++*(_DWORD *)v18;
        *v23++ = v34;
        v28 ^= 0xFu;
      }
    }
    v7 = a1;
    *((_DWORD *)v18 + *(unsigned int *)v18 + 3) = *(_DWORD *)v18;
    if ( v55
      && (v31 = *(unsigned int *)v55, (_DWORD)v31 == *(_DWORD *)v18)
      && !memcmp((char *)v55 + 12, (char *)v18 + 12, 4 * v31) )
    {
      v51 = *((_DWORD *)v18 + 2);
      v18 = v55;
      *((_DWORD *)v55 + 2) = v51;
    }
    else if ( v55 != v18 )
    {
      v32 = *a1;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
        v33 = Win32kRS::RegionCore_get_sizeScan(*a1, (const struct REGION_CORE *)v25);
      else
        v33 = *((_DWORD *)v32 + 4);
      v37 = v33 + 4 * *(_DWORD *)v18 + 16;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        Win32kRS::RegionCore_set_sizeScan(v32, (struct REGION_CORE *)v37);
      }
      else
      {
        v38 = v37;
        v39 = *((_QWORD *)v32 + 1);
        *((_QWORD *)v32 + 2) = v38;
        if ( v39 < v38 )
        {
          *((_QWORD *)v32 + 2) = v39;
          RustOnZeroSizedScanCallback();
        }
      }
      ++*((_DWORD *)*a1 + 6);
    }
    v40 = *((_DWORD *)v18 + 2);
    if ( v40 == 0x7FFFFFFF )
      return 1;
    v16 = *(unsigned int *)v18;
    if ( (_DWORD)v16 )
    {
      v56 = *(__m128i *)((char *)*a1 + 28);
      v41 = _mm_cvtsi128_si32(v56);
      if ( *((_DWORD *)v18 + 3) < v41 )
        v41 = *((_DWORD *)v18 + 3);
      v56.m128i_i32[0] = v41;
      v42 = HIDWORD(*(_QWORD *)((char *)*a1 + 28));
      if ( *((_DWORD *)v18 + 1) < v56.m128i_i32[1] )
        v42 = *((_DWORD *)v18 + 1);
      v56.m128i_i32[1] = v42;
      v16 = *((unsigned int *)v18 + (unsigned int)(v16 - 1) + 3);
      v43 = *(_QWORD *)((char *)*a1 + 36);
      if ( (int)v16 > v56.m128i_i32[2] )
        v43 = v16;
      v56.m128i_i32[2] = v43;
      v44 = HIDWORD(*(_OWORD *)((char *)*a1 + 28));
      if ( v40 > v56.m128i_i32[3] )
        v44 = *((_DWORD *)v18 + 2);
      v56.m128i_i32[3] = v44;
      *(__m128i *)((char *)*a1 + 28) = v56;
    }
    if ( v22 == *((_DWORD *)pScan_mut + 2) )
      pScan_mut = (struct SCAN *)((char *)pScan_mut + (unsigned int)(4 * *(_DWORD *)pScan_mut + 16));
    if ( v22 == *((_DWORD *)v9 + 2) )
      v9 = (struct SCAN *)((char *)v9 + (unsigned int)(4 * *(_DWORD *)v9 + 16));
    v45 = *a2;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      v46 = Win32kRS::RegionCore_get_pscnTail_mut(v45, (struct REGION_CORE *)v16);
    else
      v46 = (struct SCAN *)(*(_QWORD *)v45 + *((_QWORD *)v45 + 2));
    if ( pScan_mut < v46 )
    {
      v47 = *a3;
      v48 = WPP_MAIN_CB.Dpc.SystemArgument1
          ? Win32kRS::RegionCore_get_pscnTail_mut(v47, (struct REGION_CORE *)v16)
          : (struct SCAN *)(*(_QWORD *)v47 + *((_QWORD *)v47 + 2));
      if ( v9 < v48 )
      {
        v11 = v18;
        v55 = v18;
        continue;
      }
    }
    return 0;
  }
}
