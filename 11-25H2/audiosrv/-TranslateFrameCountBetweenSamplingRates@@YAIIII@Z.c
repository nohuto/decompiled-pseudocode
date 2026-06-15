/*
 * XREFs of ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1801086E0
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x180030A00 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180038600 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateFrameCountBetweenSamplingRates(int a1, int a2, int a3)
{
  __int64 result; // rax

  result = (unsigned int)(int)((double)(int)((double)a1 * 10000000.0 / (double)a2 + 0.5) * (double)a3 / 10000000.0 + 0.5);
  if ( a1 )
  {
    if ( !(_DWORD)result )
      return 1LL;
  }
  return result;
}
