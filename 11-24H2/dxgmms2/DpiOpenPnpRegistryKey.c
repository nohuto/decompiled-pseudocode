/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x14004AFCC
 * Callers:
 *     VidSchiReadNodeConfiguration @ 0x14010E3D4 (VidSchiReadNodeConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))DxgCoreInterface[1])(a1, 2LL, 131097LL);
}
