/*
 * XREFs of HUBPDO_AssignPDOIds @ 0x140080A64
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1400811E8 (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     HUBID_BuildCompatibleID @ 0x14001E7B4 (HUBID_BuildCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x14001E89C (HUBID_BuildContainerID.c)
 *     HUBID_BuildDeviceID @ 0x14001EFD4 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x14001F16C (HUBID_BuildHardwareID.c)
 *     HUBID_BuildUxdPnpId @ 0x14001F438 (HUBID_BuildUxdPnpId.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBREG_UpdateUxdSettings @ 0x14008CEA4 (HUBREG_UpdateUxdSettings.c)
 */

__int64 __fastcall HUBPDO_AssignPDOIds(__int64 a1, __int64 a2)
{
  NTSTATUS v4; // ebx
  __int64 v5; // r9
  unsigned __int16 v6; // r9
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int16 v10; // dx
  NTSTATUS v12; // [rsp+28h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)&DestinationString.Length = 3670016LL;
  DestinationString.Buffer = (wchar_t *)&v14;
  HUBREG_UpdateUxdSettings(*(_QWORD *)a1, a1, 0LL);
  if ( (*(_DWORD *)(a1 + 1632) & 1) != 0 )
    HUBID_BuildUxdPnpId(a1, (const void **)(a1 + 2120));
  v4 = HUBID_BuildDeviceID(a1, a2);
  if ( v4 >= 0 )
  {
    v4 = HUBID_BuildHardwareID(a1, a2, 0LL, v5);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v4;
      v6 = 116;
      goto LABEL_6;
    }
    v4 = HUBID_BuildCompatibleID(a1, a2, 0LL, v7);
    if ( v4 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v4;
      v6 = 117;
      goto LABEL_6;
    }
    HUBID_BuildContainerID(a1, a2);
    v8 = *(_DWORD *)(a1 + 1632);
    if ( (v8 & 0x40) != 0 )
    {
      if ( (v8 & 2) == 0 )
        DestinationString.MaximumLength = 32;
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 2152));
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1704))(
             WdfDriverGlobals,
             a2,
             &DestinationString);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v4;
        v6 = 118;
        goto LABEL_6;
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v9 + 204) & 0x200) == 0
        || (v10 = *(_WORD *)(v9 + 236)) == 0
        || (*(_DWORD *)(a1 + 1636) & 2) == 0 )
      {
        v10 = *(_WORD *)(v9 + 200);
      }
      v4 = RtlIntegerToUnicodeString(v10, 0xAu, &DestinationString);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v4;
        v6 = 119;
        goto LABEL_6;
      }
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1704))(
             WdfDriverGlobals,
             a2,
             &DestinationString);
      if ( v4 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v4;
        v6 = 120;
        goto LABEL_6;
      }
    }
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 115;
LABEL_6:
    v12 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v6,
      (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
      v12,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
  }
  return (unsigned int)v4;
}
