/*
 * XREFs of SmpGetProcessPartition @ 0x140498A6C
 * Callers:
 *     SmProcessCompressionAcceleratorRequest @ 0x14079786C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140797A10 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x140797C64 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x140797F58 (SmProcessDeleteRequest.c)
 *     SmProcessListRequest @ 0x140797FD8 (SmProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x1407984BC (SmProcessRegistrationRequest.c)
 *     SmProcessResizeRequest @ 0x140798580 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x140798698 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140798E7C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140799130 (SmcProcessDeleteRequest.c)
 *     SmcProcessListRequest @ 0x1407991B8 (SmcProcessListRequest.c)
 *     SmcProcessResizeRequest @ 0x14079934C (SmcProcessResizeRequest.c)
 *     SmcProcessStatsRequest @ 0x14079942C (SmcProcessStatsRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x140799644 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1407997B0 (SmcProcessStoreDeleteRequest.c)
 *     SmProcessCompressionInfoRequest @ 0x140A18F64 (SmProcessCompressionInfoRequest.c)
 *     SmProcessCreateNotification @ 0x140A42B04 (SmProcessCreateNotification.c)
 *     SmpKeyedStoreCreate @ 0x140A42B64 (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStop @ 0x140A4CBCC (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A4CD20 (SmStoreCompressionStart.c)
 *     SmProcessDeleteNotification @ 0x140A51570 (SmProcessDeleteNotification.c)
 *     SmSetStoreInformation @ 0x140A5F8F0 (SmSetStoreInformation.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A5FA44 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A5FC18 (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL);
}
