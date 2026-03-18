/*
 * XREFs of Controller_PopulateDeviceFlags @ 0x140076CC0
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140043CE0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Controller_IsSecureDevice @ 0x140034338 (Controller_IsSecureDevice.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1400418B0 (Controller_PopulateDeviceFlagsFromKse.c)
 *     Controller_PopulateTestRegistrySettings @ 0x140041F1C (Controller_PopulateTestRegistrySettings.c)
 *     Feature_FSSM__private_IsEnabledDeviceUsageNoInline @ 0x140044208 (Feature_FSSM__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_O3BDH__private_IsEnabledDeviceUsageNoInline @ 0x14004425C (Feature_O3BDH__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x1400442B0 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SBDFESSOA__private_IsEnabledDeviceUsageNoInline @ 0x140044304 (Feature_SBDFESSOA__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledDeviceUsageNoInline @ 0x1400443AC (Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UARRTVS2__private_IsEnabledDeviceUsageNoInline @ 0x140044400 (Feature_UARRTVS2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_USBEXSVP1__private_ReportDeviceUsage @ 0x140044454 (Feature_USBEXSVP1__private_ReportDeviceUsage.c)
 *     Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline @ 0x1400444B8 (Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline @ 0x14004450C (Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UXTM__private_IsEnabledDeviceUsageNoInline @ 0x140044560 (Feature_UXTM__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_di @ 0x140044FA8 (WPP_RECORDER_SF_di.c)
 *     Controller_PopulateDeviceFlagsFromACPI @ 0x1400771E8 (Controller_PopulateDeviceFlagsFromACPI.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1400772E4 (Controller_PopulateDeviceFlagsFromRegistry.c)
 *     Controller_PopulateInternalDeviceFlags @ 0x140077BD4 (Controller_PopulateInternalDeviceFlags.c)
 *     Controller_PopulateRegistryOverrideForSetMultiTTBitFlag @ 0x140077DCC (Controller_PopulateRegistryOverrideForSetMultiTTBitFlag.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlags(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  unsigned int v5; // edi
  char v6; // al
  int IsEnabledDeviceUsageNoInline; // eax
  int v8; // edx
  _DWORD *v9; // rsi
  __int16 v10; // ax
  int v11; // edx
  bool v12; // zf
  __int16 v13; // ax
  __int16 v14; // ax
  int v15; // edx
  char v16; // al
  _QWORD *v17; // rsi
  __int64 result; // rax
  __int64 v19; // [rsp+28h] [rbp-30h]

  Controller_PopulateDeviceFlagsFromKse(a1, a2, a3);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 2LL);
  Controller_PopulateDeviceFlagsFromRegistry(a1, 1LL);
  Controller_PopulateDeviceFlagsFromACPI(a1);
  Controller_PopulateRegistryOverrideForSetMultiTTBitFlag(a1);
  Controller_PopulateTestRegistrySettings(a1);
  v5 = 0;
  if ( (unsigned int)Feature_SBDFESSOA__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v4, 4, 174, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    v6 = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v4, 4, 175, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    v6 = 0;
  }
  *(_BYTE *)(a1 + 1004) = v6;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_Usb3AMDRuntimeRegistersToVTL0__private_IsEnabledDeviceUsageNoInline();
  v8 = 4130;
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v8, 4, 176, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    *(_BYTE *)(a1 + 1003) = 1;
    v9 = (_DWORD *)(a1 + 644);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v8, 4, 177, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    *(_BYTE *)(a1 + 1003) = 0;
    v9 = (_DWORD *)(a1 + 644);
    if ( *(_DWORD *)(a1 + 644) == 1 && *(_WORD *)(a1 + 648) == 4130 )
    {
      v10 = *(_WORD *)(a1 + 652);
      if ( v10 == 5562 || v10 == 5391 || v10 == 5406 || v10 == 5511 || v10 == 4392 || v10 == 4405 )
      {
        v9 = (_DWORD *)(a1 + 644);
        *(_QWORD *)(a1 + 744) = *(_QWORD *)(a1 + 744) & 0xFFFFFFFFFBFF9FFFuLL | 0x6000;
      }
    }
  }
  if ( (unsigned int)Feature_UARRTVS2__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v11, 4, 178, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    *(_BYTE *)(a1 + 1005) = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v11, 4, 179, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    v12 = *v9 == 1;
    *(_BYTE *)(a1 + 1005) = 0;
    if ( v12 && *(_WORD *)(a1 + 648) == 4130 )
    {
      v13 = *(_WORD *)(a1 + 652);
      if ( v13 == 5663 || v13 == 5381 || v13 == 5560 || v13 == 5565 )
        *(_QWORD *)(a1 + 744) = *(_QWORD *)(a1 + 744) & 0xFFFFFFFFFBFF9FFFuLL | 0x6000;
    }
  }
  if ( !(unsigned int)Feature_UXTM__private_IsEnabledDeviceUsageNoInline() && *v9 == 1 && *(_WORD *)(a1 + 648) == 0x8086 )
  {
    v14 = *(_WORD *)(a1 + 652);
    if ( v14 == -7375 || v14 == -7119 || v14 == 19761 )
      *(_QWORD *)(a1 + 744) |= 0x400000uLL;
  }
  if ( !(unsigned int)Feature_UMPERS__private_IsEnabledDeviceUsageNoInline() )
    *(_QWORD *)(a1 + 744) &= ~0x8000000uLL;
  if ( *v9 == 1 && *(_WORD *)(a1 + 648) == 0x8086 )
  {
    Feature_USBEXSVP1__private_ReportDeviceUsage();
    *(_BYTE *)(a1 + 1002) = 1;
  }
  if ( (unsigned int)Feature_USBEXSVPA__private_IsEnabledDeviceUsageNoInline()
    && *v9 == 1
    && *(_WORD *)(a1 + 648) == 4130 )
  {
    *(_BYTE *)(a1 + 1002) = 1;
  }
  if ( (unsigned int)Feature_USBEXSVPX__private_IsEnabledDeviceUsageNoInline() && *v9 == 1 )
    *(_BYTE *)(a1 + 1002) = 1;
  if ( (unsigned int)Feature_RH1S__private_IsEnabledDeviceUsageNoInline() )
    *(_QWORD *)(a1 + 744) &= ~0x200000uLL;
  if ( (unsigned int)Feature_FSSM__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v15, 4, 180, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    v16 = 1;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v15, 4, 181, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
    v16 = 0;
  }
  *(_BYTE *)(a1 + 1006) = v16;
  if ( (unsigned int)Feature_O3BDH__private_IsEnabledDeviceUsageNoInline()
    && *v9 == 2
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
  v17 = (_QWORD *)(a1 + 736);
  if ( Controller_IsSecureDevice(a1) )
    *v17 |= 0x20080uLL;
  if ( !*(_BYTE *)(a1 + 1041) )
    *(_QWORD *)(a1 + 744) &= ~1uLL;
  result = Controller_PopulateInternalDeviceFlags();
  do
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = v5;
      result = WPP_RECORDER_SF_di(
                 *(_QWORD *)(a1 + 72),
                 4u,
                 4u,
                 0xB6u,
                 (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
                 v19,
                 *v17);
    }
    ++v5;
    ++v17;
  }
  while ( v5 < 2 );
  return result;
}
