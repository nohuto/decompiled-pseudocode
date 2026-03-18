/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x14004B8BC
 * Callers:
 *     VidSchiReadNodeConfiguration @ 0x1401105F4 (VidSchiReadNodeConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))DxgCoreInterface[1])(a1, 2LL, 131097LL);
}
