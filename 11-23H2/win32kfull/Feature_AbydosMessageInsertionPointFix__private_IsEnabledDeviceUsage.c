/*
 * XREFs of Feature_AbydosMessageInsertionPointFix__private_IsEnabledDeviceUsage @ 0x1C0139D54
 * Callers:
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x1C0139C50 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z.c)
 * Callees:
 *     Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback @ 0x1C0139D8C (Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback.c)
 */

__int64 Feature_AbydosMessageInsertionPointFix__private_IsEnabledDeviceUsage()
{
  if ( (Feature_AbydosMessageInsertionPointFix__private_featureState & 0x10) != 0 )
    return Feature_AbydosMessageInsertionPointFix__private_featureState & 1;
  else
    return Feature_AbydosMessageInsertionPointFix__private_IsEnabledFallback(
             (unsigned int)Feature_AbydosMessageInsertionPointFix__private_featureState,
             3LL);
}
