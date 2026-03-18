/*
 * XREFs of DrvGetDeviceFromName @ 0x140017410
 * Callers:
 *     DrvGetHDEV @ 0x140016460 (DrvGetHDEV.c)
 *     DrvEnumDisplayDevices @ 0x140018880 (DrvEnumDisplayDevices.c)
 *     DrvEnumDisplaySettings @ 0x140024870 (DrvEnumDisplaySettings.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14008DC40 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1401169EC (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x140138FFC (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetPruneFlag @ 0x140148A80 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x14015B8E4 (DrvSetVideoParameters.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401CB320 (DrvPrepareModeListCacheAndLeaveUserCrit.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1401CCF80 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetDeviceFromName(PCUNICODE_STRING String1, __int64 a2)
{
  __int64 i; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(String1, a2) + 88) + 1096LL); ; i = *(_QWORD *)(i + 128) )
  {
    if ( !i )
      return 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(i + 64));
    if ( RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      break;
  }
  return i;
}
