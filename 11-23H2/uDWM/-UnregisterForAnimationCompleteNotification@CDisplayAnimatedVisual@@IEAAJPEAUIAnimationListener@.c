/*
 * XREFs of ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800B80D0
 * Callers:
 *     ?StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B92D0 (-StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BA1D0 (-StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BACD0 (-StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BB430 (-StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800BC2A0 (-StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BDF70 (-StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE5F0 (-StopImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF2A0 (-StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18005608C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800560F4 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180056954 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
        CDisplayAnimatedVisual *this,
        struct IAnimationListener *a2,
        unsigned int **a3)
{
  CAnimationEngine *v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // rsi
  unsigned int v8; // edi

  v5 = CDesktopManager::AcquireAnimationEngine();
  if ( v6 )
  {
    v7 = v6;
    do
    {
      if ( **a3 != -1 )
      {
        CAnimationEngine::ScheduleStopAnimation(v5, **a3);
        **a3 = -1;
      }
      ++a3;
      --v7;
    }
    while ( v7 );
  }
  v8 = CAnimationEngine::UnregisterForAnimationCompleteNotification(v5, a2);
  if ( v5 )
    CAnimationEngine::Release(v5);
  return v8;
}
