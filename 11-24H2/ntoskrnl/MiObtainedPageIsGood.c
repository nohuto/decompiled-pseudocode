/*
 * XREFs of MiObtainedPageIsGood @ 0x14042F73C
 * Callers:
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1402F75B8 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiDemoteLargeFreePage @ 0x14042F57C (MiDemoteLargeFreePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiInsertPossiblyBadPage @ 0x140683470 (MiInsertPossiblyBadPage.c)
 */

__int64 __fastcall MiObtainedPageIsGood(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  ULONG_PTR v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 32) & 0x40000000) != 0
    || (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 && (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
  {
    v2 = 0;
    v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, a2);
      }
    }
    MiInsertPossiblyBadPage(v4);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      }
      __writecr8(CurrentIrql);
    }
  }
  return v2;
}
