/*
 * XREFs of MiSwapHardFaultPage @ 0x1402D11D4
 * Callers:
 *     MiHardFaultPageRelease @ 0x14023EBE8 (MiHardFaultPageRelease.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveLockedPageCharge @ 0x140235C40 (MiRemoveLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x1402D110C (MiUpdateTransitionPteFrame.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 */

__int64 __fastcall MiSwapHardFaultPage(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 result; // rax
  int v13; // [rsp+50h] [rbp+8h]
  unsigned __int64 updated; // [rsp+58h] [rbp+10h] BYREF

  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  updated = MiUpdateTransitionPteFrame(v6, 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4));
  v7 = updated;
  v8 = 0;
  if ( MiPteInShadowRange((unsigned __int64)a1) )
  {
    v10 = MiSanitizeShadowPxe(v9, &updated);
    v7 = updated;
    v8 = v10;
  }
  *a1 = v7;
  if ( v8 )
    MiWritePteShadow(a1, v7);
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a3 + 24) < 0 );
  }
  MiCopyPfnEntryEx(a3, a2);
  if ( ((*(_QWORD *)(a2 + 40) >> 60) & 7) == 3 )
    MiSetPfnIdentity(a3, 3u);
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  if ( (*(_DWORD *)(a2 + 16) & 4) != 0 )
    *(_QWORD *)(a2 + 16) &= ~4uLL;
  if ( (*(_DWORD *)(a2 + 16) & 2) != 0 )
    *(_QWORD *)(a2 + 16) &= ~2uLL;
  if ( (unsigned int)MiRemoveLockedPageCharge(a2) )
  {
    MiPfnReferenceCountIsZero(a2, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
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
