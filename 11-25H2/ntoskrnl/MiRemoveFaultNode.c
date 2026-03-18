/*
 * XREFs of MiRemoveFaultNode @ 0x1404F83B4
 * Callers:
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    v5 = &dword_140E2FBF0;
    if ( v4 )
      v5 = &dword_140E2FBE0;
    ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    v6 = &qword_140E2FBF8;
    if ( v4 )
      v6 = &qword_140E2FBE8;
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
