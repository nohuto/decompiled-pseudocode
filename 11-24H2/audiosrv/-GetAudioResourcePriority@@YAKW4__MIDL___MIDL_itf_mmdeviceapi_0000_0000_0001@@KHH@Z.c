/*
 * XREFs of ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x180058818
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180080980 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?AreResourcesAvailableForStream@@YAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KH@Z @ 0x18010C090 (-AreResourcesAvailableForStream@@YAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetAudioResourcePriority(
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a1,
        unsigned int a2,
        int a3,
        int a4)
{
  __int64 v4; // r10
  int v5; // edx
  int v6; // ecx

  v4 = a2;
  v5 = 0;
  if ( a1 )
    v6 = dword_180195250[v4];
  else
    v6 = dword_1801951F0[v4];
  LOBYTE(v5) = a3 == 0;
  return v5 + 2 * (v6 + (a4 != 0 ? 0x10 : 0));
}
