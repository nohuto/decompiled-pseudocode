/*
 * XREFs of SmpGetProcessPartition @ 0x1404933CC
 * Callers:
 *     SmProcessCompressionAcceleratorRequest @ 0x14079797C (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x140797B20 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x140797D74 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x140798068 (SmProcessDeleteRequest.c)
 *     SmProcessListRequest @ 0x1407980E8 (SmProcessListRequest.c)
 *     SmProcessRegistrationRequest @ 0x1407985CC (SmProcessRegistrationRequest.c)
 *     SmProcessResizeRequest @ 0x140798690 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1407987A8 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x140798F8C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140799240 (SmcProcessDeleteRequest.c)
 *     SmcProcessListRequest @ 0x1407992C8 (SmcProcessListRequest.c)
 *     SmcProcessResizeRequest @ 0x14079945C (SmcProcessResizeRequest.c)
 *     SmcProcessStatsRequest @ 0x14079953C (SmcProcessStatsRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x140799754 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1407998C0 (SmcProcessStoreDeleteRequest.c)
 *     SmProcessCompressionInfoRequest @ 0x140A120D4 (SmProcessCompressionInfoRequest.c)
 *     SmProcessCreateNotification @ 0x140A38394 (SmProcessCreateNotification.c)
 *     SmpKeyedStoreCreate @ 0x140A383F4 (SmpKeyedStoreCreate.c)
 *     SmStoreCompressionStop @ 0x140A4375C (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140A438B0 (SmStoreCompressionStart.c)
 *     SmProcessDeleteNotification @ 0x140A4863C (SmProcessDeleteNotification.c)
 *     SmSetStoreInformation @ 0x140A57E40 (SmSetStoreInformation.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140A57F94 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140A58168 (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpGetProcessPartition(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL);
}
