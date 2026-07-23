/*
 * XREFs of MiRebuildLargePage @ 0x1403F7120
 * Callers:
 *     MiRebuildLargePages @ 0x1403F6DC0 (MiRebuildLargePages.c)
 *     MmManagePartitionCreateLargePages @ 0x1407FD440 (MmManagePartitionCreateLargePages.c)
 *     MmBuildLargePages @ 0x1409F091C (MmBuildLargePages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiFindRebuildCandidate @ 0x14030F7A0 (MiFindRebuildCandidate.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiNodeFreeZeroPages @ 0x14033FC00 (MiNodeFreeZeroPages.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14034F90C (MiConvertSmallPageRangeToLarge.c)
 *     MiGetNodeStandbyPageCount @ 0x1403F76CC (MiGetNodeStandbyPageCount.c)
 *     MiDereferencePageRuns @ 0x1403F89A4 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1403F8A50 (MiReferencePageRuns.c)
 *     MiNodeLargeFreeZeroPagesRange @ 0x14047E154 (MiNodeLargeFreeZeroPagesRange.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x14068461C (MiInsertPossiblyBadPage.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(
        unsigned __int64 a1,
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
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  unsigned __int8 v20; // si
  __int64 v21; // r15
  __int64 v22; // rcx
  ULONG_PTR v23; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v25; // rdx
  unsigned int v26; // esi
  __int64 v27; // rdx
  char v29; // [rsp+70h] [rbp-88h]
  int v30; // [rsp+74h] [rbp-84h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-80h] BYREF
  ULONG_PTR v32; // [rsp+80h] [rbp-78h]
  __int64 v33; // [rsp+88h] [rbp-70h]
  char *v34; // [rsp+90h] [rbp-68h]
  unsigned int *v35; // [rsp+98h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-58h]
  char v37; // [rsp+100h] [rbp+8h]

  v5 = 0;
  v6 = a2;
  BugCheckParameter2 = 0LL;
  v8 = 0LL;
  v9 = (unsigned __int8)MmNumberOfChannels;
  v29 = MmNumberOfChannels;
  v10 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = (unsigned int *)MiReferencePageRuns(a1, 1LL);
  v12 = qword_140E3D588;
  v13 = MiPageSizes[v10];
  v35 = v11;
  v33 = *(_QWORD *)(a1 + 16) + 57216 * v6;
  v32 = qword_140E3D588;
  v37 = 0;
  v14 = (char *)(v33 + 15233);
  if ( (unsigned __int8)v9 <= 1u )
  {
    v14 = 0LL;
  }
  else
  {
    v5 = *v14;
    v37 = *v14;
  }
  v15 = &v14[v9];
  v34 = &v14[v9];
LABEL_5:
  if ( v14 != v15 )
  {
    while ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      BugCheckParameter2 = MiFindRebuildCandidate(a1, v6, v5, v13, v12, v35, a5);
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
                  (_BYTE *)BugCheckParameter2,
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
        MiConvertSmallPageRangeToLarge(BugCheckParameter2, (unsigned int)v10);
        v23 = 48 * BugCheckParameter2 - 0x220000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v25 = 0LL;
        if ( KiIrqlFlags )
        {
          LOBYTE(v25) = 2;
          LOBYTE(v22) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v22, v25);
        }
        v26 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v26 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v26);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v23 + 24) < 0 );
        }
        *(_QWORD *)(v23 + 24) &= 0xC000000000000000uLL;
        HIWORD(v30) = HIWORD(*(_DWORD *)(v23 + 32));
        LOWORD(v30) = 0;
        *(_DWORD *)(v23 + 32) = v30;
        if ( (*(_QWORD *)(v23 + 40) & 0x20000000000LL) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiInsertPossiblyBadPage(BugCheckParameter2);
        }
        else
        {
          MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 2LL);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( KiIrqlFlags )
        {
          LOBYTE(v27) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
        }
        __writecr8(CurrentIrql);
        MiReleaseNonPagedResources(a1, v13);
        v8 += v13;
        if ( v8 >= a4 )
          break;
        LOBYTE(v9) = v29;
      }
      v19 = 0LL;
      v20 = 0;
      if ( MmNumberOfChannels )
      {
        v21 = v33;
        do
          v19 += MiNodeFreeZeroPages(v21, v20++, 0);
        while ( v20 < (unsigned __int8)MmNumberOfChannels );
        LODWORD(v6) = a2;
        LOBYTE(v9) = v29;
      }
      LODWORD(v10) = a3;
      if ( v13 > 0x10 )
        v19 += MiNodeLargeFreeZeroPagesRange(v33, v12, a3 + 1);
      if ( v19 < 0x1000 )
      {
        LOBYTE(v18) = 0;
        if ( (_BYTE)v9 )
        {
          do
          {
            v19 += MiGetNodeStandbyPageCount(a1, (unsigned int)v6, v18);
            LOBYTE(v18) = v18 + 1;
          }
          while ( (unsigned __int8)v18 < (unsigned __int8)v9 );
        }
        if ( v19 < a4 - v8 + 0x8000 )
          break;
      }
      v5 = v37;
      if ( !BugCheckParameter2 )
      {
LABEL_23:
        v15 = v34;
        ++v14;
        v12 = v32;
        if ( (unsigned __int8)v9 > 1u )
        {
          v5 = *v14;
          v37 = *v14;
        }
        goto LABEL_5;
      }
      v12 = BugCheckParameter2 - 1;
      v32 = BugCheckParameter2 - 1;
    }
  }
  MiDereferencePageRuns(v35, v12);
  return v8;
}
