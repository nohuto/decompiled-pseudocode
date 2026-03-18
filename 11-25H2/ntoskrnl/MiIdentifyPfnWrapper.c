/*
 * XREFs of MiIdentifyPfnWrapper @ 0x140220FB0
 * Callers:
 *     MiQueryLeafPte @ 0x1403DE2A0 (MiQueryLeafPte.c)
 *     MiLogAllocateWsleEvent @ 0x1404B0D94 (MiLogAllocateWsleEvent.c)
 *     MiScrubLargeMappedPage @ 0x140681CB8 (MiScrubLargeMappedPage.c)
 *     MmIdentifyPhysicalMemory @ 0x1407DBCA8 (MmIdentifyPhysicalMemory.c)
 *     MiScrubProcessLargePage @ 0x1407EDCB0 (MiScrubProcessLargePage.c)
 *     MmQueryPfnList @ 0x140935000 (MmQueryPfnList.c)
 *     MmRelocatePfnList @ 0x140ABD000 (MmRelocatePfnList.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 result; // rax

  v3 = 0xFFFFDE0000000000uLL;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( v5 > qword_140E2D9A0
    && !(unsigned int)MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), a2, 0xFFFFDE0000000000uLL) )
  {
LABEL_23:
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[2] |= 2uLL;
    result = 0LL;
    a2[1] = v5;
    return result;
  }
  v6 = v3 + 48 * v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (*(_QWORD *)(v6 + 40) & 0x40000000000000LL) == 0 && !(unsigned int)MiIsDecayPfn(v5, a2, v3) )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    goto LABEL_23;
  }
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( CurrentIrql == 17 )
    goto LABEL_23;
  v9 = MiIdentifyPfn(v5, a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v9;
}
