/*
 * XREFs of ?GetFixedBTAudio_StreamContextFromFlowAndProcessingMode@CBtAudioResourceManager@@EEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@U_GUID@@@Z @ 0x1800D9F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtAudioResourceManager::GetFixedBTAudio_StreamContextFromFlowAndProcessingMode(
        __int64 a1,
        int a2,
        _QWORD *a3)
{
  if ( a2 == 1 )
    return 2LL;
  if ( *a3 == 0x4FD1B4939E90EA20LL && a3[1] == 0xCF56A961137EA8A1uLL )
    return 4LL;
  if ( *a3 == 0x48B1B9CD98951333LL && a3[1] == 0xF7732D6840FFA3A0uLL )
    return 2LL;
  else
    return 1LL;
}
