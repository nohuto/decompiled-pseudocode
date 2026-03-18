/*
 * XREFs of MiRemoveFaultNode @ 0x1404FA894
 * Callers:
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
 *     MiScrubLargePage @ 0x14068DA04 (MiScrubLargePage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
    v5 = &dword_140E2FE30;
    if ( v4 )
      v5 = &dword_140E2FE20;
    ExAcquireSpinLockExclusiveAtDpcLevel(v5);
    v6 = &qword_140E2FE38;
    if ( v4 )
      v6 = &qword_140E2FE28;
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
