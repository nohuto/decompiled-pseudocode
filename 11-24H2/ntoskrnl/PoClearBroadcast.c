/*
 * XREFs of PoClearBroadcast @ 0x140A881F0
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x140A88168 (PopDirectedDripsDestroyBroadcast.c)
 *     PnprWakeDevices @ 0x140B57224 (PnprWakeDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1404648C4 (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x1404D25A8 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140B6ED74 (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140F0B910;
  if ( qword_140F0B910 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140F0B910 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
