/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x14022C950
 * Callers:
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiInsertProtectedStandbyPage @ 0x1402F09B0 (MiInsertProtectedStandbyPage.c)
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 *     MiHardFaultPageRelease @ 0x1402F303C (MiHardFaultPageRelease.c)
 *     MiCombineWithStandbyExisting @ 0x140313D4C (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiSwapHardFaultPage @ 0x140394570 (MiSwapHardFaultPage.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MiMirrorPerformBrownWrites @ 0x140455840 (MiMirrorPerformBrownWrites.c)
 *     MiMarkFileOnlyPfnGood @ 0x14067B63C (MiMarkFileOnlyPfnGood.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x1406849B0 (MiNoPagesLastChance.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

int __fastcall MiPfnReferenceCountIsZero(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r10
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // [rsp+40h] [rbp+8h]
  int v13; // [rsp+40h] [rbp+8h]

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    {
      v13 = *(_DWORD *)(a1 + 32);
      HIBYTE(v13) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v13;
    }
    v12 = *(_QWORD *)(a1 + 16);
    if ( (v12 & 0x400) == 0 && ((v12 & 4) != 0 || (v12 & 2) != 0) && v12 )
      MiReleasePageFileInfo(*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v12, 1LL);
    return MiInsertPageInFreeOrZeroedList(a2, 2LL);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = a1 + 16;
    if ( a1 + 16 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (v4 & 1) != 0
      && ((v4 & 0x42) == 0 || (v4 & 0x20) == 0)
      && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v10 = *(_QWORD *)(KernelWaitTime + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v10 & 0x20) != 0 )
            v4 |= 0x20uLL;
          v11 = v4;
          v4 |= 0x42uLL;
          if ( (v10 & 0x42) == 0 )
            v4 = v11;
        }
      }
    }
    v6 = -9LL;
    if ( (v4 & 0x400) != 0 )
      v6 = -2049LL;
    *(_QWORD *)v5 = v4 & v6;
    return MiInsertPageInList(a1);
  }
}
