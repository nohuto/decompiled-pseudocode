/*
 * XREFs of MiFreeMdlPageRun @ 0x14038C69C
 * Callers:
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     MiFreePartitionPageRun @ 0x14067EC40 (MiFreePartitionPageRun.c)
 *     MiDeleteAweInfoPages @ 0x1407E9850 (MiDeleteAweInfoPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1402C541C (MiConvertSmallPageRangeToLarge.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     MiFreeSmallPageFromMdl @ 0x14038C9A8 (MiFreeSmallPageFromMdl.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiIsPfnRangeFromSlabAllocation @ 0x14038DC64 (MiIsPfnRangeFromSlabAllocation.c)
 *     MiResidentPageDangleFree @ 0x14038DCB0 (MiResidentPageDangleFree.c)
 */

__int64 __fastcall MiFreeMdlPageRun(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  unsigned int v7; // r15d
  int v9; // r11d
  unsigned __int8 CurrentIrql; // al
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  __int64 v13; // rbx
  __int64 v14; // r13
  unsigned __int64 v15; // r8
  __int64 v16; // r15
  __int64 v18; // r10
  __int64 v19; // rsi
  __int64 *v20; // r10
  ULONG_PTR v21; // rbx
  unsigned __int8 v22; // al
  __int64 v23; // rax
  ULONG_PTR *v24; // rcx
  int v25; // r13d
  __int64 v26; // [rsp+20h] [rbp-48h]
  ULONG_PTR v27; // [rsp+28h] [rbp-40h]
  int v28; // [rsp+78h] [rbp+10h]
  int v30; // [rsp+88h] [rbp+20h]

  v5 = -1LL;
  v6 = a2;
  v27 = -1LL;
  v7 = a3;
  v9 = a3 & 1;
  v28 = v9;
  CurrentIrql = KeGetCurrentIrql();
  v11 = 12;
  if ( CurrentIrql != 2 )
    v11 = 4;
  v12 = (v9 + 6) | 0x10;
  if ( CurrentIrql != 2 )
    v12 = v9 + 6;
  if ( (a4 & 1) != 0 )
  {
    v12 |= 0x20u;
    v11 |= 0x10u;
  }
  v13 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v14 = a5;
    while ( 1 )
    {
      v15 = 0xFFFFDE0000000000uLL;
      if ( (BugCheckParameter2 & 0xF) != 0 )
        goto LABEL_10;
      v19 = !_bittest64(&KeFeatureBits, 0x25u);
      v20 = &MiPageSizes[v19];
      do
      {
        v16 = *v20;
        if ( v6 >= *v20
          && ((v16 - 1) & BugCheckParameter2) == 0
          && !(unsigned int)MiIsPfnRangeFromSlabAllocation(BugCheckParameter2, *v20, v15)
          && (unsigned int)MiResidentPageDangleFree(BugCheckParameter2, (unsigned int)v19) )
        {
          break;
        }
        v19 = (unsigned int)(v19 + 1);
        ++v20;
      }
      while ( (unsigned int)v19 < 3 );
      if ( (unsigned int)v19 >= 3 )
        break;
      if ( v9 && v14 )
      {
        MiConvertSmallPageRangeToLarge(BugCheckParameter2, v19);
        v21 = 48 * BugCheckParameter2 - 0x220000000000LL;
        if ( (v11 & 8) != 0 )
        {
          v25 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v25 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          v22 = 17;
        }
        else
        {
          v22 = MiLockPageInline(48 * BugCheckParameter2 - 0x220000000000LL);
        }
        v30 = *(_DWORD *)(v21 + 32);
        BYTE2(v30) = BYTE2(v30) & 0xF8 | 5;
        *(_DWORD *)(v21 + 32) = v30;
        MiUnlockPage(48 * BugCheckParameter2 - 0x220000000000LL, v22);
        v23 = a5 + 24 * v19;
        v24 = *(ULONG_PTR **)(v23 + 8);
        if ( *v24 != v23 )
          __fastfail(3u);
        v14 = a5;
        *(_QWORD *)v21 = v23;
        *(_QWORD *)(v21 + 8) = v24;
        *v24 = v21;
        *(_QWORD *)(v23 + 8) = v21;
        ++*(_QWORD *)(v23 + 16);
        v13 = v26;
      }
      else
      {
        v13 += MiFreeLargePageMemory(BugCheckParameter2, v19, v12);
        v26 = v13;
      }
      v6 -= v16;
LABEL_12:
      BugCheckParameter2 += v16;
      if ( !v6 )
        return v13;
      v9 = v28;
      v5 = v27;
      v7 = a3;
    }
    v5 = v27;
    v7 = a3;
LABEL_10:
    if ( v5 != (BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL) )
    {
      v27 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
      if ( (unsigned int)MiGetPfnSlabType(48 * BugCheckParameter2 - 0x220000000000LL) == 9 )
        MiUpdateLargePageBitMap(v18, BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL, 512LL, 0LL);
    }
    v14 = a5;
    v13 += MiFreeSmallPageFromMdl(BugCheckParameter2, v7, v11, a5);
    v26 = v13;
    --v6;
    v16 = 1LL;
    goto LABEL_12;
  }
  return v13;
}
