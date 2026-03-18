/*
 * XREFs of MiSwapHardFaultPage @ 0x140394570
 * Callers:
 *     MiHardFaultPageRelease @ 0x1402F303C (MiHardFaultPageRelease.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiRemoveLockedPageCharge @ 0x14028D4B0 (MiRemoveLockedPageCharge.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdateTransitionPteFrame @ 0x140395BFC (MiUpdateTransitionPteFrame.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 */

__int64 __fastcall MiSwapHardFaultPage(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebp
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 result; // rax
  int v13; // [rsp+50h] [rbp+8h]
  __int64 updated; // [rsp+58h] [rbp+10h]

  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  updated = MiUpdateTransitionPteFrame(v6, 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4));
  v7 = updated;
  v8 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    v7 = updated;
    v8 = MiSanitizeShadowPxe();
  }
  *a1 = v7;
  if ( v8 )
    MiWritePteShadow();
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a3 + 24) < 0 );
  }
  MiCopyPfnEntryEx(a3, a2);
  v11 = 3LL;
  if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 3 )
    MiSetPfnIdentity(a3, 3LL);
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  if ( (*(_DWORD *)(a2 + 16) & 4) != 0 )
    *(_QWORD *)(a2 + 16) &= ~4uLL;
  if ( (*(_DWORD *)(a2 + 16) & 2) != 0 )
    *(_QWORD *)(a2 + 16) &= ~2uLL;
  if ( (unsigned int)MiRemoveLockedPageCharge(a2, v11, v10) )
  {
    MiPfnReferenceCountIsZero(a2, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4));
  }
  else
  {
    HIWORD(v13) = HIWORD(*(_DWORD *)(a3 + 32));
    LOWORD(v13) = 1;
    *(_DWORD *)(a3 + 32) = v13;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
