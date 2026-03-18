/*
 * XREFs of HUBPDO_EvtDeviceSelfManagedIoInit @ 0x140016360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceSelfManagedIoInit(__int64 a1)
{
  _InterlockedOr(
    (volatile signed __int32 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                + 1616))(
                                  WdfDriverGlobals,
                                  a1,
                                  off_14006C0F8)
                              + 32),
    1u);
  return 0LL;
}
