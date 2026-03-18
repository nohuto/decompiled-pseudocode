/*
 * XREFs of MiSplitDirectMapPage @ 0x1404D1400
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 * Callees:
 *     MiInsertPageChainHead @ 0x1402271F0 (MiInsertPageChainHead.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x14024DDE0 (MiFinalizePageAttribute.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x1402D110C (MiUpdateTransitionPteFrame.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiDereferenceControlAreaPfnList @ 0x140419984 (MiDereferenceControlAreaPfnList.c)
 *     MiAddPageToHeatList @ 0x14044047C (MiAddPageToHeatList.c)
 *     MiCopyPfnEntryRaw @ 0x140441F40 (MiCopyPfnEntryRaw.c)
 *     MiColdPageSizeSupported @ 0x14044D2E0 (MiColdPageSizeSupported.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSplitDirectMapPage(_DWORD *a1, __int64 a2, ULONG_PTR a3, __int64 a4, __int64 *a5)
{
  unsigned int v7; // ecx
  __int64 v8; // rdi
  unsigned __int32 v9; // edx
  unsigned int v10; // ebx
  __int64 i; // rsi
  __int64 Page; // rax
  ULONG_PTR v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  unsigned int v16; // ecx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 *v19; // r12
  unsigned __int64 updated; // rbx
  int v21; // eax
  int v22; // ecx
  __int64 *v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  __int128 v28; // [rsp+40h] [rbp-28h]
  __int128 v29; // [rsp+50h] [rbp-18h]
  int v30; // [rsp+B0h] [rbp+48h]
  int v31; // [rsp+B0h] [rbp+48h]
  int v32; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v33; // [rsp+C0h] [rbp+58h]
  __int64 v34; // [rsp+C8h] [rbp+60h]

  v34 = a4;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = 48 * a3 - 0x220000000000LL;
  v9 = v7 ^ (_InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) % (unsigned int)dword_140E2D980[HIWORD(v7) & 3]);
  v26 = *(_QWORD *)a1;
  v10 = v7 ^ (unsigned __int8)v9;
  for ( i = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF)); ; MiWaitForFreePage(i, 0) )
  {
    Page = MiGetPage(i, v10, 0);
    v13 = Page;
    if ( Page != -1 )
      break;
  }
  v14 = 48 * Page - 0x220000000000LL;
  v15 = (unsigned __int8)MiLockPageInline(v8);
  if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 || (*(_BYTE *)(v8 + 35) & 0x10) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPageAtDpc(v14);
    if ( KiIrqlFlags )
    {
      LOBYTE(v25) = v15;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
    }
    __writecr8(v15);
    return -1LL;
  }
  else
  {
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v32);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    MiFinalizePageAttribute(v14, (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6, 1LL);
    MiCopyPfnEntryRaw((__int64)&v27, (__int64 *)v8);
    v16 = a1[8];
    *((_QWORD *)&v29 + 1) &= ~0x20000000000000uLL;
    *(_QWORD *)&v28 = MiMakeDemandZeroPte((v16 >> 1) & 0x1F);
    MiCopyPfnEntryEx(v14, (__int64)&v27);
    MiSetPfnModified(v14, 1);
    HIWORD(v30) = HIWORD(*(_DWORD *)(v14 + 32));
    LOWORD(v30) = 0;
    *(_DWORD *)(v14 + 32) = v30;
    MiAddLockedPageCharge(v14, 1, v17, v18);
    MiDereferenceControlAreaPfnList(v26, 0LL, 1LL, 2);
    MiCopyPage(v13, a3, 6);
    v31 = *(_DWORD *)(v8 + 32);
    BYTE2(v31) = BYTE2(v31) & 0xF8 | 5;
    *(_DWORD *)(v8 + 32) = v31;
    v19 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                    + 8 * ((*(_QWORD *)(v8 + 8) >> 3) & 0x1FFLL));
    updated = MiUpdateTransitionPteFrame(*v19, v13);
    v33 = updated;
    if ( MiPteInShadowRange((unsigned __int64)v19) )
    {
      v21 = MiSanitizeShadowPxe();
      updated = v33;
    }
    else
    {
      v21 = 0;
    }
    *v19 = updated;
    if ( v21 )
      MiWritePteShadow();
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v19, 0x11u, 0x80000000);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int16)*(_DWORD *)(v8 + 32) == 1 && MiColdPageSizeSupported(1u, 0LL) )
      MiAddPageToHeatList(v34, a3, (unsigned int)(v22 + 2));
    v23 = a5;
    *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
    MiInsertPageChainHead(v23, (__int64 *)v8);
    MiUnlockPage(v8, v15);
    return v13;
  }
}
