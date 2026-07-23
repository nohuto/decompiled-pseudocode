/*
 * XREFs of MiMakeFaultPfnActive @ 0x14025A13C
 * Callers:
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x140248450 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiIsPteInStore @ 0x140423310 (MiIsPteInStore.c)
 *     MiMakeProtoReadOnly @ 0x140484268 (MiMakeProtoReadOnly.c)
 */

char __fastcall MiMakeFaultPfnActive(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  ULONG_PTR *v9; // rsi
  ULONG_PTR v10; // rdi
  ULONG_PTR v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  ULONG_PTR *v17; // rbx
  unsigned __int64 TransitionPteValid; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  MiAddLockedPageCharge(a2, 3LL);
  *(_QWORD *)(a2 + 24) = (*(_QWORD *)(a2 + 24) + 1LL) ^ (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) + 1LL)) & 0xC000000000000000uLL;
  LODWORD(TransitionPteValid) = *(_DWORD *)(a2 + 32);
  BYTE2(TransitionPteValid) = BYTE2(TransitionPteValid) & 0xF8 | 6;
  *(_DWORD *)(a2 + 32) = TransitionPteValid;
  MiRemoveLockedPageChargeAndDecRef(a2);
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
  {
    v5 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    if ( (unsigned int)MiIsPteInStore(v5, *(_QWORD *)(a2 + 16)) )
    {
      v6 = MiCaptureDirtyBitToPfn(a2);
      if ( v6 )
        MiReleasePageFileInfo(v5, v6, 1LL, v7);
    }
  }
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 < 0 )
  {
    v9 = *(ULONG_PTR **)(v2 + 232);
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v9) >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v9, a2);
    TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)v9);
    v10 = TransitionPteValid;
    v11 = TransitionPteValid;
    v12 = 0;
    LODWORD(v8) = MiPteInShadowRange((unsigned __int64)v9);
    if ( (_DWORD)v8 )
    {
      LODWORD(v8) = MiSanitizeShadowPxe(v13, (__int64)&TransitionPteValid, v14);
      v11 = TransitionPteValid;
      v12 = v8;
    }
    v16 = 0x1000000000LL;
    if ( (MiFlags & 0x1000000000LL) != 0 && (v11 & 0x20) == 0 )
    {
      LOBYTE(v8) = 0;
      if ( (unsigned __int64)v9 >= 0xFFFFF6C000000000uLL )
      {
        LOBYTE(v8) = MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v9, v11, 128LL);
        v16 = 0x1000000000LL;
      }
    }
    *v9 = v11;
    if ( v12 )
      LOBYTE(v8) = MiWritePteShadow((__int64)v9, v11, v14, v15);
    v17 = (ULONG_PTR *)a1[6];
    if ( v17 )
    {
      if ( (v16 & MiFlags) != 0 && (v10 & 0x20) == 0 )
      {
        LOBYTE(v8) = 0;
        if ( (unsigned __int64)v17 >= 0xFFFFF6C000000000uLL )
          LOBYTE(v8) = MiCheckLinearProtectedPteAccessedBit(a1[6], v10, 128LL);
      }
      *v17 = v10;
    }
  }
  return v8;
}
