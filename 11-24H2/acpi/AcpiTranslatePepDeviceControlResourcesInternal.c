/*
 * XREFs of AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400A1F20
 * Callers:
 *     AcpiTranslatePepDeviceControlResources @ 0x1400A1EE0 (AcpiTranslatePepDeviceControlResources.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qqD @ 0x140065620 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x140065774 (WPP_RECORDER_SF_sqqD.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     AcpiValidatePepDeviceControlResources @ 0x1400A2104 (AcpiValidatePepDeviceControlResources.c)
 *     PnpBiosResourcesToNtResources @ 0x1400BB1A4 (PnpBiosResourcesToNtResources.c)
 *     PnpIoResourceListToCmResourceList @ 0x1400BF880 (PnpIoResourceListToCmResourceList.c)
 */

__int64 __fastcall AcpiTranslatePepDeviceControlResourcesInternal(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        void *a5,
        _DWORD *a6)
{
  int v7; // ebx

  if ( a2 && a3 )
  {
    v7 = PnpBiosResourcesToNtResources(a1, a2, 4LL);
    if ( v7 >= 0 )
    {
      if ( *a6 >= 0x28u )
      {
        memmove(a5, 0LL, 0x28uLL);
        v7 = 0;
      }
      else
      {
        v7 = -1073741789;
      }
      *a6 = 40;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x1Eu,
        (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
        a2,
        v7);
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return (unsigned int)v7;
}
