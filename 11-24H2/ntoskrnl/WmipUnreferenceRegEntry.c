/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14046FC2C
 * Callers:
 *     WmipDeregisterRegEntry @ 0x14046FAA4 (WmipDeregisterRegEntry.c)
 *     WmipEventNotification @ 0x1409CB790 (WmipEventNotification.c)
 *     WmipForwardWmiIrp @ 0x1409CE2C0 (WmipForwardWmiIrp.c)
 *     WmipRegisterDevice @ 0x1409D0548 (WmipRegisterDevice.c)
 *     WmipUpdateRegistration @ 0x1409D091C (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x1409D0C80 (IoWMIRegistrationControl.c)
 *     WmipRegistrationWorker @ 0x1409D10C0 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x140A16544 (WmipFreeTraceDeviceList.c)
 *     IoWMISystemControl @ 0x140A41AC4 (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140A41D60 (WmipQueryWmiDataBlock.c)
 *     WmipDeregisterDevice @ 0x140A684C4 (WmipDeregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
