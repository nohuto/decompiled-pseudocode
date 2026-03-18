/*
 * XREFs of RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140028A10
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140026690 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 * Callees:
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140029090 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140066AF0 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1400EF910 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x14019B794 (-RegionCore_get_pscnTail_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

char __fastcall RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___(
        Win32kRS **a1,
        Win32kRS **a2,
        Win32kRS *a3,
        unsigned __int8 a4,
        __int64 a5)
{
  Win32kRS **v5; // rdi
  Win32kRS **v7; // r14
  struct SCAN *pScan_mut; // r12
  struct SCAN *v9; // r15
  Win32kRS *v10; // rcx
  struct SCAN *v11; // r13
  struct SCAN *pscnTail_mut; // rax
  __int64 v13; // rbx
  Win32kRS *v14; // rcx
  struct SCAN *v15; // rax
  __int64 v16; // rdx
  Win32kRS *v17; // rax
  struct SCAN *v18; // rdi
  char *SystemArgument1; // rsi
  Win32kRS *v20; // rbp
  int v21; // ebp
  char *v22; // rsi
  int v23; // eax
  char *v24; // rcx
  int v25; // esi
  int *v26; // rbp
  int v27; // ecx
  _DWORD *v28; // r11
  int v29; // ebx
  int *v30; // r9
  int v31; // edx
  unsigned __int8 v32; // r10
  int v33; // esi
  unsigned __int8 v34; // dl
  int v35; // eax
  int v36; // ecx
  char *v37; // rsi
  Win32kRS *v38; // rbp
  int v39; // eax
  char *v40; // rcx
  int v41; // esi
  unsigned int v42; // ecx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  int v45; // r9d
  int v46; // eax
  __int32 v47; // eax
  __int32 v48; // eax
  __int32 v49; // eax
  Win32kRS *v50; // rcx
  struct SCAN *v51; // rax
  Win32kRS *v52; // rcx
  struct SCAN *v53; // rax
  int v55; // r8d
  unsigned int v56; // eax
  unsigned __int64 v57; // rax
  unsigned int v58; // ecx
  RGNOBJ *v59; // rbx
  __int64 v60; // rcx
  struct SCAN *pscnTail; // rax
  unsigned int v62; // [rsp+20h] [rbp-68h]
  struct SCAN *v63; // [rsp+28h] [rbp-60h]
  Win32kRS *v64; // [rsp+30h] [rbp-58h]
  __m128i v65; // [rsp+30h] [rbp-58h]
  Win32kRS **v68; // [rsp+A0h] [rbp+18h]

  v68 = (Win32kRS **)a3;
  v5 = (Win32kRS **)a3;
  v7 = a1;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    pScan_mut = Win32kRS::RegionCore_get_pScan_mut(*a2, (struct REGION_CORE *)a2);
  else
    pScan_mut = *(struct SCAN **)*a2;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    v9 = Win32kRS::RegionCore_get_pScan_mut(*v5, (struct REGION_CORE *)a2);
  else
    v9 = *(struct SCAN **)*v5;
  v10 = *a2;
  v11 = 0LL;
  v63 = v9;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    pscnTail_mut = Win32kRS::RegionCore_get_pscnTail_mut(v10, (struct REGION_CORE *)a2);
  else
    pscnTail_mut = (struct SCAN *)(*(_QWORD *)v10 + *((_QWORD *)v10 + 2));
  v13 = (__int64)pscnTail_mut - (unsigned int)(4 * *((_DWORD *)pscnTail_mut - 1) + 16) - 4;
  v14 = *v5;
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
    Win32kRS::RegionCore_set_sizeScan(*v7, 0LL, (unsigned int)a3);
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
    SystemArgument1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    v20 = *v7;
    v62 = 4 * (*(_DWORD *)v9 + *(_DWORD *)pScan_mut) + 16;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(SystemArgument1 + 8, 2LL);
      v21 = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)SystemArgument1 + 224LL))(v20);
      ExReleasePushLockSharedEx(SystemArgument1 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v21 = *((_DWORD *)v20 + 2);
    }
    v22 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
    v64 = *v7;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v22 + 8, 2LL);
      v23 = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)v22 + 216LL))(v64);
      v24 = v22 + 8;
      v25 = v23;
      ExReleasePushLockSharedEx(v24, 2LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v25 = *((_DWORD *)*v7 + 4);
    }
    if ( v62 > v21 - v25 )
    {
      v57 = 2LL * REGION_CORE::get_sizeScanAlloc(*v7);
      if ( v57 > 0xFFFFFFFF )
        return 0;
      v58 = v57 + v62;
      if ( (unsigned int)v57 + v62 < (unsigned int)v57 )
        return 0;
      if ( v58 + 1120 < v58 )
        return 0;
      v59 = *(RGNOBJ **)(a5 + 8);
      if ( !(unsigned int)RGNOBJ::bExpand(v59, v58 + 1120) )
        return 0;
      v60 = *(_QWORD *)v59 + 24LL;
      if ( !*(_QWORD *)v59 )
        v60 = 0LL;
      **(_QWORD **)a5 = v60;
      pscnTail = REGION_CORE::get_pscnTail(*v7);
      v18 = pscnTail;
      if ( v11 )
        v11 = (struct SCAN *)((char *)pscnTail - (unsigned int)(4 * *((_DWORD *)pscnTail - 1) + 16));
    }
    v26 = (int *)((char *)v9 + 12);
    v27 = *((_DWORD *)v9 + 1);
    v28 = (_DWORD *)((char *)v18 + 12);
    v29 = *((_DWORD *)pScan_mut + 2);
    v30 = (int *)((char *)pScan_mut + 12);
    v31 = *((_DWORD *)pScan_mut + 1);
    v32 = a4;
    if ( v29 >= *((_DWORD *)v9 + 2) )
      v29 = *((_DWORD *)v9 + 2);
    *((_DWORD *)v18 + 2) = v29;
    if ( v31 <= v27 )
      v31 = v27;
    *((_DWORD *)v18 + 1) = v31;
    v33 = *(_DWORD *)v9;
    v34 = 1;
    v35 = *(_DWORD *)pScan_mut;
    *(_DWORD *)v18 = 0;
    while ( v35 )
    {
      v36 = *v30;
      if ( v33 && (v55 = *v26, v36 >= *v26) )
      {
        ++v26;
        --v33;
        if ( v36 <= v55 )
        {
          ++v30;
          --v35;
          a3 = (Win32kRS *)((char *)&afjAB + v34);
        }
        else
        {
          v36 = v55;
          a3 = (Win32kRS *)((char *)&afjB + v34);
        }
      }
      else
      {
        ++v30;
        --v35;
        a3 = (Win32kRS *)((char *)&afjA + v34);
      }
LABEL_29:
      v34 = *(_BYTE *)a3;
      if ( (*(_BYTE *)a3 & v32) != 0 )
      {
        ++*(_DWORD *)v18;
        *v28++ = v36;
        v32 ^= 0xFu;
      }
    }
    if ( v33 )
    {
      v36 = *v26;
      --v33;
      ++v26;
      a3 = (Win32kRS *)((char *)&afjB + v34);
      goto LABEL_29;
    }
    v7 = a1;
    v9 = v63;
    *((_DWORD *)v18 + *(unsigned int *)v18 + 3) = *(_DWORD *)v18;
    if ( v11
      && *(_DWORD *)v11 == *(_DWORD *)v18
      && !memcmp((char *)v11 + 12, (char *)v18 + 12, 4LL * *(unsigned int *)v11) )
    {
      v56 = *((_DWORD *)v18 + 2);
      v18 = v11;
      *((_DWORD *)v11 + 2) = v56;
    }
    else if ( v11 != v18 )
    {
      v37 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1;
      v38 = *a1;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v37 + 8, 2LL);
        v39 = (*(__int64 (__fastcall **)(Win32kRS *))(*(_QWORD *)v37 + 216LL))(v38);
        v40 = v37 + 8;
        v41 = v39;
        ExReleasePushLockSharedEx(v40, 2LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v41 = *((_DWORD *)v38 + 4);
      }
      v42 = v41 + 4 * (*(_DWORD *)v18 + 4);
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        Win32kRS::RegionCore_set_sizeScan(v38, (struct REGION_CORE *)v42, (unsigned int)a3);
      }
      else
      {
        v43 = v42;
        v44 = *((_QWORD *)v38 + 1);
        *((_QWORD *)v38 + 2) = v43;
        if ( v44 < v43 )
        {
          *((_QWORD *)v38 + 2) = v44;
          RustOnZeroSizedScanCallback();
        }
      }
      ++*((_DWORD *)*a1 + 6);
    }
    v45 = *((_DWORD *)v18 + 2);
    if ( v45 == 0x7FFFFFFF )
      return 1;
    v16 = *(unsigned int *)v18;
    if ( (_DWORD)v16 )
    {
      a3 = *a1;
      v65 = *(__m128i *)((char *)*a1 + 28);
      v46 = _mm_cvtsi128_si32(v65);
      if ( *((_DWORD *)v18 + 3) < v46 )
        v46 = *((_DWORD *)v18 + 3);
      v65.m128i_i32[0] = v46;
      v47 = HIDWORD(*(_QWORD *)((char *)*a1 + 28));
      if ( *((_DWORD *)v18 + 1) < v65.m128i_i32[1] )
        v47 = *((_DWORD *)v18 + 1);
      v65.m128i_i32[1] = v47;
      v16 = *((unsigned int *)v18 + (unsigned int)(v16 - 1) + 3);
      v48 = *(_QWORD *)((char *)*a1 + 36);
      if ( (int)v16 > v65.m128i_i32[2] )
        v48 = v16;
      v65.m128i_i32[2] = v48;
      v49 = HIDWORD(*(_OWORD *)((char *)*a1 + 28));
      if ( v45 > v65.m128i_i32[3] )
        v49 = *((_DWORD *)v18 + 2);
      v65.m128i_i32[3] = v49;
      *(__m128i *)((char *)a3 + 28) = v65;
    }
    if ( v29 == *((_DWORD *)pScan_mut + 2) )
      pScan_mut = (struct SCAN *)((char *)pScan_mut + (unsigned int)(4 * *(_DWORD *)pScan_mut + 16));
    if ( v29 == *((_DWORD *)v63 + 2) )
    {
      v9 = (struct SCAN *)((char *)v63 + (unsigned int)(4 * *(_DWORD *)v63 + 16));
      v63 = v9;
    }
    v50 = *a2;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      v51 = Win32kRS::RegionCore_get_pscnTail_mut(v50, (struct REGION_CORE *)v16);
    else
      v51 = (struct SCAN *)(*(_QWORD *)v50 + *((_QWORD *)v50 + 2));
    if ( pScan_mut < v51 )
    {
      v52 = *v68;
      v53 = WPP_MAIN_CB.Dpc.SystemArgument1
          ? Win32kRS::RegionCore_get_pscnTail_mut(v52, (struct REGION_CORE *)v16)
          : (struct SCAN *)(*(_QWORD *)v52 + *((_QWORD *)v52 + 2));
      if ( v9 < v53 )
      {
        v11 = v18;
        continue;
      }
    }
    return 0;
  }
}
