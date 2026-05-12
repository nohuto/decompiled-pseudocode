/*
 * XREFs of WPP_SF_iD @ 0x1400A3B40
 * Callers:
 *     RaUnitGetContiguousPhysicalAddressIoctl @ 0x140093884 (RaUnitGetContiguousPhysicalAddressIoctl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_iD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_e6323699744f33baefc587a6e43a33df_Traceguids);
}
