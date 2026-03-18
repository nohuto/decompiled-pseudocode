/*
 * XREFs of Controller_QueryControllerCapabilitiesFromACPI @ 0x140041BAC
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079620 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     Controller_ExecuteDSM @ 0x14008187C (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_QueryControllerCapabilitiesFromACPI(__int64 a1)
{
  int v2; // eax
  int v3; // edx

  if ( !*(_DWORD *)(a1 + 1036) )
  {
    if ( *(_BYTE *)(a1 + 1001) )
    {
      *(_DWORD *)(a1 + 1036) = 0;
    }
    else if ( (Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL) & 1) != 0 )
    {
      v2 = Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL);
      if ( v2 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = v2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 4;
          WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 267, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        }
        *(_DWORD *)(a1 + 1036) = 1;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 262, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
    }
  }
}
