/*
 * XREFs of ?ndisIfCompartmentSubsystemInitializePhase1@@YAXXZ @ 0x1401999B8
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1401998DC (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline @ 0x1400D2BF0 (Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline.c)
 */

void ndisIfCompartmentSubsystemInitializePhase1(void)
{
  qword_140126AF8 = (__int64)&qword_140126AF0;
  qword_140126AF0 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0;
  if ( !(unsigned int)Feature_TCPIP_RevertContainerAsyncNotification__private_IsEnabledDeviceUsageNoInline() )
  {
    stru_140126B00.Context = 0LL;
    qword_140126AE8 = (__int64)&qword_140126AE0;
    qword_140126AE0 = (__int64)&qword_140126AE0;
    stru_140126B00.Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisIfCompartmentNotificationWorker;
  }
}
