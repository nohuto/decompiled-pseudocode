/*
 * XREFs of ACPIInternalStoreInterfaceName @ 0x1400565AC
 * Callers:
 *     ACPIInternalSetDeviceInterface @ 0x1400507B8 (ACPIInternalSetDeviceInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIInternalStoreInterfaceName(_QWORD *a1, __int128 *a2, _OWORD *a3)
{
  __int64 result; // rax
  __int128 v4; // xmm0

  result = *a1 - *(_QWORD *)&GUID_ACPI_ROOT_DEVICE_UUID.Data1;
  if ( *a1 == *(_QWORD *)&GUID_ACPI_ROOT_DEVICE_UUID.Data1 )
    result = a1[1] - *(_QWORD *)GUID_ACPI_ROOT_DEVICE_UUID.Data4;
  if ( result )
  {
    result = *a1 - *(_QWORD *)&GUID_DEVICE_SYS_BUTTON.Data1;
    if ( *a1 == *(_QWORD *)&GUID_DEVICE_SYS_BUTTON.Data1 )
      result = a1[1] - *(_QWORD *)GUID_DEVICE_SYS_BUTTON.Data4;
    if ( result )
    {
      result = *a1 - *(_QWORD *)&GUID_DEVICE_FAN.Data1;
      if ( *a1 == *(_QWORD *)&GUID_DEVICE_FAN.Data1 )
        result = a1[1] - *(_QWORD *)GUID_DEVICE_FAN.Data4;
      if ( result )
      {
        result = *a1 - *(_QWORD *)&GUID_DEVINTERFACE_THERMAL_COOLING.Data1;
        if ( *a1 == *(_QWORD *)&GUID_DEVINTERFACE_THERMAL_COOLING.Data1 )
          result = a1[1] - *(_QWORD *)GUID_DEVINTERFACE_THERMAL_COOLING.Data4;
        if ( result )
        {
          result = *a1 - *(_QWORD *)&GUID_DEVICE_THERMAL_ZONE.Data1;
          if ( *a1 == *(_QWORD *)&GUID_DEVICE_THERMAL_ZONE.Data1 )
            result = a1[1] - *(_QWORD *)GUID_DEVICE_THERMAL_ZONE.Data4;
          if ( result )
          {
            result = *a1 - *(_QWORD *)&GUID_DEVICE_PROCESSOR.Data1;
            if ( *a1 == *(_QWORD *)&GUID_DEVICE_PROCESSOR.Data1 )
              result = a1[1] - *(_QWORD *)GUID_DEVICE_PROCESSOR.Data4;
            v4 = *a2;
            if ( result )
              a3[69] = v4;
            else
              a3[66] = v4;
          }
          else
          {
            a3[68] = *a2;
          }
        }
        else
        {
          a3[64] = *a2;
        }
      }
      else
      {
        a3[65] = *a2;
      }
    }
    else
    {
      a3[63] = *a2;
    }
  }
  else
  {
    a3[67] = *a2;
  }
  return result;
}
