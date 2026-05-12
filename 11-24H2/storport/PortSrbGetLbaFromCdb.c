/*
 * XREFs of PortSrbGetLbaFromCdb @ 0x14013AC9C
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 *     IsZonedWriteRequest @ 0x140025E10 (IsZonedWriteRequest.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x140054864 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x14006D564 (RaidUpdateZoneIoSubmission.c)
 *     ScsiReadWriteRequest @ 0x140115E44 (ScsiReadWriteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbGetLbaFromCdb(unsigned __int8 *a1, int a2)
{
  __int64 v3; // [rsp+18h] [rbp+18h]

  if ( a2 != 16 )
    return a1[5] | ((a1[4] | ((a1[3] | (a1[2] << 8)) << 8)) << 8);
  HIBYTE(v3) = a1[2];
  BYTE6(v3) = a1[3];
  BYTE5(v3) = a1[4];
  BYTE4(v3) = a1[5];
  BYTE3(v3) = a1[6];
  BYTE2(v3) = a1[7];
  BYTE1(v3) = a1[8];
  LOBYTE(v3) = a1[9];
  return v3;
}
