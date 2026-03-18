/*
 * XREFs of MiReplenishUltraPageTables @ 0x140436CB8
 * Callers:
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiReassessZeroThreads @ 0x140436884 (MiReassessZeroThreads.c)
 *     MiCreateUltraThreadContextHelper @ 0x140436B50 (MiCreateUltraThreadContextHelper.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiGetUltraPage @ 0x14022CD10 (MiGetUltraPage.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 */

void __fastcall MiReplenishUltraPageTables(unsigned int a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  volatile LONG *v6; // rdi
  KIRQL v7; // r14
  __int64 UltraPage; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  _OWORD v11[3]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1;
  v11[0] = 0LL;
  MiInitializePageColorBase(0LL, 3, a1 + 1, (__int64)v11);
  v4 = *(_QWORD *)(384 * v2 + qword_140E2D8B8 + 376);
  v5 = v4 + 776;
  if ( *(_QWORD *)(v4 + 792) < 0x100uLL )
  {
    v6 = (volatile LONG *)(v4 + 808);
    if ( (a2 & 4) != 0 )
    {
      v7 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v6);
    }
    else
    {
      v7 = ExAcquireSpinLockExclusive(v6);
    }
    while ( 1 )
    {
      if ( *(_QWORD *)(v5 + 16) >= 0x100uLL )
      {
        MiReleaseSpinLockExclusive(v6, v7);
        return;
      }
      MiReleaseSpinLockExclusive(v6, v7);
      if ( !(unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 1uLL, 0) )
        return;
      if ( !(unsigned int)MiChargeResident(&MiSystemPartition, 1uLL, 0LL) )
      {
        MiReturnCommit((__int64)&MiSystemPartition, 1LL, 0);
        return;
      }
      UltraPage = MiGetUltraPage((__int64)v11, a2);
      if ( UltraPage == -1 )
        break;
      v9 = (_QWORD *)(48 * UltraPage - 0x220000000000LL);
      if ( (unsigned int)MI_NODE_FROM_PFN((__int64)v9) != (_DWORD)v2 )
      {
        MiReleaseFreshPage((__int64)v9);
        break;
      }
      if ( v7 == 17 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v6);
      else
        ExAcquireSpinLockExclusive(v6);
      v10 = *(_QWORD **)(v5 + 8);
      if ( *v10 != v5 )
        __fastfail(3u);
      *v9 = v5;
      v9[1] = v10;
      *v10 = v9;
      *(_QWORD *)(v5 + 8) = v9;
      ++*(_QWORD *)(v5 + 16);
    }
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, 1uLL);
  }
}
