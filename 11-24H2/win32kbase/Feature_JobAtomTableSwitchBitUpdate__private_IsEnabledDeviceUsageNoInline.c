/*
 * XREFs of Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401AA508
 * Callers:
 *     DeleteStringPropertyAtoms @ 0x140168CA0 (DeleteStringPropertyAtoms.c)
 *     RealInternalSetProp @ 0x140168EA0 (RealInternalSetProp.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401A9B8C (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 * Callees:
 *     Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledFallback @ 0x1401AA540 (Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledFallback.c)
 */

__int64 Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_JobAtomTableSwitchBitUpdate__private_featureState & 0x10) != 0 )
    return Feature_JobAtomTableSwitchBitUpdate__private_featureState & 1;
  else
    return Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledFallback(
             (unsigned int)Feature_JobAtomTableSwitchBitUpdate__private_featureState,
             3LL);
}
