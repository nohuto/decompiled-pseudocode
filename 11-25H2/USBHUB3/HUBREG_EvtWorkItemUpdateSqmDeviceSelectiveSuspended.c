/*
 * XREFs of HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended @ 0x140088170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x14008D400 (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBREG_EvtWorkItemUpdateSqmDeviceSelectiveSuspended(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             v2,
             off_14006C0F8);
  v4 = *(_QWORD *)(result + 24);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 1632) >> 10) & 1;
    HUBREG_WriteValueToDeviceHardwareKey(v4, (unsigned int)L"02", 4, 4, (__int64)&v5);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  }
  return result;
}
