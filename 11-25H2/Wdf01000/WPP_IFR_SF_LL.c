/*
 * XREFs of WPP_IFR_SF_LL @ 0x1400A6918
 * Callers:
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x14003C8C0 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 * Callees:
 *     FxIFR @ 0x14000CC40 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x140056368 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_LL(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        unsigned int flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 3u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxPkgPnp_cpp_Traceguids,
      0x59u,
      &flags,
      4LL,
      &id,
      4LL,
      0LL);
  FxIFR(globals, 3u, 0xCu, WPP_FxPkgPnp_cpp_Traceguids, 0x59u, &flags, 4LL, &id, 4LL, 0LL);
}
