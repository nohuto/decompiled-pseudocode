/*
 * XREFs of Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline @ 0x1404F0ABC
 * Callers:
 *     CmpComputeComponentHashes @ 0x1408476D0 (CmpComputeComponentHashes.c)
 *     CmpHashUnicodeComponent @ 0x140848190 (CmpHashUnicodeComponent.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140875D60 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpCheckLeaf @ 0x140A18B3C (CmpCheckLeaf.c)
 * Callees:
 *     Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledFallback @ 0x14065BEF8 (Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledFallback.c)
 */

__int64 Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CmpHashUnicodeComponentLengthCheck__private_featureState & 0x10) != 0 )
    return Feature_CmpHashUnicodeComponentLengthCheck__private_featureState & 1;
  else
    return Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledFallback(
             (unsigned int)Feature_CmpHashUnicodeComponentLengthCheck__private_featureState,
             3LL);
}
