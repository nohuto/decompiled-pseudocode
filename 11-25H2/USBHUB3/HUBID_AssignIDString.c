/*
 * XREFs of HUBID_AssignIDString @ 0x14001E2B0
 * Callers:
 *     HUBID_BuildClassCompatibleID @ 0x14001E360 (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildCompatibleID @ 0x14001E7B4 (HUBID_BuildCompatibleID.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x14001ED6C (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildDeviceID @ 0x14001EFD4 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x14001F16C (HUBID_BuildHardwareID.c)
 *     HUBID_BuildHubCompatibleID @ 0x14001F358 (HUBID_BuildHubCompatibleID.c)
 * Callees:
 *     HUBID_AppendStringToIDString @ 0x14001E1D4 (HUBID_AppendStringToIDString.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBID_AssignIDString(const void **a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  int v7; // edx
  int v8; // edx
  int v9; // eax

  v4 = 0;
  if ( !a3 )
    goto LABEL_11;
  if ( !a2 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 1696))(
           WdfDriverGlobals,
           a3,
           a1);
LABEL_10:
    v4 = v9;
    if ( v9 < 0 )
      return v4;
    goto LABEL_11;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 1712))(
           WdfDriverGlobals,
           a3,
           a1);
    goto LABEL_10;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 1720))(
           WdfDriverGlobals,
           a3,
           a1);
    goto LABEL_10;
  }
  if ( v8 == 1 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const void **))(WdfFunctions_01015 + 3128))(
           WdfDriverGlobals,
           a3,
           a1);
    goto LABEL_10;
  }
LABEL_11:
  if ( a4 )
    return (unsigned int)HUBID_AppendStringToIDString(a1, a4);
  return v4;
}
