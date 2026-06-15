/*
 * XREFs of ??2CConnectionNode@@SAPEAX_K@Z @ 0x14000CCD0
 * Callers:
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000CB18 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000D260 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x140027360 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

void *__fastcall CConnectionNode::operator new()
{
  void *v0; // rax

  v0 = AERTGetDLLRTHeap();
  return AERTAllocate(0xA8uLL, v0);
}
