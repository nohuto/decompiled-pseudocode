/*
 * XREFs of _anonymous_namespace_::WindowsSafeIsEqualString @ 0x1800394EC
 * Callers:
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180037980 (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180038FEC (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::WindowsSafeIsEqualString(HSTRING a1, HSTRING a2)
{
  char v2; // bl
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( !a2 )
    return 0;
  result = 0;
  if ( WindowsCompareStringOrdinal(a1, a2, &result) >= 0 )
    return result == 0;
  return v2;
}
