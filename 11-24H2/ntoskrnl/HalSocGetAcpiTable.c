/*
 * XREFs of HalSocGetAcpiTable @ 0x14055DB80
 * Callers:
 *     HalpWdatDiscover @ 0x14055CF58 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x14055D360 (HalpWdatInitialize.c)
 *     HalpPmTimerDiscover @ 0x14055E0D0 (HalpPmTimerDiscover.c)
 *     HalpHpetDiscover @ 0x14055E498 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x14055E9D0 (HalpApicTimerDiscover.c)
 *     HalpIommuRegisterBuiltinPlugins @ 0x14056511C (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpApicDiscover @ 0x140566124 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x140566E94 (HalpPicDiscover.c)
 *     HalpPciGetHpetInterruptSource @ 0x140C17260 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
