/*
 * XREFs of MiRemoveFaultNode @ 0x1404F8174
 * Callers:
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 *     MiScrubLargePage @ 0x14068EB34 (MiScrubLargePage.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiRemoveFaultNode(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  char v4; // bl
  volatile LONG *v5; // rdi
  __int64 *v6; // rcx

  if ( *(_BYTE *)(a1 + 325) )
  {
    if ( a2 )
    {
      CurrentIrql = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    }
    v4 = *(_BYTE *)(a1 + 326);
    v5 = &dword_140E2FF70;
    if ( v4 )
      v5 = &dword_140E2FF60;
    ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    v6 = &qword_140E2FF78;
    if ( v4 )
      v6 = &qword_140E2FF68;
    RtlAvlRemoveNode((unsigned __int64 *)v6, a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    *(_BYTE *)(a1 + 325) = 0;
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
}
