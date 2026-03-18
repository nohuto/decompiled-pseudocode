/*
 * XREFs of Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140274CD4
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1400A83D8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     EditionInitiateMouseEventProcessing @ 0x1402308C0 (EditionInitiateMouseEventProcessing.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x14023FB40 (xxxCleanupThreadPointerInputInfo.c)
 *     EditionActivateMitInput @ 0x14023FBB0 (EditionActivateMitInput.c)
 *     EditionDeactivateMitInput @ 0x14023FCE0 (EditionDeactivateMitInput.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140274038 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x140274624 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 *     EditionExtensibility_WakeMITForInterceptCallout @ 0x140274B10 (EditionExtensibility_WakeMITForInterceptCallout.c)
 *     EditionPrepareHidForInputThreadMigration @ 0x140279AD0 (EditionPrepareHidForInputThreadMigration.c)
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledFallback @ 0x140274D0C (Feature_EliminateMitRitHandoff2__private_IsEnabledFallback.c)
 */

__int64 Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_EliminateMitRitHandoff2__private_featureState & 0x10) != 0 )
    return Feature_EliminateMitRitHandoff2__private_featureState & 1;
  else
    return Feature_EliminateMitRitHandoff2__private_IsEnabledFallback(
             (unsigned int)Feature_EliminateMitRitHandoff2__private_featureState,
             3LL);
}
