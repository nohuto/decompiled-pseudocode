/*
 * XREFs of MiObtainedPageIsGood @ 0x14048BC58
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x14022A544 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiDemoteLargeFreePage @ 0x14048BA98 (MiDemoteLargeFreePage.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x140677C6C (MiInsertPossiblyBadPage.c)
 */

__int64 __fastcall MiObtainedPageIsGood(__int64 a1)
{
  unsigned int v1; // esi
  ULONG_PTR v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0
    || (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 && (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
  {
    v1 = 0;
    v3 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1);
      }
    }
    MiInsertPossiblyBadPage(v3);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      }
      __writecr8(CurrentIrql);
    }
  }
  return v1;
}
