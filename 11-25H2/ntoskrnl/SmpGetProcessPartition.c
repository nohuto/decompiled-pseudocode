/*
 * XREFs of SmpGetProcessPartition @ 0x140498E1C
 * Callers:
 *     SmProcessCompressionAcceleratorRequest @ 0x14078849C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140788640 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x140788894 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x140788B88 (SmProcessDeleteRequest.c)
 *     SmProcessListRequest @ 0x140788C08 (SmProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x1407890EC (SmProcessRegistrationRequest.c)
 *     SmProcessResizeRequest @ 0x1407891B0 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1407892C8 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140789AAC (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140789D60 (SmcProcessDeleteRequest.c)
 *     SmcProcessListRequest @ 0x140789DE8 (SmcProcessListRequest.c)
 *     SmcProcessResizeRequest @ 0x140789F7C (SmcProcessResizeRequest.c)
 *     SmcProcessStatsRequest @ 0x14078A05C (SmcProcessStatsRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x14078A274 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x14078A3E0 (SmcProcessStoreDeleteRequest.c)
 *     SmSetStoreInformation @ 0x1408E8E30 (SmSetStoreInformation.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1408E8F84 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1408E915C (SmProcessSystemStoreTrimRequest.c)
 *     SmProcessCreateNotification @ 0x1409C13D4 (SmProcessCreateNotification.c)
 *     SmpKeyedStoreCreate @ 0x1409C1434 (SmpKeyedStoreCreate.c)
 *     SmProcessCompressionInfoRequest @ 0x140A124BC (SmProcessCompressionInfoRequest.c)
 *     SmStoreCompressionStop @ 0x140A4A624 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A4A778 (SmStoreCompressionStart.c)
 *     SmProcessDeleteNotification @ 0x140A4DE0C (SmProcessDeleteNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL);
}
