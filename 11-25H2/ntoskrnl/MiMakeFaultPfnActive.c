/*
 * XREFs of MiMakeFaultPfnActive @ 0x1403FD984
 * Callers:
 *     MiHardFaultPageRelease @ 0x14023EBE8 (MiHardFaultPageRelease.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x140234420 (MiMakeTransitionPteValid.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiIsPteInStore @ 0x14037C500 (MiIsPteInStore.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeProtoReadOnly @ 0x1403FDB80 (MiMakeProtoReadOnly.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MiMakeFaultPfnActive(__int64 *a1, ULONG_PTR a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 result; // rax
  ULONG_PTR *v13; // rsi
  ULONG_PTR v14; // rdi
  ULONG_PTR v15; // rbx
  int v16; // ebp
  __int64 v17; // rcx
  __int64 v18; // r10
  ULONG_PTR *v19; // rbx
  unsigned __int64 TransitionPteValid; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  MiAddLockedPageCharge(a2, 3, a3, a4);
  v7 = *(_QWORD *)(a2 + 24);
  v8 = (v7 + 1) ^ (v7 ^ (v7 + 1)) & 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) = v8;
  LODWORD(TransitionPteValid) = *(_DWORD *)(a2 + 32);
  BYTE2(TransitionPteValid) = BYTE2(TransitionPteValid) & 0xF8 | 6;
  *(_DWORD *)(a2 + 32) = TransitionPteValid;
  MiRemoveLockedPageChargeAndDecRef(a2, v9, v7 + 1, v8);
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
  {
    v10 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    if ( MiIsPteInStore(v10, *(_QWORD *)(a2 + 16)) )
    {
      v11 = MiCaptureDirtyBitToPfn(a2);
      if ( v11 )
        MiReleasePageFileInfo(v10, v11, 1);
    }
  }
  result = *(_QWORD *)(a2 + 40);
  if ( result < 0 )
  {
    v13 = *(ULONG_PTR **)(v4 + 232);
    if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v13) >> 5) & 0x1F) == 0x18 )
      MiMakeProtoReadOnly(v13, a2);
    TransitionPteValid = MiMakeTransitionPteValid((unsigned __int64)v13);
    v14 = TransitionPteValid;
    v15 = TransitionPteValid;
    v16 = 0;
    result = MiPteInShadowRange((unsigned __int64)v13);
    if ( (_DWORD)result )
    {
      result = MiSanitizeShadowPxe(v17, &TransitionPteValid);
      v15 = TransitionPteValid;
      v16 = result;
    }
    v18 = 0x1000000000LL;
    if ( (MiFlags & 0x1000000000LL) != 0 && (v15 & 0x20) == 0 )
    {
      result = 0xFFFFF6C000000000uLL;
      if ( (unsigned __int64)v13 >= 0xFFFFF6C000000000uLL )
      {
        result = MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v13, v15, 128);
        v18 = 0x1000000000LL;
      }
    }
    *v13 = v15;
    if ( v16 )
      result = MiWritePteShadow(v13, v15);
    v19 = (ULONG_PTR *)a1[6];
    if ( v19 )
    {
      if ( (v18 & MiFlags) != 0 && (v14 & 0x20) == 0 )
      {
        result = 0xFFFFF6C000000000uLL;
        if ( (unsigned __int64)v19 >= 0xFFFFF6C000000000uLL )
          result = MiCheckLinearProtectedPteAccessedBit(a1[6], v14, 128);
      }
      *v19 = v14;
    }
  }
  return result;
}
