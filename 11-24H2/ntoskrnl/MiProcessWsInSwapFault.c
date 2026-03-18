/*
 * XREFs of MiProcessWsInSwapFault @ 0x14046DEB4
 * Callers:
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiGetVaAge @ 0x1402871E0 (MiGetVaAge.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1402E46AC (MiReleaseWsSwapReservationPfn.c)
 */

char __fastcall MiProcessWsInSwapFault(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v8; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  char result; // al
  __int64 v12; // rax

  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v9 = MiReleaseWsSwapReservationPfn(a2);
  v10 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 )
    MiReleasePageFileInfo(v10, v9, 1LL);
  if ( a4 )
  {
    v12 = MI_READ_PTE_LOCK_FREE(a4);
    return MiWriteValidPteNewProtection(a4, v12 & 0xFFFFFFFFFFFFFFDFuLL);
  }
  else
  {
    result = MiGetVaAge(v10, a3);
    if ( result != 1 && (unsigned __int8)result < 7u )
      return MiSetVaAgeList(a1, a3, 1u, 1u);
  }
  return result;
}
