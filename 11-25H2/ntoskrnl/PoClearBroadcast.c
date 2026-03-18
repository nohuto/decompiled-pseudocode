/*
 * XREFs of PoClearBroadcast @ 0x140A86FE8
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x140A86F60 (PopDirectedDripsDestroyBroadcast.c)
 *     PnprWakeDevices @ 0x140B451D4 (PnprWakeDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14046D2B4 (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x1404DA1A8 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140B5E3F4 (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140F0AA30;
  if ( qword_140F0AA30 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140F0AA30 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
