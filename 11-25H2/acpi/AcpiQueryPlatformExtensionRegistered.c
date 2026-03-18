/*
 * XREFs of AcpiQueryPlatformExtensionRegistered @ 0x140020868
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x140064BA8 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 AcpiQueryPlatformExtensionRegistered()
{
  return (*((__int64 (**)(void))&xmmword_140089ED0 + 1))();
}
