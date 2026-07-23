/*
 * XREFs of CcGetVirtualAddress @ 0x140229480
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x1404568F4 (CcPurgeAndClearCacheSection.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     CcMapData @ 0x140960C20 (CcMapData.c)
 *     CcMapDataCommon @ 0x1409781B0 (CcMapDataCommon.c)
 *     CcMapAndCopyFromCache @ 0x140ABE1E0 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140ABE630 (CcMdlRead.c)
 * Callees:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     CcSetVacbLargeOffset @ 0x140357260 (CcSetVacbLargeOffset.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403EEF44 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403EEFB0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbInFreeList @ 0x1403EF028 (CcSetVacbInFreeList.c)
 *     CcGetVacbLargeOffset @ 0x1403EF0D0 (CcGetVacbLargeOffset.c)
 *     CcInsertVacbArray @ 0x1404844C8 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x14049EF5C (CcAllocateInitializeVacbArray.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MmReserveViewInSystemCache @ 0x1407EDCA8 (MmReserveViewInSystemCache.c)
 *     CcUnmapVacb @ 0x1409DC780 (CcUnmapVacb.c)
 */

__int64 __fastcall CcGetVirtualAddress(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, int a5, int a6)
{
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // r15d
  BOOL v11; // r14d
  bool v12; // cf
  unsigned int v13; // r12d
  __int64 InitializeVacbArray; // r14
  unsigned int v15; // ecx
  __int64 *v16; // rsi
  unsigned int v17; // r13d
  unsigned int v18; // edi
  __int64 v19; // r15
  __int64 v20; // rax
  KIRQL v21; // di
  __int64 v22; // rsi
  int v23; // esi
  __int64 VacbLargeOffset; // r13
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  __int64 v27; // rtt
  __int64 VacbMiss; // rax
  __int64 v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 *v33; // rdx
  __int64 v34; // rcx
  __int16 v35; // ax
  signed __int64 v36; // rax
  signed __int64 v37; // rdx
  __int64 v38; // rtt
  bool v39; // zf
  __int64 v40; // rdi
  __int64 v41; // rsi
  signed __int64 v42; // rbx
  signed __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r14
  KIRQL v46; // al
  __int64 v47; // rcx
  __int64 v48; // r8
  KIRQL v49; // si
  __int64 v50; // rax
  __int64 v52; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v53; // [rsp+38h] [rbp-60h]
  __int64 v54; // [rsp+40h] [rbp-58h] BYREF
  __int64 v55; // [rsp+48h] [rbp-50h]
  BOOL v56; // [rsp+A0h] [rbp+8h]
  unsigned int v57; // [rsp+A0h] [rbp+8h]
  __int64 v58; // [rsp+A8h] [rbp+10h]

  v53 = a2 & 0x3FFFF;
  LODWORD(v52) = 0;
  v8 = *(_QWORD *)(a1 + 536);
  v9 = *(_DWORD *)(a1 + 152);
  v10 = 1;
  v54 = a2 - (a2 & 0x3FFFF);
  v55 = v8;
  v11 = (v9 & 0x200) != 0;
  v56 = v11;
  if ( (v9 & 0x200) != 0 || a5 )
  {
    v13 = 1;
    if ( (unsigned int)CcNumberOfFreeVacbs >= 0x80 )
      goto LABEL_19;
    v12 = *(_DWORD *)(v8 + 1248) < 0x80u;
  }
  else
  {
    v12 = (unsigned int)CcNumberOfFreeVacbs < 0x80;
    v13 = 0;
  }
  if ( v12 )
  {
    InitializeVacbArray = CcAllocateInitializeVacbArray();
    if ( InitializeVacbArray )
    {
      if ( v13 == 1 )
      {
        v15 = *(_DWORD *)(v8 + 1248);
        if ( v15 < CcMinimumFreeHighPriorityVacbs )
        {
          v16 = (__int64 *)(InitializeVacbArray + 16);
          v17 = CcMinimumFreeHighPriorityVacbs - v15;
          if ( CcMinimumFreeHighPriorityVacbs - v15 <= CcMinimumFreeHighPriorityVacbs )
          {
            v18 = 0;
            if ( v17 )
            {
              v19 = v55;
              do
              {
                if ( v18 >= 0xCCC )
                  break;
                v20 = MmReserveViewInSystemCache(*(_QWORD *)(v19 + 8));
                *v16 = v20;
                if ( !v20 )
                  break;
                ++*(_DWORD *)(InitializeVacbArray + 4);
                ++v18;
                v16 += 5;
              }
              while ( v18 < v17 );
              v10 = 1;
            }
          }
        }
      }
      v21 = KeAcquireQueuedSpinLock(4uLL);
      CcInsertVacbArray(v55, InitializeVacbArray);
      KeReleaseQueuedSpinLock(4uLL, v21);
    }
    v11 = v56;
  }
LABEL_19:
  if ( a2 > *(_QWORD *)(a1 + 32) )
    KeBugCheckEx(0x34u, 0x59EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v22 = KeAbPreAcquire(a1 + 104, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 104, 0LL, v22, a1 + 104);
  if ( v22 )
    *(_BYTE *)(v22 + 10) = 1;
  if ( a6
    || (*(_DWORD *)(a1 + 152) & 0x800200) == 0x200
    || (*(_DWORD *)(a1 + 152) & 0x40000000) != 0
    || (v54 & 0xFFFFF) != 0
    || v54 < 0x100000
    || v54 == *(_QWORD *)(a1 + 344) )
  {
    v23 = 1;
  }
  else
  {
    v23 = v52;
  }
  if ( *(__int64 *)(a1 + 32) <= 0x2000000 )
    VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18));
  else
    VacbLargeOffset = CcGetVacbLargeOffset(a1, a2);
  v58 = VacbLargeOffset;
  if ( VacbLargeOffset )
  {
    v34 = *(_QWORD *)(VacbLargeOffset + 8);
    v35 = _InterlockedIncrement((volatile signed __int32 *)(VacbLargeOffset + 16));
    if ( !v35 )
      KeBugCheckEx(0x34u, 0xBACuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( v35 == 1 )
      _InterlockedIncrement((volatile signed __int32 *)(v34 + 552));
    _m_prefetchw((const void *)(a1 + 104));
    v36 = *(_QWORD *)(a1 + 104);
    v37 = v36 - 16;
    if ( (v36 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v37 = 0LL;
    if ( (v36 & 2) != 0
      || (v38 = *(_QWORD *)(a1 + 104),
          v38 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v37, v36)) )
    {
      ExfReleasePushLock(a1 + 104, v37);
    }
    KeAbPostRelease(a1 + 104);
    v29 = v54;
  }
  else
  {
    _m_prefetchw((const void *)(a1 + 104));
    v25 = *(_QWORD *)(a1 + 104);
    v26 = v25 - 16;
    if ( (v25 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v26 = 0LL;
    if ( (v25 & 2) != 0
      || (v27 = *(_QWORD *)(a1 + 104),
          v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 104), v26, v25)) )
    {
      ExfReleasePushLock(a1 + 104, v26);
    }
    KeAbPostRelease(a1 + 104);
    VacbMiss = CcGetVacbMiss(a1, a2, v11, v13);
    v29 = v54;
    VacbLargeOffset = VacbMiss;
    v58 = VacbMiss;
    if ( (*(_DWORD *)(a1 + 152) & 0x8000200) == 0x200 && (v54 & 0xFFFFF) == 0 && v54 >= 0x100000 )
    {
      v29 = v54 - 0x100000;
      v54 -= 0x100000LL;
      CcUnmapVacbArray(a1, &v54, 0x100000u, 1, 0, 0);
    }
  }
  if ( !v23 )
  {
    v30 = *(_DWORD *)(a1 + 152);
    if ( (v30 & 0x800000) == 0 )
    {
      v31 = CcUnmapBehindLength;
      v32 = a1;
      if ( v29 >= (unsigned int)CcUnmapBehindLength )
      {
        v33 = &v54;
        v54 = v29 - (unsigned int)CcUnmapBehindLength;
LABEL_80:
        CcUnmapVacbArray(v32, v33, v31, 1, 0, 0);
        goto LABEL_81;
      }
      v52 = 0LL;
LABEL_79:
      v33 = &v52;
      v31 = v29;
      goto LABEL_80;
    }
    if ( v29 < 8650752 )
    {
      v32 = a1;
      v52 = 0x40000LL;
      goto LABEL_79;
    }
    v39 = *(_QWORD *)(a1 + 88) == 0LL;
    v40 = v29 - 0x800000;
    v41 = *(_QWORD *)(a1 + 536);
    v55 = v41;
    if ( !v39 )
    {
      v57 = (v30 >> 9) & 1;
      v42 = v40 & 0xFFFFFFFFFFFC0000uLL;
      v43 = v40 + 0x800000;
      CcAcquireBcbLockAndVacbLock(v57, a1);
      *(_QWORD *)(a1 + 344) = v43;
      if ( v42 < v43 )
      {
        do
        {
          v44 = *(_QWORD *)(a1 + 32);
          if ( v42 < v44 )
          {
            v45 = v44 <= 0x2000000
                ? *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v42 >> 18))
                : CcGetVacbLargeOffset(a1, v42);
            if ( v45 )
            {
              if ( *(_WORD *)(v45 + 16) )
                break;
              if ( *(__int64 *)(a1 + 32) <= 0x2000000 )
                *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v42 >> 18)) = 0LL;
              else
                CcSetVacbLargeOffset(a1, v42, 0LL, 0LL);
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 548));
              if ( *(_DWORD *)(v41 + 1248) >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
                v10 &= ~2u;
              else
                v10 |= 2u;
              CcUnmapVacb(v45, a1, v10);
              v46 = KeAcquireQueuedSpinLock(4uLL);
              v47 = v55;
              v48 = v10 >> 1;
              LOBYTE(v48) = (v10 & 2) != 0;
              *(_QWORD *)(v45 + 8) = 0LL;
              v49 = v46;
              CcSetVacbInFreeList(v47, v45, v48);
              KeReleaseQueuedSpinLock(4uLL, v49);
              v41 = v55;
            }
          }
          v42 += 0x40000LL;
        }
        while ( v42 < v43 );
        VacbLargeOffset = v58;
      }
      CcReleaseBcbLockAndVacbLock(v57, a1);
    }
  }
LABEL_81:
  *a3 = VacbLargeOffset;
  v50 = v53;
  *a4 = 0x40000 - v53;
  return *(_QWORD *)VacbLargeOffset + v50;
}
