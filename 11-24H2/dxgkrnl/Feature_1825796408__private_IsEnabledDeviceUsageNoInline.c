/*
 * XREFs of Feature_1825796408__private_IsEnabledDeviceUsageNoInline @ 0x1400678F4
 * Callers:
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1403C8B88 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x140407EB0 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x14040805C (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     Feature_1825796408__private_IsEnabledFallback @ 0x14006792C (Feature_1825796408__private_IsEnabledFallback.c)
 */

__int64 Feature_1825796408__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1825796408__private_featureState & 0x10) != 0 )
    return Feature_1825796408__private_featureState & 1;
  else
    return Feature_1825796408__private_IsEnabledFallback((unsigned int)Feature_1825796408__private_featureState, 3LL);
}
