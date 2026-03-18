/*
 * XREFs of MiMakeFaultPfnActive @ 0x140462FB4
 * Callers:
 *     MiHardFaultPageRelease @ 0x1402F303C (MiHardFaultPageRelease.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x14021B700 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIsPteInStore @ 0x1402E5460 (MiIsPteInStore.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiMakeProtoReadOnly @ 0x1404631B4 (MiMakeProtoReadOnly.c)
 */

char __fastcall MiMakeFaultPfnActive(__int64 *a1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  ULONG_PTR *v10; // rsi
  ULONG_PTR v11; // rbx
  int v12; // ebp
  __int64 v13; // r10
  ULONG_PTR *v14; // rbx
  int v16; // [rsp+50h] [rbp+8h]
  ULONG_PTR TransitionPteValid; // [rsp+50h] [rbp+8h]

  v2 = *a1;
  MiAddLockedPageCharge(a2, 3);
  v5 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = (v5 + 1) ^ (v5 ^ (v5 + 1)) & 0xC000000000000000uLL;
  v16 = *(_DWORD *)(a2 + 32);
  BYTE2(v16) = BYTE2(v16) & 0xF8 | 6;
  *(_DWORD *)(a2 + 32) = v16;
  MiRemoveLockedPageChargeAndDecRef(a2, v6, v5 + 1);
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
  {
    v7 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    if ( MiIsPteInStore(v7, *(_QWORD *)(a2 + 16)) )
    {
      v8 = MiCaptureDirtyBitToPfn(a2);
      if ( v8 )
        MiReleasePageFileInfo(v7, v8, 1LL);
    }
  }
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 < 0 )
  {
    v10 = *(ULONG_PTR **)(v2 + 232);
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v10) >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v10, a2);
    TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)v10);
    v11 = TransitionPteValid;
    v12 = 0;
    LODWORD(v9) = MiPteInShadowRange((unsigned __int64)v10);
    if ( (_DWORD)v9 )
    {
      LODWORD(v9) = MiSanitizeShadowPxe();
      v11 = TransitionPteValid;
      v12 = v9;
    }
    v13 = 0x1000000000LL;
    if ( (MiFlags & 0x1000000000LL) != 0 && (v11 & 0x20) == 0 )
    {
      LOBYTE(v9) = 0;
      if ( (unsigned __int64)v10 >= 0xFFFFF6C000000000uLL )
      {
        LOBYTE(v9) = MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v10, v11, 128);
        v13 = 0x1000000000LL;
      }
    }
    *v10 = v11;
    if ( v12 )
      LOBYTE(v9) = MiWritePteShadow();
    v14 = (ULONG_PTR *)a1[6];
    if ( v14 )
    {
      if ( (v13 & MiFlags) != 0 && (TransitionPteValid & 0x20) == 0 )
      {
        LOBYTE(v9) = 0;
        if ( (unsigned __int64)v14 >= 0xFFFFF6C000000000uLL )
          LOBYTE(v9) = MiCheckLinearProtectedPteAccessedBit(a1[6], TransitionPteValid, 128);
      }
      *v14 = TransitionPteValid;
    }
  }
  return v9;
}
