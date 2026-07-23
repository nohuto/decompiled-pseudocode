/*
 * XREFs of MiProcessWsInSwapFault @ 0x140215CA4
 * Callers:
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     MiReleaseWsSwapReservationPfn @ 0x140215E44 (MiReleaseWsSwapReservationPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiGetVaAge @ 0x140296DE0 (MiGetVaAge.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
 */

__int64 __fastcall MiProcessWsInSwapFault(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // r9

  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
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
  v11 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v9 )
    MiReleasePageFileInfo(v11, v9, 1LL);
  if ( a4 )
  {
    MI_READ_PTE_LOCK_FREE(a4, v12, v10);
    return MiWriteValidPteNewProtection(a4);
  }
  else
  {
    result = MiGetVaAge(v11, a3);
    if ( (_BYTE)result != 1 && (unsigned __int8)result < 7u )
    {
      LOBYTE(v14) = 1;
      return MiSetVaAgeList(a1, a3, 1LL, v14);
    }
  }
  return result;
}
