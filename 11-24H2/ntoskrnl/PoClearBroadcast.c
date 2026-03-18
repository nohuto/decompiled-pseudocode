/*
 * XREFs of PoClearBroadcast @ 0x140A8BD00
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x140A8BC78 (PopDirectedDripsDestroyBroadcast.c)
 *     PnprWakeDevices @ 0x140B551D4 (PnprWakeDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14046BC44 (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x1404D9158 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140B6D4D4 (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140F0BDF0;
  if ( qword_140F0BDF0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140F0BDF0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
