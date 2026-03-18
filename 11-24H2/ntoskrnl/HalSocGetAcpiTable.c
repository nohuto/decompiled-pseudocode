/*
 * XREFs of HalSocGetAcpiTable @ 0x14055FF50
 * Callers:
 *     HalpWdatDiscover @ 0x14055F328 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x14055F730 (HalpWdatInitialize.c)
 *     HalpPmTimerDiscover @ 0x1405604A0 (HalpPmTimerDiscover.c)
 *     HalpHpetDiscover @ 0x140560868 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x140560DA0 (HalpApicTimerDiscover.c)
 *     HalpIommuRegisterBuiltinPlugins @ 0x140567690 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpApicDiscover @ 0x140568634 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1405693A4 (HalpPicDiscover.c)
 *     HalpPciGetHpetInterruptSource @ 0x140C15260 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140478488 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0LL, 0LL);
  else
    return 0LL;
}
