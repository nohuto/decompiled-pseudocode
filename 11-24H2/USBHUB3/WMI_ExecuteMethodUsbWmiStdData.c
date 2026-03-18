/*
 * XREFs of WMI_ExecuteMethodUsbWmiStdData @ 0x14008E990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     WMI_AcquireBusInfo @ 0x14008E6B8 (WMI_AcquireBusInfo.c)
 *     WMI_AcquireControllerName @ 0x14008E7B4 (WMI_AcquireControllerName.c)
 *     WMI_AcquireHubName @ 0x14008E89C (WMI_AcquireHubName.c)
 *     WMI_ResetOvercurrent @ 0x14008FB14 (WMI_ResetOvercurrent.c)
 */

__int64 __fastcall WMI_ExecuteMethodUsbWmiStdData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax

  v6 = 0;
  *a6 = 0;
  if ( a4 >= 4 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v8,
           off_14006C198);
    switch ( *a5 )
    {
      case 4:
        return (unsigned int)WMI_ResetOvercurrent(v9, a4, a6);
      case 5:
        return (unsigned int)WMI_AcquireBusInfo(v9, a4, a6, a5);
      case 6:
        return (unsigned int)WMI_AcquireHubName(v9, a4, a6, (__int64)a5);
      case 7:
        return (unsigned int)WMI_AcquireControllerName(v9, a4, a6, (__int64)a5);
      default:
        return v6;
    }
  }
  return (unsigned int)-1073741789;
}
