/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x140076BD8
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140043830 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x140074C78 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     Controller_IsSecureDevice @ 0x1400328B8 (Controller_IsSecureDevice.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x140041408 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_PopulateTestRegistrySettings @ 0x140041A74 (Controller_PopulateTestRegistrySettings.c)
 *     Feature_FSSM__private_IsEnabledDeviceUsageNoInline @ 0x140043DAC (Feature_FSSM__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_O3BDH__private_IsEnabledDeviceUsageNoInline @ 0x140043E00 (Feature_O3BDH__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x140043E54 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_USBEXSVP1__private_ReportDeviceUsage @ 0x140043F50 (Feature_USBEXSVP1__private_ReportDeviceUsage.c)
 *     Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline @ 0x140043FB4 (Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline @ 0x140044008 (Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UXKTV__private_IsEnabledDeviceUsageNoInline @ 0x14004405C (Feature_UXKTV__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_di @ 0x140044AA4 (WPP_RECORDER_SF_di.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x140076EFC (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x140076FF8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateInternalDeviceFlags @ 0x1400778E8 (Controller_PopulateInternalDeviceFlags.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x140077AE0 (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  int v5; // edx
  char v6; // al
  int v7; // edx
  char v8; // al
  _QWORD *v9; // rsi
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-20h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateDeviceFlagsFromACPI(a1);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  Controller_PopulateTestRegistrySettings(a1);
  if ( *(_DWORD *)(a1 + 644) == 1 && *(_WORD *)(a1 + 648) == 0x8086 )
  {
    Feature_USBEXSVP1__private_ReportDeviceUsage();
    *(_BYTE *)(a1 + 1002) = 1;
  }
  v4 = 0;
  if ( (unsigned int)Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline()
    && *(_DWORD *)(a1 + 644) == 1
    && *(_WORD *)(a1 + 648) == 4130 )
  {
    *(_BYTE *)(a1 + 1002) = 1;
  }
  if ( (unsigned int)Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline() && *(_DWORD *)(a1 + 644) == 1 )
    *(_BYTE *)(a1 + 1002) = 1;
  if ( (unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline() )
    *(_QWORD *)(a1 + 744) &= ~0x200000uLL;
  if ( (unsigned int)Feature_FSSM__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v5, 4, 175, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    v6 = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v5, 4, 176, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    v6 = 0;
  }
  *(_BYTE *)(a1 + 1003) = v6;
  if ( (unsigned int)Feature_UXKTV__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v7, 4, 177, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    v8 = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v7, 4, 178, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    v8 = 0;
  }
  *(_BYTE *)(a1 + 1004) = v8;
  if ( (unsigned int)Feature_O3BDH__private_IsEnabledDeviceUsageNoInline()
    && *(_DWORD *)(a1 + 644) == 2
    && !_stricmp((const char *)(a1 + 704), "QCOM")
    && (!_stricmp((const char *)(a1 + 709), "0FEF")
     || !_stricmp((const char *)(a1 + 709), "0FED")
     || !_stricmp((const char *)(a1 + 709), "0FEE")
     || !_stricmp((const char *)(a1 + 709), "0F8B")
     || !_stricmp((const char *)(a1 + 709), "0F8C")
     || !_stricmp((const char *)(a1 + 709), "0F9A")) )
  {
    *(_QWORD *)(a1 + 744) &= ~0x80000uLL;
  }
  v9 = (_QWORD *)(a1 + 736);
  if ( Controller_IsSecureDevice(a1) )
    *v9 |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 1033) )
    *(_QWORD *)(a1 + 744) &= ~1uLL;
  result = Controller_PopulateInternalDeviceFlags();
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v4;
      result = WPP_RECORDER_SF_di(
                 *(_QWORD *)(a1 + 72),
                 4u,
                 4u,
                 0xB3u,
                 (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
                 v11,
                 *v9);
    }
    ++v4;
    ++v9;
  }
  while ( v4 < 2 );
  return result;
}
