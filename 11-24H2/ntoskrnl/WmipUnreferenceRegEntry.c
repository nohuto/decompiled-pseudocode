/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14046A188
 * Callers:
 *     WmipDeregisterRegEntry @ 0x14046A000 (WmipDeregisterRegEntry.c)
 *     WmipRegistrationWorker @ 0x1409AFCD0 (WmipRegistrationWorker.c)
 *     WmipEventNotification @ 0x1409B1EB0 (WmipEventNotification.c)
 *     WmipForwardWmiIrp @ 0x1409B3294 (WmipForwardWmiIrp.c)
 *     WmipFreeTraceDeviceList @ 0x140A0F724 (WmipFreeTraceDeviceList.c)
 *     IoWMISystemControl @ 0x140A373A4 (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140A37640 (WmipQueryWmiDataBlock.c)
 *     IoWMIRegistrationControl @ 0x140A49C40 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140A49D98 (WmipRegisterDevice.c)
 *     WmipUpdateRegistration @ 0x140A49F68 (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140A61874 (WmipDeregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
