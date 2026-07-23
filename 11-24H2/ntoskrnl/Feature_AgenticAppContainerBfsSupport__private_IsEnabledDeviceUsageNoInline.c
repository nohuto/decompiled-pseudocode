/*
 * XREFs of Feature_AgenticAppContainerBfsSupport__private_IsEnabledDeviceUsageNoInline @ 0x14060550C
 * Callers:
 *     SepVariableInitialization @ 0x140C39A60 (SepVariableInitialization.c)
 * Callees:
 *     Feature_AgenticAppContainerBfsSupport__private_IsEnabledFallback @ 0x140605544 (Feature_AgenticAppContainerBfsSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_AgenticAppContainerBfsSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AgenticAppContainerBfsSupport__private_featureState & 0x10) != 0 )
    return Feature_AgenticAppContainerBfsSupport__private_featureState & 1;
  else
    return Feature_AgenticAppContainerBfsSupport__private_IsEnabledFallback(
             (unsigned int)Feature_AgenticAppContainerBfsSupport__private_featureState,
             3LL);
}
