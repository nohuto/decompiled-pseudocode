/*
 * XREFs of ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x1800B89C0
 * Callers:
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x1800B8B34 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B9178 (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9F24 (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BAB5C (-SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BB214 (-SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BC148 (-SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ @ 0x1800BD644 (-SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x1800BDD44 (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BE33C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BEF40 (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4ResponsiveRotationTimelineReason@23456@@Z @ 0x1800F4B70 (-DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  return a1;
}
