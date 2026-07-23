/*
 * XREFs of MiSwapHardFaultPage @ 0x14038DB8C
 * Callers:
 *     MiHardFaultPageRelease @ 0x140258B7C (MiHardFaultPageRelease.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiRemoveLockedPageCharge @ 0x14029D0B0 (MiRemoveLockedPageCharge.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiUpdateTransitionPteFrame @ 0x14038F5E4 (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiSwapHardFaultPage(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 result; // rax
  int v17; // [rsp+50h] [rbp+8h]
  __int64 updated; // [rsp+58h] [rbp+10h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  updated = MiUpdateTransitionPteFrame(v6, 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4));
  v7 = updated;
  v8 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    v12 = MiSanitizeShadowPxe(v9, (__int64)&updated, v10);
    v7 = updated;
    v8 = v12;
  }
  *a1 = v7;
  if ( v8 )
    MiWritePteShadow((__int64)a1, v7, v10, v11);
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v13);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a3 + 24) < 0 );
  }
  MiCopyPfnEntryEx(a3, a2);
  v15 = 3LL;
  if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 3 )
    MiSetPfnIdentity(a3, 3u);
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  if ( (*(_DWORD *)(a2 + 16) & 4) != 0 )
    *(_QWORD *)(a2 + 16) &= ~4uLL;
  if ( (*(_DWORD *)(a2 + 16) & 2) != 0 )
    *(_QWORD *)(a2 + 16) &= ~2uLL;
  if ( (unsigned int)MiRemoveLockedPageCharge(a2, v15, v14) )
  {
    MiPfnReferenceCountIsZero(a2, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  }
  else
  {
    HIWORD(v17) = HIWORD(*(_DWORD *)(a3 + 32));
    LOWORD(v17) = 1;
    *(_DWORD *)(a3 + 32) = v17;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
