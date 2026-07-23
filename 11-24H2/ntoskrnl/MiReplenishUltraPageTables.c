/*
 * XREFs of MiReplenishUltraPageTables @ 0x1404129EC
 * Callers:
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiReassessZeroThreads @ 0x1404125C0 (MiReassessZeroThreads.c)
 *     MiCreateUltraThreadContextHelper @ 0x140412880 (MiCreateUltraThreadContextHelper.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiGetUltraPage @ 0x14033BE50 (MiGetUltraPage.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 */

void __fastcall MiReplenishUltraPageTables(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  volatile LONG *v6; // rdi
  KIRQL v7; // r14
  struct _KPRCB *v8; // r9
  __int64 UltraPage; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  _OWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1;
  v12[0] = 0LL;
  MiInitializePageColorBase(0LL, 3, a1 + 1, (__int64)v12);
  v4 = *(_QWORD *)(384 * v2 + qword_140E2DC38 + 376);
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
      if ( !(unsigned int)MiChargeResident(&MiSystemPartition, 1uLL, 0LL, v8) )
      {
        MiReturnCommit((__int64)&MiSystemPartition, 1LL, 0);
        return;
      }
      UltraPage = MiGetUltraPage((__int64)v12, a2);
      if ( UltraPage == -1 )
        break;
      v10 = (_QWORD *)(48 * UltraPage - 0x220000000000LL);
      if ( (unsigned int)MI_NODE_FROM_PFN((__int64)v10) != (_DWORD)v2 )
      {
        MiReleaseFreshPage((__int64)v10);
        break;
      }
      if ( v7 == 17 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v6);
      else
        ExAcquireSpinLockExclusive(v6);
      v11 = *(_QWORD **)(v5 + 8);
      if ( *v11 != v5 )
        __fastfail(3u);
      *v10 = v5;
      v10[1] = v11;
      *v11 = v10;
      *(_QWORD *)(v5 + 8) = v10;
      ++*(_QWORD *)(v5 + 16);
    }
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, 1uLL);
  }
}
