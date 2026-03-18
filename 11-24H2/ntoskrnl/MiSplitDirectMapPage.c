/*
 * XREFs of MiSplitDirectMapPage @ 0x1404D14D0
 * Callers:
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x14021F4F0 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiDereferenceControlAreaPfnList @ 0x14036FF5C (MiDereferenceControlAreaPfnList.c)
 *     MiUpdateTransitionPteFrame @ 0x140395BFC (MiUpdateTransitionPteFrame.c)
 *     MiInsertPageChainHead @ 0x14039EC34 (MiInsertPageChainHead.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiAddPageToHeatList @ 0x14043F8DC (MiAddPageToHeatList.c)
 *     MiCopyPfnEntryRaw @ 0x140441C20 (MiCopyPfnEntryRaw.c)
 *     MiColdPageSizeSupported @ 0x14044D5AC (MiColdPageSizeSupported.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
  __int64 *v17; // r12
  unsigned __int64 updated; // rbx
  int v19; // eax
  int v20; // ecx
  __int64 *v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // [rsp+20h] [rbp-48h]
  __int128 v25; // [rsp+30h] [rbp-38h] BYREF
  __int128 v26; // [rsp+40h] [rbp-28h]
  __int128 v27; // [rsp+50h] [rbp-18h]
  int v28; // [rsp+B0h] [rbp+48h]
  int v29; // [rsp+B0h] [rbp+48h]
  unsigned int v30; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v31; // [rsp+C0h] [rbp+58h]
  __int64 v32; // [rsp+C8h] [rbp+60h]

  v32 = a4;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v7 = *(_DWORD *)(a2 + 8);
  v8 = 48 * a3 - 0x220000000000LL;
  v9 = v7 ^ (_InterlockedExchangeAdd(*(volatile signed __int32 **)a2, 1u) % (unsigned int)dword_140E2DBC0[HIWORD(v7) & 3]);
  v24 = *(_QWORD *)a1;
  v10 = v7 ^ (unsigned __int8)v9;
  for ( i = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF)); ; MiWaitForFreePage(i, 0) )
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
      LOBYTE(v23) = v15;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
    }
    __writecr8(v15);
    return -1LL;
  }
  else
  {
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( *(__int64 *)(v14 + 24) < 0 );
    }
    MiFinalizePageAttribute(v14, (unsigned __int8)BYTE2(*(_DWORD *)(v8 + 32)) >> 6, 1LL);
    MiCopyPfnEntryRaw((__int64)&v25, (__int64 *)v8);
    v16 = a1[8];
    *((_QWORD *)&v27 + 1) &= ~0x20000000000000uLL;
    *(_QWORD *)&v26 = MiMakeDemandZeroPte((v16 >> 1) & 0x1F);
    MiCopyPfnEntryEx(v14, (__int64)&v25);
    MiSetPfnModified(v14, 1);
    HIWORD(v28) = HIWORD(*(_DWORD *)(v14 + 32));
    LOWORD(v28) = 0;
    *(_DWORD *)(v14 + 32) = v28;
    MiAddLockedPageCharge(v14, 1);
    MiDereferenceControlAreaPfnList(v24, 0LL, 1LL, 2);
    MiCopyPage(v13, a3, 6);
    v29 = *(_DWORD *)(v8 + 32);
    BYTE2(v29) = BYTE2(v29) & 0xF8 | 5;
    *(_DWORD *)(v8 + 32) = v29;
    v17 = (__int64 *)(MiMapPageInHyperSpaceWorker(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL)
                    + 8 * ((*(_QWORD *)(v8 + 8) >> 3) & 0x1FFLL));
    updated = MiUpdateTransitionPteFrame(*v17, v13);
    v31 = updated;
    if ( MiPteInShadowRange((unsigned __int64)v17) )
    {
      v19 = MiSanitizeShadowPxe();
      updated = v31;
    }
    else
    {
      v19 = 0;
    }
    *v17 = updated;
    if ( v19 )
      MiWritePteShadow();
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v17, 0x11u, 0x80000000);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int16)*(_DWORD *)(v8 + 32) == 1 && MiColdPageSizeSupported(1u, 0LL) )
      MiAddPageToHeatList(v32, a3, (unsigned int)(v20 + 2));
    v21 = a5;
    *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
    MiInsertPageChainHead(v21, (__int64 *)v8);
    MiUnlockPage(v8, v15);
    return v13;
  }
}
