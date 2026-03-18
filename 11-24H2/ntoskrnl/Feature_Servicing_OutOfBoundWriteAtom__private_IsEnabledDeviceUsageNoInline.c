/*
 * XREFs of Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline @ 0x1405E8CD0
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x140935920 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledFallback @ 0x1405E8D08 (Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_OutOfBoundWriteAtom__private_featureState & 0x10) != 0 )
    return Feature_Servicing_OutOfBoundWriteAtom__private_featureState & 1;
  else
    return Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_OutOfBoundWriteAtom__private_featureState,
             3LL);
}
