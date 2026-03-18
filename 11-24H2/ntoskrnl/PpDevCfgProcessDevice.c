/*
 * XREFs of PpDevCfgProcessDevice @ 0x140A9F37C
 * Callers:
 *     PiConfigureDevice @ 0x140723EEC (PiConfigureDevice.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     PiDevCfgProcessDevice @ 0x140996E44 (PiDevCfgProcessDevice.c)
 */

__int64 __fastcall PpDevCfgProcessDevice(__int64 a1, void *a2, char a3)
{
  if ( PiDevCfgMode )
    return PiDevCfgProcessDevice(a1, a2, a3);
  else
    return 3221225659LL;
}
