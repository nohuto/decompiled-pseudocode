/*
 * XREFs of ?GetFixedBTAudio_StreamContextFromFlowAndProcessingMode@CBtLeAudioResourceManager@@EEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@U_GUID@@@Z @ 0x1800E4750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtLeAudioResourceManager::GetFixedBTAudio_StreamContextFromFlowAndProcessingMode(
        __int64 a1,
        int a2,
        _QWORD *a3)
{
  if ( a2 == 1 )
    return 2LL;
  if ( *a3 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
    && a3[1] == *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
  {
    return 4LL;
  }
  if ( *a3 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1
    && a3[1] == *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4 )
  {
    return 2LL;
  }
  else
  {
    return 1LL;
  }
}
