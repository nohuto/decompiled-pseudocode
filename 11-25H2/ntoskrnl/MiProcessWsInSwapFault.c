/*
 * XREFs of MiProcessWsInSwapFault @ 0x140388C2C
 * Callers:
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetVaAge @ 0x140381820 (MiGetVaAge.c)
 *     MiReleaseWsSwapReservationPfn @ 0x140387164 (MiReleaseWsSwapReservationPfn.c)
 */

char __fastcall MiProcessWsInSwapFault(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v8; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  char result; // al

  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v9 = MiReleaseWsSwapReservationPfn(a2);
  v10 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 )
    MiReleasePageFileInfo(v10, v9, 1);
  if ( a4 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(a4);
    return MiWriteValidPteNewProtection(a4, v11 & 0xFFFFFFFFFFFFFFDFuLL);
  }
  else
  {
    result = MiGetVaAge(v10, a3);
    if ( result != 1 && (unsigned __int8)result < 7u )
      return MiSetVaAgeList(a1, a3, 1u, 1u);
  }
  return result;
}
