/*
 * XREFs of ?ReleaseReference@DXGKVMB_SINGLEPACKETCONTEXT@@QEAAXXZ @ 0x140058008
 * Callers:
 *     ?VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@PEAUDXGKVMB_SINGLEPACKETCONTEXT@@@Z @ 0x1400225B0 (-VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x140030E14 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___.c)
 *     ?SinglePacketCompletionRoutine@@YAXPEAUVMBPACKET__@@JPEAXI@Z @ 0x140057F90 (-SinglePacketCompletionRoutine@@YAXPEAUVMBPACKET__@@JPEAXI@Z.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1400777F0 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___ @ 0x1400779BC (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x140077B6C (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___ @ 0x140077D04 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x140077EB8 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGKVMB_SINGLEPACKETCONTEXT::ReleaseReference(DXGKVMB_SINGLEPACKETCONTEXT *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(this, 0x42677844u);
}
