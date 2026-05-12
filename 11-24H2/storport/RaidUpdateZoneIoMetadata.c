/*
 * XREFs of RaidUpdateZoneIoMetadata @ 0x1400282B0
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x140012460 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x140066780 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x140025E10 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoSubmission @ 0x14006D564 (RaidUpdateZoneIoSubmission.c)
 */

void __fastcall RaidUpdateZoneIoMetadata(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && (*(_BYTE *)(a1 + 136) & 2) != 0 )
  {
    v6 = 0;
    if ( IsZonedWriteRequest(a1, a2, a3, &v6) )
    {
      RtlInterlockedClearBitRun(a1 + 3448, v6, 1LL);
      RaidUpdateZoneIoSubmission(a1 + 720, a2, a3);
    }
  }
}
