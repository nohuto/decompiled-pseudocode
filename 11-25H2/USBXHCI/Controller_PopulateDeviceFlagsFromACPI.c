/*
 * XREFs of Controller_PopulateDeviceFlagsFromACPI @ 0x1400771E8
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140076CC0 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Controller_ExecuteDSM @ 0x140081BA8 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromACPI(__int64 a1)
{
  int v2; // edx
  __int64 result; // rax
  int v4; // edx

  if ( (*(_BYTE *)(a1 + 736) & 1) == 0 && (unsigned int)Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL) == 1 )
  {
    *(_QWORD *)(a1 + 736) |= 1uLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v2, 4, 170, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
  }
  result = *(unsigned int *)(a1 + 744);
  if ( (result & 0x100000) == 0 )
  {
    result = Controller_ExecuteDSM(a1, &GUID_DSM_QUERY_HSII_WORKAROUND_STATUS, 0LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 744) |= 0x100000uLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        return WPP_RECORDER_SF_(
                 *(_QWORD *)(a1 + 72),
                 v4,
                 4,
                 171,
                 (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
      }
    }
  }
  return result;
}
