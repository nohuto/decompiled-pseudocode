/*
 * XREFs of Controller_QueryControllerCapabilitiesFromACPI @ 0x140042054
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140079910 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Controller_ExecuteDSM @ 0x140081BA8 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_QueryControllerCapabilitiesFromACPI(__int64 a1)
{
  int v2; // eax
  int v3; // edx

  if ( !*(_DWORD *)(a1 + 1044) )
  {
    if ( *(_BYTE *)(a1 + 1001) )
    {
      *(_DWORD *)(a1 + 1044) = 0;
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
          WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 267, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
        }
        *(_DWORD *)(a1 + 1044) = 1;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 262, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
      }
    }
  }
}
