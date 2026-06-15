/*
 * XREFs of WPP_SF_g @ 0x1800C34A0
 * Callers:
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x18001D484 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x18004D5B0 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180085930 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_g(__int64 a1, unsigned __int16 a2, __int64 a3, double a4)
{
  __int64 v5; // [rsp+38h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp-8h]
  double v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v7, 8LL, 0LL, v5, v6);
}
