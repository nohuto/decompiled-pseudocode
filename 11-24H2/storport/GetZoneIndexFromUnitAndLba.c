/*
 * XREFs of GetZoneIndexFromUnitAndLba @ 0x14006CE84
 * Callers:
 *     RaidStartIoPacket @ 0x140004760 (RaidStartIoPacket.c)
 *     RiNormalizeDeviceQueue @ 0x1400138C0 (RiNormalizeDeviceQueue.c)
 *     IsZonedWriteRequest @ 0x140025E10 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x140054864 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x14006D564 (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     GetZoneCountFromUnit @ 0x14006CDBC (GetZoneCountFromUnit.c)
 *     McTemplateK0sssxiqxqq_EtwWriteTransfer @ 0x14006D180 (McTemplateK0sssxiqxqq_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall GetZoneIndexFromUnitAndLba(__int64 a1, ULONG_PTR a2)
{
  char ZoneCountFromUnit; // al
  int v5; // r8d
  char v6; // al

  if ( a2 > *(_QWORD *)(a1 + 3464) )
  {
    ZoneCountFromUnit = GetZoneCountFromUnit(a1);
    ++*(_DWORD *)(a1 + 3476);
    v6 = ZoneCountFromUnit - 1;
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_140171464 & 2) != 0 )
        McTemplateK0sssxiqxqq_EtwWriteTransfer(
          a1 + 242,
          a1 + 177,
          v5,
          a1 + 168,
          a1 + 177,
          a1 + 242,
          a2,
          *(_QWORD *)(a1 + 3464),
          *(_DWORD *)(a1 + 932),
          *(_QWORD *)(a1 + 3416),
          *(_DWORD *)(a1 + 3472),
          v6);
    }
    KeBugCheckEx(0x2Cu, 0x16AEuLL, a2, *(_QWORD *)(a1 + 3464), 0LL);
  }
  return a2 * *(unsigned int *)(a1 + 932) / *(_QWORD *)(a1 + 3416);
}
