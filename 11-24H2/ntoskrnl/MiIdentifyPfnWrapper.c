/*
 * XREFs of MiIdentifyPfnWrapper @ 0x140311220
 * Callers:
 *     MiQueryLeafPte @ 0x1403C9790 (MiQueryLeafPte.c)
 *     MiLogAllocateWsleEvent @ 0x1404AC4F8 (MiLogAllocateWsleEvent.c)
 *     MiScrubLargeMappedPage @ 0x14068E678 (MiScrubLargeMappedPage.c)
 *     MmIdentifyPhysicalMemory @ 0x1407EC118 (MmIdentifyPhysicalMemory.c)
 *     MiScrubProcessLargePage @ 0x1407FE2B0 (MiScrubProcessLargePage.c)
 *     MmQueryPfnList @ 0x1408F6430 (MmQueryPfnList.c)
 *     MmRelocatePfnList @ 0x1408F754C (MmRelocatePfnList.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 result; // rax

  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( v4 > qword_140E2DD20 && (v4 < qword_140E35C40 || v4 >= qword_140E35C40 + 2048) )
  {
LABEL_19:
    *a2 = 0LL;
    a2[2] = 0LL;
    a2[2] |= 2uLL;
    result = 0LL;
    a2[1] = v4;
    return result;
  }
  v5 = 16 * ((a1 + 0x220000000000LL) >> 4) - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (*(_QWORD *)(v5 + 40) & 0x40000000000000LL) == 0
    && !MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4)) )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    goto LABEL_19;
  }
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( CurrentIrql == 17 )
    goto LABEL_19;
  v8 = MiIdentifyPfn(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v8;
}
