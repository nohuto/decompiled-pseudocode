/*
 * XREFs of PopDelayedPdcRegistrationWorker @ 0x14075D450
 * Callers:
 *     <none>
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x140761B4C (PopAdaptiveStandbyInitializeActivator.c)
 */

__int64 PopDelayedPdcRegistrationWorker()
{
  __int64 result; // rax

  PopAdaptiveStandbyInitializeActivator();
  result = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( !(_DWORD)result )
    return PopAdaptiveStandbyInitializeActivator();
  return result;
}
