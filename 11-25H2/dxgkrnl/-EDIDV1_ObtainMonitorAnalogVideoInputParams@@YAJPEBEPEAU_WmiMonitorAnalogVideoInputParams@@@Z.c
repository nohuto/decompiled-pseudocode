/*
 * XREFs of ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x140093D14
 * Callers:
 *     ?GetAnalogVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1402787D0 (-GetAnalogVideoInputParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInpu.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x14003CDB4 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorAnalogVideoInputParams(
        unsigned __int8 *a1,
        struct _WmiMonitorAnalogVideoInputParams *a2)
{
  __int64 result; // rax
  unsigned int v4; // r11d
  __int64 v5; // rcx
  char v6; // al
  _QWORD v7[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v7[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v5 = v7[0];
    v6 = *(_BYTE *)(v7[0] + 20LL);
    if ( v6 < 0 )
    {
      return (unsigned int)-1073741275;
    }
    else
    {
      a2->SetupExpected = (v6 & 0x10) != 0;
      a2->SeparateSyncsSupported = (*(_BYTE *)(v5 + 20) & 8) != 0;
      a2->CompositeSyncSupported = (*(_BYTE *)(v5 + 20) & 4) != 0;
      a2->SyncOnGreenVideoSupported = (*(_BYTE *)(v5 + 20) & 2) != 0;
      a2->SerrationOfVsyncRequired = *(_BYTE *)(v5 + 20) & 1;
      a2->SignalLevelStandard = (*(_BYTE *)(v5 + 20) >> 5) & 3;
    }
    return v4;
  }
  return result;
}
