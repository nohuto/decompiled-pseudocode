/*
 * XREFs of HUBFDO_EvtDeviceArmWakeFromSx @ 0x14000D190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceArmWakeFromSx(__int64 a1)
{
  _InterlockedOr(
    (volatile signed __int32 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                + 1616))(
                                  WdfDriverGlobals,
                                  a1,
                                  off_14006C198)
                              + 40),
    0x400u);
  return 0LL;
}
