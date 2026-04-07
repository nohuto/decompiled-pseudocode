/*
 * XREFs of ?RegisterGlobalTimeChangeNotification@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18009B314
 * Callers:
 *     ?StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x18008AF10 (-StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18008B20C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x180094B48 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BE184 (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE220 (-StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BEDA4 (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BEE40 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BF7C8 (-SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF870 (-StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BFE14 (-SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800C0988 (-SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800C0A30 (-StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ @ 0x1800C1690 (-SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800C1730 (-StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800C1EFC (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800C25C8 (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800C2670 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplayAnimatedVisual::RegisterGlobalTimeChangeNotification(CDisplayAnimatedVisual *this)
{
  *((_BYTE *)this + 386) = 1;
  return CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(this);
}
