/*
 * XREFs of HalSocGetAcpiTable @ 0x14055D650
 * Callers:
 *     HalpWdatDiscover @ 0x14055CA28 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x14055CE30 (HalpWdatInitialize.c)
 *     HalpPmTimerDiscover @ 0x14055DBA0 (HalpPmTimerDiscover.c)
 *     HalpHpetDiscover @ 0x14055DF68 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x14055E4A0 (HalpApicTimerDiscover.c)
 *     HalpIommuRegisterBuiltinPlugins @ 0x140564AC0 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpApicDiscover @ 0x140565A64 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1405667D4 (HalpPicDiscover.c)
 *     HalpPciGetHpetInterruptSource @ 0x140C041D0 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1404130F8 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
