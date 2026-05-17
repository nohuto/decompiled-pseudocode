/*
 * XREFs of Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline @ 0x18013C074
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1801191C0 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     <none>
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
