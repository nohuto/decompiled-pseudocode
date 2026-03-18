/*
 * XREFs of MiFreeMdlPageRun @ 0x1403A1D8C
 * Callers:
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     MiFreePartitionPageRun @ 0x14068A4D0 (MiFreePartitionPageRun.c)
 *     MiDeleteAweInfoPages @ 0x1407F96E0 (MiDeleteAweInfoPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1402EE2CC (MiConvertSmallPageRangeToLarge.c)
 *     MiFreeSmallPageFromMdl @ 0x1403A2098 (MiFreeSmallPageFromMdl.c)
 *     MiUpdateLargePageBitMap @ 0x1403A29EC (MiUpdateLargePageBitMap.c)
 *     MiFreeLargePageMemory @ 0x1403A3588 (MiFreeLargePageMemory.c)
 *     MiResidentPageDangleFree @ 0x1403A9C78 (MiResidentPageDangleFree.c)
 *     MiIsPfnRangeFromSlabAllocation @ 0x14048925C (MiIsPfnRangeFromSlabAllocation.c)
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
  unsigned int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // r8
  __int64 v14; // r15
  __int64 v16; // r10
  __int64 v17; // rsi
  __int64 *v18; // r10
  ULONG_PTR v19; // rbx
  unsigned __int8 v20; // al
  __int64 v21; // rax
  ULONG_PTR *v22; // rcx
  unsigned int v23; // r13d
  __int64 v24; // [rsp+20h] [rbp-48h]
  ULONG_PTR v25; // [rsp+28h] [rbp-40h]
  int v26; // [rsp+78h] [rbp+10h]
  int v28; // [rsp+88h] [rbp+20h]

  v5 = -1LL;
  v6 = a2;
  v25 = -1LL;
  v7 = a3;
  v9 = a3 & 1;
  v26 = v9;
  v10 = 12;
  if ( KeGetCurrentIrql() != 2 )
    v10 = 4;
  if ( (a4 & 1) != 0 )
    v10 |= 0x10u;
  v11 = 0LL;
  v24 = 0LL;
  if ( a2 )
  {
    v12 = a5;
    while ( 1 )
    {
      v13 = 0xFFFFDE0000000000uLL;
      if ( (BugCheckParameter2 & 0xF) != 0 )
        goto LABEL_8;
      v17 = !_bittest64(&KeFeatureBits, 0x25u);
      v18 = &MiPageSizes[v17];
      do
      {
        v14 = *v18;
        if ( v6 >= *v18
          && ((v14 - 1) & BugCheckParameter2) == 0
          && !(unsigned int)MiIsPfnRangeFromSlabAllocation(BugCheckParameter2, *v18, v13)
          && (unsigned int)MiResidentPageDangleFree(BugCheckParameter2, (unsigned int)v17) )
        {
          break;
        }
        v17 = (unsigned int)(v17 + 1);
        ++v18;
      }
      while ( (unsigned int)v17 < 3 );
      if ( (unsigned int)v17 >= 3 )
        break;
      if ( v9 && v12 )
      {
        MiConvertSmallPageRangeToLarge(BugCheckParameter2, (unsigned int)v17);
        v19 = 48 * BugCheckParameter2 - 0x220000000000LL;
        if ( (v10 & 8) != 0 )
        {
          v23 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v23 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v23);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v19 + 24) < 0 );
          }
          v20 = 17;
        }
        else
        {
          v20 = MiLockPageInline(48 * BugCheckParameter2 - 0x220000000000LL);
        }
        v28 = *(_DWORD *)(v19 + 32);
        BYTE2(v28) = BYTE2(v28) & 0xF8 | 5;
        *(_DWORD *)(v19 + 32) = v28;
        MiUnlockPage(48 * BugCheckParameter2 - 0x220000000000LL, v20);
        v21 = a5 + 24 * v17;
        v22 = *(ULONG_PTR **)(v21 + 8);
        if ( *v22 != v21 )
          __fastfail(3u);
        v12 = a5;
        *(_QWORD *)v19 = v21;
        *(_QWORD *)(v19 + 8) = v22;
        *v22 = v19;
        *(_QWORD *)(v21 + 8) = v19;
        ++*(_QWORD *)(v21 + 16);
        v11 = v24;
      }
      else
      {
        v11 += MiFreeLargePageMemory(BugCheckParameter2);
        v24 = v11;
      }
      v6 -= v14;
LABEL_10:
      BugCheckParameter2 += v14;
      if ( !v6 )
        return v11;
      v9 = v26;
      v5 = v25;
      v7 = a3;
    }
    v5 = v25;
    v7 = a3;
LABEL_8:
    if ( v5 != (BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL) )
    {
      v25 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
      if ( (unsigned int)MiGetPfnSlabType(48 * BugCheckParameter2 - 0x220000000000LL) == 9 )
        MiUpdateLargePageBitMap(v16, BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL, 512LL, 0LL);
    }
    v12 = a5;
    v11 += MiFreeSmallPageFromMdl(BugCheckParameter2, v7, v10, a5);
    v24 = v11;
    --v6;
    v14 = 1LL;
    goto LABEL_10;
  }
  return v11;
}
