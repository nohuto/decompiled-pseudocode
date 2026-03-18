/*
 * XREFs of PpDevCfgProcessDevice @ 0x140A9A1A4
 * Callers:
 *     PiConfigureDevice @ 0x140717DEC (PiConfigureDevice.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 */

__int64 __fastcall PpDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 7) )
    return PiDevCfgProcessDevice(a1, a2, a3);
  else
    return 3221225659LL;
}
