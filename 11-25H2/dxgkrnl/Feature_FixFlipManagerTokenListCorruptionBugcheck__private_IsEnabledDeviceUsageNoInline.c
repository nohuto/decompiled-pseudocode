/*
 * XREFs of Feature_FixFlipManagerTokenListCorruptionBugcheck__private_IsEnabledDeviceUsageNoInline @ 0x140097C14
 * Callers:
 *     ??0CFlipManagerToken@@QEAA@XZ @ 0x14004D3AC (--0CFlipManagerToken@@QEAA@XZ.c)
 *     ?AddToFrameTokenList@CFlipManagerToken@@QEAAXAEAU_LIST_ENTRY@@@Z @ 0x14005E08C (-AddToFrameTokenList@CFlipManagerToken@@QEAAXAEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     Feature_FixFlipManagerTokenListCorruptionBugcheck__private_IsEnabledFallback @ 0x140097C4C (Feature_FixFlipManagerTokenListCorruptionBugcheck__private_IsEnabledFallback.c)
 */

__int64 Feature_FixFlipManagerTokenListCorruptionBugcheck__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixFlipManagerTokenListCorruptionBugcheck__private_featureState & 0x10) != 0 )
    return Feature_FixFlipManagerTokenListCorruptionBugcheck__private_featureState & 1;
  else
    return Feature_FixFlipManagerTokenListCorruptionBugcheck__private_IsEnabledFallback(
             (unsigned int)Feature_FixFlipManagerTokenListCorruptionBugcheck__private_featureState,
             3LL);
}
