/*
 * XREFs of KiInitializeVelocity @ 0x140C2866C
 * Callers:
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage @ 0x1404F638C (Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage.c)
 *     Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage @ 0x1404F63F4 (Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage.c)
 *     Feature_ShortThreadQuantum__private_ReportDeviceUsage @ 0x1404F645C (Feature_ShortThreadQuantum__private_ReportDeviceUsage.c)
 *     Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledDeviceUsageNoInline @ 0x140544888 (Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledNoReportingNoInline @ 0x1405B4F78 (Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline @ 0x1405B503C (Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline @ 0x1405B50E4 (Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 KiInitializeVelocity()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  Feature_HaltOnAddress_QueuedSpinLock__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x10000u;
  Feature_HaltOnAddress_Barrier__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x20000u;
  Feature_ShortThreadQuantum__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x40000u;
  if ( (unsigned int)Feature_Servicing_IntgrSched_Sleep_Enlightenment__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x80000u;
  if ( (unsigned int)Feature_Servicing_SharedReadyQueueLock__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x200000u;
  if ( (unsigned int)Feature_Servicing_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline() )
    KiVelocityFlags |= 0x800000u;
  result = Feature_IldeLatencyAwareStandbyStealing__private_IsEnabledNoReportingNoInline(v1, v0, v2, v3);
  if ( (_DWORD)result )
    KiVelocityFlags |= 0x1000000u;
  return result;
}
