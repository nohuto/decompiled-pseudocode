/*
 * XREFs of MiFreeMdlPageRun @ 0x1402189BC
 * Callers:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MiFreePartitionPageRun @ 0x14068B600 (MiFreePartitionPageRun.c)
 *     MiDeleteAweInfoPages @ 0x1407F9E50 (MiDeleteAweInfoPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiFreeSmallPageFromMdl @ 0x140218CC8 (MiFreeSmallPageFromMdl.c)
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14034F90C (MiConvertSmallPageRangeToLarge.c)
 *     MiResidentPageDangleFree @ 0x140398908 (MiResidentPageDangleFree.c)
 *     MiIsPfnRangeFromSlabAllocation @ 0x14048421C (MiIsPfnRangeFromSlabAllocation.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR v23; // rbx
  char v24; // al
  __int64 v25; // rax
  ULONG_PTR *v26; // rcx
  unsigned int v27; // r13d
  __int64 v28; // [rsp+20h] [rbp-48h]
  ULONG_PTR v29; // [rsp+28h] [rbp-40h]
  int v30; // [rsp+78h] [rbp+10h]
  int v32; // [rsp+88h] [rbp+20h]

  v5 = -1LL;
  v6 = a2;
  v29 = -1LL;
  v7 = a3;
  v9 = a3 & 1;
  v30 = v9;
  v10 = 12;
  if ( KeGetCurrentIrql() != 2 )
    v10 = 4;
  if ( (a4 & 1) != 0 )
    v10 |= 0x10u;
  v11 = 0LL;
  v28 = 0LL;
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
        MiConvertSmallPageRangeToLarge(BugCheckParameter2, (unsigned int)v17, v13);
        v23 = 48 * BugCheckParameter2 - 0x220000000000LL;
        if ( (v10 & 8) != 0 )
        {
          v27 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v27 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20, v19, v21, v22) )
              {
                HvlNotifyLongSpinWait(v27);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          v24 = 17;
        }
        else
        {
          v24 = MiLockPageInline(48 * BugCheckParameter2 - 0x220000000000LL);
        }
        LOBYTE(v19) = v24;
        v32 = *(_DWORD *)(v23 + 32);
        BYTE2(v32) = BYTE2(v32) & 0xF8 | 5;
        *(_DWORD *)(v23 + 32) = v32;
        MiUnlockPage(48 * BugCheckParameter2 - 0x220000000000LL, v19);
        v25 = a5 + 24 * v17;
        v26 = *(ULONG_PTR **)(v25 + 8);
        if ( *v26 != v25 )
          __fastfail(3u);
        v12 = a5;
        *(_QWORD *)v23 = v25;
        *(_QWORD *)(v23 + 8) = v26;
        *v26 = v23;
        *(_QWORD *)(v25 + 8) = v23;
        ++*(_QWORD *)(v25 + 16);
        v11 = v28;
      }
      else
      {
        v11 += MiFreeLargePageMemory(BugCheckParameter2);
        v28 = v11;
      }
      v6 -= v14;
LABEL_10:
      BugCheckParameter2 += v14;
      if ( !v6 )
        return v11;
      v9 = v30;
      v5 = v29;
      v7 = a3;
    }
    v5 = v29;
    v7 = a3;
LABEL_8:
    if ( v5 != (BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL) )
    {
      v29 = BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL;
      if ( (unsigned int)MiGetPfnSlabType(48 * BugCheckParameter2 - 0x220000000000LL) == 9 )
        MiUpdateLargePageBitMap(v16, BugCheckParameter2 & 0xFFFFFFFFFFFFFE00uLL, 512LL, 0LL);
    }
    v12 = a5;
    v11 += MiFreeSmallPageFromMdl(BugCheckParameter2, v7, v10, a5);
    v28 = v11;
    --v6;
    v14 = 1LL;
    goto LABEL_10;
  }
  return v11;
}
