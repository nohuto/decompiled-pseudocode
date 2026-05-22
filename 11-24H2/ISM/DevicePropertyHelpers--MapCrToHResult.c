/*
 * XREFs of DevicePropertyHelpers::MapCrToHResult @ 0x1800D7030
 * Callers:
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x1800D4EDC (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     ?GetDriverProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z @ 0x1800D646C (-GetDriverProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z.c)
 *     ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x1800D6A10 (-Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DevicePropertyHelpers::MapCrToHResult(CONFIGRET a1)
{
  unsigned int v1; // ebx
  signed int v2; // eax

  v1 = 0;
  if ( a1 )
  {
    v2 = CM_MapCrToWin32Err(a1, 0x507u);
    if ( v2 > 0 )
      return (unsigned __int16)v2 | 0x80070000;
    else
      return (unsigned int)v2;
  }
  return v1;
}
