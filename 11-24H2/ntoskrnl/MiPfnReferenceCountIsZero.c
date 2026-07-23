/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x140300260
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x1402567C0 (MiInsertProtectedStandbyPage.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiSwapHardFaultPage @ 0x14038DB8C (MiSwapHardFaultPage.c)
 *     MiCombineWithStandbyExisting @ 0x1403F1098 (MiCombineWithStandbyExisting.c)
 *     MiMirrorPerformBrownWrites @ 0x14044A580 (MiMirrorPerformBrownWrites.c)
 *     MiMarkFileOnlyPfnGood @ 0x14067C81C (MiMarkFileOnlyPfnGood.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

int __fastcall MiPfnReferenceCountIsZero(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r10
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // [rsp+40h] [rbp+8h]
  int v14; // [rsp+40h] [rbp+8h]

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    {
      v14 = *(_DWORD *)(a1 + 32);
      HIBYTE(v14) &= ~0x10u;
      *(_DWORD *)(a1 + 32) = v14;
    }
    v13 = *(_QWORD *)(a1 + 16);
    if ( (v13 & 0x400) == 0 && ((v13 & 4) != 0 || (v13 & 2) != 0) && v13 )
      MiReleasePageFileInfo(*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)), v13, 1LL, a1);
    return MiInsertPageInFreeOrZeroedList(a2, 2LL);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = a1 + 16;
    if ( (unsigned __int64)(a1 + 16) >= 0xFFFFF6FB7DBED000uLL
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
          v11 = *(_QWORD *)(KernelWaitTime + 8 * ((v5 >> 3) & 0x1FF));
          if ( (v11 & 0x20) != 0 )
            v4 |= 0x20uLL;
          v12 = v4;
          v4 |= 0x42uLL;
          if ( (v11 & 0x42) == 0 )
            v4 = v12;
        }
      }
    }
    v6 = -9LL;
    if ( (v4 & 0x400) != 0 )
      v6 = -2049LL;
    *(_QWORD *)v5 = v4 & v6;
    if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
      v7 = 8LL;
    else
      v7 = 4LL;
    return MiInsertPageInList(a1, v7);
  }
}
