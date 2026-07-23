/*
 * XREFs of MiSplitDirectMapPage @ 0x1404CA510
 * Callers:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiDereferenceControlAreaPfnList @ 0x14021DC9C (MiDereferenceControlAreaPfnList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x14024C240 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiUpdateTransitionPteFrame @ 0x14038F5E4 (MiUpdateTransitionPteFrame.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     MiCopyPfnEntryRaw @ 0x1404386A0 (MiCopyPfnEntryRaw.c)
 *     MiColdPageSizeSupported @ 0x1404444AC (MiColdPageSizeSupported.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSplitDirectMapPage(_DWORD *a1, __int64 a2, ULONG_PTR a3, __int64 a4, __int64 *a5)
{
  unsigned int v7; // ecx
  __int64 v8; // rdi
  unsigned __int32 v9; // edx
  unsigned int v10; // ebx
  __int64 i; // rsi
  __int64 Page; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  unsigned int v22; // ecx
  __int64 *v23; // r12
  unsigned __int64 updated; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  int v29; // ecx
  __int64 *v30; // rcx
  __int64 v32; // rdx
  __int64 v33; // [rsp+20h] [rbp-48h]
  __int128 v34; // [rsp+30h] [rbp-38h] BYREF
  __int128 v35; // [rsp+40h] [rbp-28h]
  __int128 v36; // [rsp+50h] [rbp-18h]
  int v37; // [rsp+B0h] [rbp+48h]
  int v38; // [rsp+B0h] [rbp+48h]
  unsigned int v39; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v40; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v41; // [rsp+C8h] [rbp+60h]

  v41 = a4;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = 48 * a3 - 0x220000000000LL;
  v9 = v7 ^ (_InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) % (unsigned int)dword_140E2DD00[HIWORD(v7) & 3]);
  v33 = *(_QWORD *)a1;
  v10 = v7 ^ (unsigned __int8)v9;
  for ( i = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF)); ; MiWaitForFreePage(i, 0) )
  {
    Page = MiGetPage(i, v10, 0);
    v16 = Page;
    if ( Page != -1 )
      break;
  }
  v17 = 48 * Page - 0x220000000000LL;
  v21 = (unsigned __int8)MiLockPageInline(v8, v13, v14, v15);
  if ( (*(_DWORD *)(v8 + 32) & 0x40000000) != 0 || (*(_BYTE *)(v8 + 35) & 0x10) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPageAtDpc(v17, v18, v19, v20);
    if ( KiIrqlFlags )
    {
      LOBYTE(v32) = v21;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
    }
    __writecr8(v21);
    return -1LL;
  }
  else
  {
    v39 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    MiFinalizePageAttribute(v17, (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6, 1LL);
    MiCopyPfnEntryRaw((__int64)&v34, (__int64 *)v8);
    v22 = a1[8];
    *((_QWORD *)&v36 + 1) &= ~0x20000000000000uLL;
    *(_QWORD *)&v35 = MiMakeDemandZeroPte((v22 >> 1) & 0x1F);
    MiCopyPfnEntryEx(v17, (__int64)&v34);
    MiSetPfnModified(v17, 1);
    HIWORD(v37) = HIWORD(*(_DWORD *)(v17 + 32));
    LOWORD(v37) = 0;
    *(_DWORD *)(v17 + 32) = v37;
    MiAddLockedPageCharge(v17, 1);
    MiDereferenceControlAreaPfnList(v33, 0LL, 1LL, 2);
    MiCopyPage(v16, a3, 6);
    v38 = *(_DWORD *)(v8 + 32);
    BYTE2(v38) = BYTE2(v38) & 0xF8 | 5;
    *(_DWORD *)(v8 + 32) = v38;
    v23 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                    + 8 * ((*(_QWORD *)(v8 + 8) >> 3) & 0x1FFLL));
    updated = MiUpdateTransitionPteFrame(*v23, v16);
    v40 = updated;
    if ( MiPteInShadowRange((unsigned __int64)v23) )
    {
      v28 = MiSanitizeShadowPxe(v25, (__int64)&v40, v26);
      updated = v40;
    }
    else
    {
      v28 = 0;
    }
    *v23 = updated;
    if ( v28 )
      MiWritePteShadow((__int64)v23, updated, v26, v27);
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v23, 0x11u, 0x80000000);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int16)*(_DWORD *)(v8 + 32) == 1 && MiColdPageSizeSupported(1u, 0LL) )
      MiAddPageToHeatList(v41, a3, (unsigned int)(v29 + 2));
    v30 = a5;
    *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
    MiInsertPageChainHead(v30, (__int64 *)v8);
    MiUnlockPage(v8, v21);
    return v16;
  }
}
