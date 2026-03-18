/*
 * XREFs of MiRebuildLargePage @ 0x1403BC60C
 * Callers:
 *     MiRebuildLargePages @ 0x1403BBD60 (MiRebuildLargePages.c)
 *     MmManagePartitionCreateLargePages @ 0x1407ECE40 (MmManagePartitionCreateLargePages.c)
 *     MmBuildLargePages @ 0x1409FE260 (MmBuildLargePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiFindRebuildCandidate @ 0x14021F550 (MiFindRebuildCandidate.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1402C541C (MiConvertSmallPageRangeToLarge.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateLargePageBitMap @ 0x14038D1D8 (MiUpdateLargePageBitMap.c)
 *     MiReferencePageRuns @ 0x1403BAA70 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1403BAB84 (MiDereferencePageRuns.c)
 *     MiNodeFreeZeroPages @ 0x1403BCBB0 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1403BCCEC (MiGetNodeStandbyPageCount.c)
 *     MiNodeLargeFreeZeroPagesRange @ 0x140482114 (MiNodeLargeFreeZeroPagesRange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  char v5; // di
  __int64 v6; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned int *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  char *v14; // r14
  char *v15; // rax
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdi
  unsigned __int8 v22; // si
  __int64 v23; // r15
  __int64 v24; // rcx
  ULONG_PTR v25; // rdi
  unsigned __int8 CurrentIrql; // r15
  int v27; // esi
  __int64 v28; // rdx
  char v30; // [rsp+70h] [rbp-88h]
  int v31; // [rsp+74h] [rbp-84h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-80h] BYREF
  ULONG_PTR v33; // [rsp+80h] [rbp-78h]
  __int64 v34; // [rsp+88h] [rbp-70h]
  char *v35; // [rsp+90h] [rbp-68h]
  unsigned int *v36; // [rsp+98h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-58h]
  char v38; // [rsp+100h] [rbp+8h]

  v5 = 0;
  v6 = a2;
  BugCheckParameter2 = 0LL;
  v8 = 0LL;
  v9 = (unsigned __int8)MmNumberOfChannels;
  v30 = MmNumberOfChannels;
  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = (unsigned int *)MiReferencePageRuns(a1, 1u);
  v12 = BugCheckParameter3;
  v13 = MiPageSizes[v10];
  v36 = v11;
  v34 = *(_QWORD *)(a1 + 16) + 57216 * v6;
  v33 = BugCheckParameter3;
  v38 = 0;
  v14 = (char *)(v34 + 15233);
  if ( (unsigned __int8)v9 <= 1u )
  {
    v14 = 0LL;
  }
  else
  {
    v5 = *v14;
    v38 = *v14;
  }
  v15 = &v14[v9];
  v35 = &v14[v9];
LABEL_5:
  if ( v14 != v15 )
  {
    while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      BugCheckParameter2 = MiFindRebuildCandidate(a1, v6, v5, v13, v12, v36, a5);
      if ( BugCheckParameter2 == -1LL )
        goto LABEL_23;
      v16 = 1082130432;
      if ( v13 == 512 )
      {
        v16 = 1115684864;
      }
      else if ( v13 == 16 )
      {
        v16 = 1098907648;
      }
      v17 = v16 | 0x8000000;
      if ( !a5 )
        v17 = v16;
      if ( (int)MiFindContiguousPagesEx(
                  a1,
                  BugCheckParameter2,
                  BugCheckParameter2 + v13 - 1,
                  v13,
                  0,
                  v13,
                  1u,
                  v6,
                  v5,
                  v17,
                  0,
                  0LL,
                  0LL,
                  &BugCheckParameter2) >= 0 )
      {
        if ( v13 >= 0x200 )
          MiUpdateLargePageBitMap(a1, BugCheckParameter2, v13, 2);
        MiConvertSmallPageRangeToLarge(BugCheckParameter2, v10);
        v25 = 48 * BugCheckParameter2 - 0x220000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v24) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v24);
        }
        v27 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v27 & HvlLongSpinCountMask) == 0
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
          while ( *(__int64 *)(v25 + 24) < 0 );
        }
        *(_QWORD *)(v25 + 24) &= 0xC000000000000000uLL;
        HIWORD(v31) = HIWORD(*(_DWORD *)(v25 + 32));
        LOWORD(v31) = 0;
        *(_DWORD *)(v25 + 32) = v31;
        if ( (*(_QWORD *)(v25 + 40) & 0x20000000000LL) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertPossiblyBadPage(BugCheckParameter2);
        }
        else
        {
          MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 2);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( KiIrqlFlags )
        {
          LOBYTE(v28) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
        }
        __writecr8(CurrentIrql);
        MiReleaseNonPagedResources(a1, v13);
        v8 += v13;
        if ( v8 >= a4 )
          break;
        LOBYTE(v9) = v30;
      }
      v21 = 0LL;
      v22 = 0;
      if ( MmNumberOfChannels )
      {
        v23 = v34;
        do
        {
          LOBYTE(v18) = v22;
          v21 += MiNodeFreeZeroPages(v23, v18, 0LL);
          ++v22;
        }
        while ( v22 < (unsigned __int8)MmNumberOfChannels );
        LODWORD(v6) = a2;
        LOBYTE(v9) = v30;
      }
      LODWORD(v10) = a3;
      if ( v13 > 0x10 )
        v21 += MiNodeLargeFreeZeroPagesRange(v34, v18, a3 + 1);
      if ( v21 < 0x1000 )
      {
        LOBYTE(v19) = 0;
        if ( (_BYTE)v9 )
        {
          do
          {
            v21 += MiGetNodeStandbyPageCount(a1, (unsigned int)v6, v19, v20);
            LOBYTE(v19) = v19 + 1;
          }
          while ( (unsigned __int8)v19 < (unsigned __int8)v9 );
        }
        if ( v21 < a4 - v8 + 0x8000 )
          break;
      }
      v5 = v38;
      if ( !BugCheckParameter2 )
      {
LABEL_23:
        v15 = v35;
        ++v14;
        v12 = v33;
        if ( (unsigned __int8)v9 > 1u )
        {
          v5 = *v14;
          v38 = *v14;
        }
        goto LABEL_5;
      }
      v12 = BugCheckParameter2 - 1;
      v33 = BugCheckParameter2 - 1;
    }
  }
  MiDereferencePageRuns((__int64)v36);
  return v8;
}
