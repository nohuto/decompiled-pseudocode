/*
 * XREFs of MiReplenishUltraPageTables @ 0x1403C6DB8
 * Callers:
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiReassessZeroThreads @ 0x1403C698C (MiReassessZeroThreads.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403C6C4C (MiCreateUltraThreadContextHelper.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetUltraPage @ 0x1402F40C0 (MiGetUltraPage.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rax
  _OWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1;
  v13[0] = 0LL;
  MiInitializePageColorBase(0LL, 3, a1 + 1, (__int64)v13);
  v4 = *(_QWORD *)(384 * v2 + qword_140E2DAF8 + 376);
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
      UltraPage = MiGetUltraPage((__int64)v13, a2);
      if ( UltraPage == -1 )
        break;
      v9 = (_QWORD *)(48 * UltraPage - 0x220000000000LL);
      if ( (unsigned int)MI_NODE_FROM_PFN((__int64)v9) != (_DWORD)v2 )
      {
        MiReleaseFreshPage((__int64)v9, v10, v11);
        break;
      }
      if ( v7 == 17 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v6);
      else
        ExAcquireSpinLockExclusive(v6);
      v12 = *(_QWORD **)(v5 + 8);
      if ( *v12 != v5 )
        __fastfail(3u);
      *v9 = v5;
      v9[1] = v12;
      *v12 = v9;
      *(_QWORD *)(v5 + 8) = v9;
      ++*(_QWORD *)(v5 + 16);
    }
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, 1uLL);
  }
}
