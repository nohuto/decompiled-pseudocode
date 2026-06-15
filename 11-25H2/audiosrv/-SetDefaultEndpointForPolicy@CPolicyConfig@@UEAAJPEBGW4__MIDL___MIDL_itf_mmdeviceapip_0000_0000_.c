/*
 * XREFs of ?SetDefaultEndpointForPolicy@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180101380
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18011EEF0 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 */

__int64 __fastcall CPolicyConfig::SetDefaultEndpointForPolicy(__int64 a1, __int64 a2)
{
  int v2; // ebx

  if ( !a2 )
  {
    v2 = -2147467261;
LABEL_4:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDefaultEndpointForPolicy", 1502, v2);
    return (unsigned int)v2;
  }
  v2 = DynamicAudioEndpointManager::SetDefaultAudioEndpoint();
  if ( v2 < 0 )
    goto LABEL_4;
  return (unsigned int)v2;
}
